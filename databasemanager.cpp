#include "databasemanager.h"

DataBaseManager::DataBaseManager()
{
    QString path = "data.db";
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(path);
    connect();
}
void DataBaseManager::connect()
{
    if (!database.open())
    {
        qDebug() << "Error: connection with database fail";
    }
    else
    {
        qDebug() << "Database: connection ok";
    }
}

void DataBaseManager::close()
{
    database.close();
    QSqlDatabase::removeDatabase("QSQLITE");
}

bool DataBaseManager::addRoute(Route route)
{
    bool success = false;

    QSqlQuery query;
    query.prepare("INSERT INTO routes VALUES (NULL, :name, :quantity, :unit)");
    query.bindValue(":name", route.getName());
    query.bindValue(":quantity", route.getDistance().getQuantity());
    query.bindValue(":unit", route.getDistance().quantityToString());

    qDebug() << query.lastQuery();

    if(query.exec())
    {
        success = true;
    }
    else
    {
         qDebug() << "addRoute error: "<< query.lastError();
    }

    return success;
}
/**
 * @brief DataBaseManager::loadAllRoute
 * @return
 */
QList<Route> DataBaseManager::loadAllRoute()
{
    QList<Route> list;

    QSqlQuery query("SELECT * FROM routes");
    int nameColumn = query.record().indexOf("name");
    int quantityColumn = query.record().indexOf("quantity");
    int unitColumn = query.record().indexOf("unit");

    while (query.next())
    {
       QString name = query.value(nameColumn).toString();
       double quantity = query.value(quantityColumn).toDouble();
       int unit = query.value(unitColumn).toInt();

       Route route(name,Distance(quantity,unit));

       list.append(route);
    }

    return list;
}
QList<Route> DataBaseManager::searchRouteByName(QString name)
{
    QList<Route> list;

    QSqlQuery query;
    query.prepare("SELECT * FROM routes WHERE name LIKE '%"+name+"%'");

    //qDebug () << query.lastQuery();

    if(query.exec())
    {

    }
    else
    {
        qDebug() << "searchByName error:  "<< query.lastError();
    }

    int nameColumn = query.record().indexOf("name");
    int quantityColumn = query.record().indexOf("quantity");
    int unitColumn = query.record().indexOf("unit");

    while (query.next())
    {
       QString name = query.value(nameColumn).toString();
       double quantity = query.value(quantityColumn).toDouble();
       int unit = query.value(unitColumn).toInt();

       //qDebug() << name;

       Route route(name,Distance(quantity,unit));

       list.append(route);
    }

    return list;
}
DataBaseManager::~DataBaseManager()
{
    close();
}
