#include "mainwindow.h"
#include "ui_mainwindow.h"

/**
 * @brief MainWindow::MainWindow
 * @param parent
 */
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    errorDialog = new QErrorMessage(this);
    ui->setupUi(this);

    ui->distanceUnitcomboBox->addItem(tr("km"),0);
    ui->distanceUnitcomboBox->addItem(tr("Light-second"),2);
    ui->distanceUnitcomboBox->addItem(tr("Light-minute"),3);
    ui->distanceUnitcomboBox->addItem(tr("Light-hour"),4);
    ui->distanceUnitcomboBox->addItem(tr("Light-year"),5);
    ui->distanceUnitcomboBox->addItem(tr("Astronomical unit"),6);
    ui->distanceUnitcomboBox->addItem(tr("parsec"),1);
    ui->distanceUnitcomboBox->addItem(tr("kiloparsec"),7);
    ui->distanceUnitcomboBox->addItem(tr("megaparsec"),8);

    addAllRouteToTableFromList();
}
/**
 * @brief MainWindow::addRouteToTable
 * @param route
 */
void MainWindow::addRouteToTable(Route route)
{
    ui->tableWidget->insertRow(routeCount);
    ui->tableWidget->setItem(routeCount,0,new QTableWidgetItem(route.getName()));
    ui->tableWidget->setItem(routeCount,1,new QTableWidgetItem(route.getDistance().quantityToString()));
    ui->tableWidget->setItem(routeCount,2,new QTableWidgetItem(DistanceUnitToQString(route.getDistance().unitToString())));
    routeCount++;
}
/**
 * @brief MainWindow::setRouteToTable
 * @param route
 * @param i
 */
void MainWindow::setRouteToTable(Route route, int i)
{
    ui->tableWidget->setItem(i,0,new QTableWidgetItem(route.getName()));
    ui->tableWidget->setItem(i,1,new QTableWidgetItem(route.getDistance().quantityToString()));
    ui->tableWidget->setItem(i,2,new QTableWidgetItem(DistanceUnitToQString(route.getDistance().unitToString())));
}
/**
 * @brief MainWindow::addAllRouteToTableFromList
 */
void MainWindow::addAllRouteToTableFromList()
{
    for(int i = 0; i < routeList.length();i++)
    {
        addRouteToTable(routeList.get(i));
    }
}
/**
 * @brief MainWindow::addAllRouteToTableFromList
 * @param list
 */
void MainWindow::addAllRouteToTableFromList(QList<Route> list)
{
    for(int i = 0; i < list.length();i++)
    {
        addRouteToTable(list[i]);
    }
}
/**
 * @brief MainWindow::~MainWindow
 */
MainWindow::~MainWindow()
{
    delete ui;
    delete errorDialog;
}
/**
 * @brief MainWindow::printDataToStatusBar
 * @param s
 */
void MainWindow::printDataToStatusBar(QString s)
{
    ui->statusBar->showMessage(s);
}
/**
 * @brief MainWindow::on_listDBPushButton_clicked
 */
void MainWindow::on_listDBPushButton_clicked()
{
    ui->tableWidget->setRowCount(0);
    routeCount = 0;
    addAllRouteToTableFromList(routeList.search(ui->searchTextBox->text()));

    printDataToStatusBar(QString("Click"));
}
/**
 * @brief MainWindow::on_addNewRootButton_clicked
 */
void MainWindow::on_addNewRootButton_clicked()
{
    double quantity = ui->quantityInput->value();
    QString name = ui->nameText->text();
    int unit = ui->distanceUnitcomboBox->currentData().toInt();

    if(QString::compare("",name) == 0)
    {
        errorDialog->showMessage(tr("You must type name of the route!"));
        errorDialog->setWindowTitle(tr("Error!"));
        errorDialog->show();
        //qDebug() << "empty name";
    }
    else
    {
        Route route(name,Distance(quantity,unit));
        routeList.add(route);
    }


    //qDebug() << name << " " << quantity << " " << unit;
}

void MainWindow::on_actionQuit_triggered()
{
    QCoreApplication::quit();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about
    (
        this,
        tr("About"),
        "<table>"
        "<tr>"
            "<td>"
                "<h3>"+tr("Galactic Calculator")+"</h3>"+
                tr("Version")+" 0.3.1 32 bit<br>"+
                tr("Built on")+" 2017.05.30 16:05<br>"
                "Qt 5.8.0 (MinGW 5.3.0)"
                "<p>"+
                tr("Galactic Calculator is a Qt5 based program, that calculate space routes.")+
                "</p>"
             "</td>"
             "<td>"
                "<img src=\"img/logo.jpg\" align=\"left\">"
             "</td>"
          "<tr>"
             "<td colspan=\"2\">"+
                "Copyright 2017 Varga Péter. "+tr("All rights reserved.")+
                "<br><br>"+
                tr("The program is provided AS IS with NO WARRANTY OF ANY KIND,"
                "INCLUDING THE WARRANTY OF DESIGN, MERCHANTABILITY AND"
                "FITNESS FOR A PARTICULAR PURPOSE.")+
                "<br>"
              "<td>"
          "</tr>"
        "</table>"
    );
}

void MainWindow::on_actionAboutQt_triggered()
{

    QMessageBox::aboutQt(this, tr("About Qt"));
}
