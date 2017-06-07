#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QErrorMessage>
#include <QMessageBox>
#include "route.h"
#include "routelist.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget * parent = 0);
    ~MainWindow();
    void printDataToStatusBar(QString s);
    void addRouteToTable(Route route);
    void addAllRouteToTableFromList();
    void addAllRouteToTableFromList(QList<Route> list);
    void setRouteToTable(Route route, int i);
private slots:
    void on_listDBPushButton_clicked();
    void on_addNewRootButton_clicked();

    void on_actionQuit_triggered();

    void on_actionAbout_triggered();

    void on_actionAboutQt_triggered();

private:
    Ui::MainWindow * ui;
    QErrorMessage * errorDialog;
    RouteList routeList;
    int routeCount = 0;
};

#endif // MAINWINDOW_H
