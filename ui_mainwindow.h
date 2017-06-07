/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionOpen;
    QAction *actionQuit;
    QAction *actionAboutQt;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTabWidget *mainTabWidget;
    QWidget *unitExcahngeTab;
    QWidget *computeTab;
    QWidget *routeTab;
    QWidget *dbTab;
    QGridLayout *gridLayout_3;
    QTabWidget *dbTabWidget;
    QWidget *listDataTab;
    QHBoxLayout *horizontalLayout_2;
    QWidget *listShipParentWidget;
    QGridLayout *gridLayout_5;
    QLabel *listShipsLabel;
    QLineEdit *shipSearchTextBox;
    QSpacerItem *ShipHorizontalSpacer;
    QPushButton *searchShipPushButton;
    QTableWidget *shipTableWidget;
    QWidget *listRouteParentWidget;
    QGridLayout *gridLayout_4;
    QPushButton *listDBPushButton;
    QSpacerItem *horizontalSpacer;
    QLineEdit *searchTextBox;
    QTableWidget *tableWidget;
    QLabel *listRoutesLabel;
    QWidget *newDataTab;
    QHBoxLayout *horizontalLayout;
    QFormLayout *addRouteFormLayout;
    QLabel *routeNameLabel;
    QLabel *distanceLabel;
    QDoubleSpinBox *quantityInput;
    QComboBox *distanceUnitcomboBox;
    QLabel *unitLabel;
    QPushButton *addNewRootButton;
    QLabel *addNewRouteLabel;
    QLineEdit *nameText;
    QFormLayout *addShipFormLayout;
    QLabel *addNewSpaceShipLabel;
    QLabel *shipNameLabel;
    QLineEdit *shipNameTextLineEdit;
    QLabel *velocityLabel;
    QDoubleSpinBox *velocityInput;
    QLabel *velocityUnitLabel;
    QComboBox *VeloctiyUnitComboBox;
    QLabel *accelerationLabel;
    QDoubleSpinBox *accelerationInput;
    QLabel *accelerationUnitLabel;
    QComboBox *accelerationUnitCOmboBox;
    QPushButton *addNewSpaceShipPushButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 400);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 400));
        MainWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionOpen->setIconVisibleInMenu(true);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        mainTabWidget = new QTabWidget(centralWidget);
        mainTabWidget->setObjectName(QStringLiteral("mainTabWidget"));
        unitExcahngeTab = new QWidget();
        unitExcahngeTab->setObjectName(QStringLiteral("unitExcahngeTab"));
        mainTabWidget->addTab(unitExcahngeTab, QString());
        computeTab = new QWidget();
        computeTab->setObjectName(QStringLiteral("computeTab"));
        mainTabWidget->addTab(computeTab, QString());
        routeTab = new QWidget();
        routeTab->setObjectName(QStringLiteral("routeTab"));
        mainTabWidget->addTab(routeTab, QString());
        dbTab = new QWidget();
        dbTab->setObjectName(QStringLiteral("dbTab"));
        gridLayout_3 = new QGridLayout(dbTab);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 1, 0, 0);
        dbTabWidget = new QTabWidget(dbTab);
        dbTabWidget->setObjectName(QStringLiteral("dbTabWidget"));
        listDataTab = new QWidget();
        listDataTab->setObjectName(QStringLiteral("listDataTab"));
        horizontalLayout_2 = new QHBoxLayout(listDataTab);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        listShipParentWidget = new QWidget(listDataTab);
        listShipParentWidget->setObjectName(QStringLiteral("listShipParentWidget"));
        gridLayout_5 = new QGridLayout(listShipParentWidget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(-1, -1, 14, -1);
        listShipsLabel = new QLabel(listShipParentWidget);
        listShipsLabel->setObjectName(QStringLiteral("listShipsLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        listShipsLabel->setFont(font);

        gridLayout_5->addWidget(listShipsLabel, 0, 0, 1, 1);

        shipSearchTextBox = new QLineEdit(listShipParentWidget);
        shipSearchTextBox->setObjectName(QStringLiteral("shipSearchTextBox"));

        gridLayout_5->addWidget(shipSearchTextBox, 1, 0, 1, 1);

        ShipHorizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_5->addItem(ShipHorizontalSpacer, 1, 1, 1, 1);

        searchShipPushButton = new QPushButton(listShipParentWidget);
        searchShipPushButton->setObjectName(QStringLiteral("searchShipPushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(searchShipPushButton->sizePolicy().hasHeightForWidth());
        searchShipPushButton->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(searchShipPushButton, 1, 2, 1, 1);

        shipTableWidget = new QTableWidget(listShipParentWidget);
        if (shipTableWidget->columnCount() < 5)
            shipTableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        shipTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        shipTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        shipTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        shipTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        shipTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        shipTableWidget->setObjectName(QStringLiteral("shipTableWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(shipTableWidget->sizePolicy().hasHeightForWidth());
        shipTableWidget->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setStrikeOut(false);
        shipTableWidget->setFont(font1);
        shipTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        shipTableWidget->setAlternatingRowColors(true);
        shipTableWidget->setTextElideMode(Qt::ElideMiddle);
        shipTableWidget->setSortingEnabled(true);
        shipTableWidget->setWordWrap(true);
        shipTableWidget->setColumnCount(5);
        shipTableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        shipTableWidget->horizontalHeader()->setDefaultSectionSize(85);
        shipTableWidget->horizontalHeader()->setStretchLastSection(true);
        shipTableWidget->verticalHeader()->setCascadingSectionResizes(true);

        gridLayout_5->addWidget(shipTableWidget, 2, 0, 1, 3);


        horizontalLayout_2->addWidget(listShipParentWidget);

        listRouteParentWidget = new QWidget(listDataTab);
        listRouteParentWidget->setObjectName(QStringLiteral("listRouteParentWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(listRouteParentWidget->sizePolicy().hasHeightForWidth());
        listRouteParentWidget->setSizePolicy(sizePolicy3);
        gridLayout_4 = new QGridLayout(listRouteParentWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_4->setVerticalSpacing(6);
        gridLayout_4->setContentsMargins(0, 9, 6, 9);
        listDBPushButton = new QPushButton(listRouteParentWidget);
        listDBPushButton->setObjectName(QStringLiteral("listDBPushButton"));
        sizePolicy1.setHeightForWidth(listDBPushButton->sizePolicy().hasHeightForWidth());
        listDBPushButton->setSizePolicy(sizePolicy1);
        listDBPushButton->setMinimumSize(QSize(100, 20));

        gridLayout_4->addWidget(listDBPushButton, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 1, 1, 1);

        searchTextBox = new QLineEdit(listRouteParentWidget);
        searchTextBox->setObjectName(QStringLiteral("searchTextBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(searchTextBox->sizePolicy().hasHeightForWidth());
        searchTextBox->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(searchTextBox, 1, 0, 1, 1);

        tableWidget = new QTableWidget(listRouteParentWidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEnabled(true);
        sizePolicy2.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy2);
        tableWidget->setMinimumSize(QSize(320, 0));
        tableWidget->setFrameShadow(QFrame::Sunken);
        tableWidget->setMidLineWidth(1);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setGridStyle(Qt::CustomDashLine);
        tableWidget->setSortingEnabled(true);
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(3);
        tableWidget->verticalHeader()->setCascadingSectionResizes(true);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        gridLayout_4->addWidget(tableWidget, 2, 0, 1, 3);

        listRoutesLabel = new QLabel(listRouteParentWidget);
        listRoutesLabel->setObjectName(QStringLiteral("listRoutesLabel"));
        listRoutesLabel->setFont(font);

        gridLayout_4->addWidget(listRoutesLabel, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(listRouteParentWidget);

        dbTabWidget->addTab(listDataTab, QString());
        newDataTab = new QWidget();
        newDataTab->setObjectName(QStringLiteral("newDataTab"));
        horizontalLayout = new QHBoxLayout(newDataTab);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addRouteFormLayout = new QFormLayout();
        addRouteFormLayout->setSpacing(6);
        addRouteFormLayout->setObjectName(QStringLiteral("addRouteFormLayout"));
        addRouteFormLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        addRouteFormLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        addRouteFormLayout->setHorizontalSpacing(24);
        addRouteFormLayout->setVerticalSpacing(6);
        addRouteFormLayout->setContentsMargins(6, 6, 6, -1);
        routeNameLabel = new QLabel(newDataTab);
        routeNameLabel->setObjectName(QStringLiteral("routeNameLabel"));

        addRouteFormLayout->setWidget(1, QFormLayout::LabelRole, routeNameLabel);

        distanceLabel = new QLabel(newDataTab);
        distanceLabel->setObjectName(QStringLiteral("distanceLabel"));

        addRouteFormLayout->setWidget(3, QFormLayout::LabelRole, distanceLabel);

        quantityInput = new QDoubleSpinBox(newDataTab);
        quantityInput->setObjectName(QStringLiteral("quantityInput"));
        quantityInput->setMaximum(1e+6);

        addRouteFormLayout->setWidget(3, QFormLayout::FieldRole, quantityInput);

        distanceUnitcomboBox = new QComboBox(newDataTab);
        distanceUnitcomboBox->setObjectName(QStringLiteral("distanceUnitcomboBox"));

        addRouteFormLayout->setWidget(5, QFormLayout::FieldRole, distanceUnitcomboBox);

        unitLabel = new QLabel(newDataTab);
        unitLabel->setObjectName(QStringLiteral("unitLabel"));

        addRouteFormLayout->setWidget(5, QFormLayout::LabelRole, unitLabel);

        addNewRootButton = new QPushButton(newDataTab);
        addNewRootButton->setObjectName(QStringLiteral("addNewRootButton"));

        addRouteFormLayout->setWidget(6, QFormLayout::LabelRole, addNewRootButton);

        addNewRouteLabel = new QLabel(newDataTab);
        addNewRouteLabel->setObjectName(QStringLiteral("addNewRouteLabel"));
        addNewRouteLabel->setFont(font);

        addRouteFormLayout->setWidget(0, QFormLayout::SpanningRole, addNewRouteLabel);

        nameText = new QLineEdit(newDataTab);
        nameText->setObjectName(QStringLiteral("nameText"));

        addRouteFormLayout->setWidget(1, QFormLayout::FieldRole, nameText);


        horizontalLayout->addLayout(addRouteFormLayout);

        addShipFormLayout = new QFormLayout();
        addShipFormLayout->setSpacing(6);
        addShipFormLayout->setObjectName(QStringLiteral("addShipFormLayout"));
        addShipFormLayout->setSizeConstraint(QLayout::SetMaximumSize);
        addShipFormLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        addShipFormLayout->setHorizontalSpacing(24);
        addShipFormLayout->setVerticalSpacing(6);
        addShipFormLayout->setContentsMargins(6, 6, 6, -1);
        addNewSpaceShipLabel = new QLabel(newDataTab);
        addNewSpaceShipLabel->setObjectName(QStringLiteral("addNewSpaceShipLabel"));
        addNewSpaceShipLabel->setMinimumSize(QSize(0, 0));
        addNewSpaceShipLabel->setFont(font);

        addShipFormLayout->setWidget(0, QFormLayout::LabelRole, addNewSpaceShipLabel);

        shipNameLabel = new QLabel(newDataTab);
        shipNameLabel->setObjectName(QStringLiteral("shipNameLabel"));

        addShipFormLayout->setWidget(2, QFormLayout::LabelRole, shipNameLabel);

        shipNameTextLineEdit = new QLineEdit(newDataTab);
        shipNameTextLineEdit->setObjectName(QStringLiteral("shipNameTextLineEdit"));

        addShipFormLayout->setWidget(2, QFormLayout::FieldRole, shipNameTextLineEdit);

        velocityLabel = new QLabel(newDataTab);
        velocityLabel->setObjectName(QStringLiteral("velocityLabel"));

        addShipFormLayout->setWidget(3, QFormLayout::LabelRole, velocityLabel);

        velocityInput = new QDoubleSpinBox(newDataTab);
        velocityInput->setObjectName(QStringLiteral("velocityInput"));

        addShipFormLayout->setWidget(3, QFormLayout::FieldRole, velocityInput);

        velocityUnitLabel = new QLabel(newDataTab);
        velocityUnitLabel->setObjectName(QStringLiteral("velocityUnitLabel"));

        addShipFormLayout->setWidget(4, QFormLayout::LabelRole, velocityUnitLabel);

        VeloctiyUnitComboBox = new QComboBox(newDataTab);
        VeloctiyUnitComboBox->setObjectName(QStringLiteral("VeloctiyUnitComboBox"));

        addShipFormLayout->setWidget(4, QFormLayout::FieldRole, VeloctiyUnitComboBox);

        accelerationLabel = new QLabel(newDataTab);
        accelerationLabel->setObjectName(QStringLiteral("accelerationLabel"));

        addShipFormLayout->setWidget(5, QFormLayout::LabelRole, accelerationLabel);

        accelerationInput = new QDoubleSpinBox(newDataTab);
        accelerationInput->setObjectName(QStringLiteral("accelerationInput"));

        addShipFormLayout->setWidget(5, QFormLayout::FieldRole, accelerationInput);

        accelerationUnitLabel = new QLabel(newDataTab);
        accelerationUnitLabel->setObjectName(QStringLiteral("accelerationUnitLabel"));

        addShipFormLayout->setWidget(6, QFormLayout::LabelRole, accelerationUnitLabel);

        accelerationUnitCOmboBox = new QComboBox(newDataTab);
        accelerationUnitCOmboBox->setObjectName(QStringLiteral("accelerationUnitCOmboBox"));

        addShipFormLayout->setWidget(6, QFormLayout::FieldRole, accelerationUnitCOmboBox);

        addNewSpaceShipPushButton = new QPushButton(newDataTab);
        addNewSpaceShipPushButton->setObjectName(QStringLiteral("addNewSpaceShipPushButton"));

        addShipFormLayout->setWidget(7, QFormLayout::LabelRole, addNewSpaceShipPushButton);


        horizontalLayout->addLayout(addShipFormLayout);

        dbTabWidget->addTab(newDataTab, QString());

        gridLayout_3->addWidget(dbTabWidget, 0, 0, 1, 1);

        mainTabWidget->addTab(dbTab, QString());

        gridLayout->addWidget(mainTabWidget, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAboutQt);

        retranslateUi(MainWindow);

        mainTabWidget->setCurrentIndex(3);
        dbTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Galactic Calculator", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Import", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
        actionAboutQt->setText(QApplication::translate("MainWindow", "About Qt", Q_NULLPTR));
        mainTabWidget->setTabText(mainTabWidget->indexOf(unitExcahngeTab), QApplication::translate("MainWindow", "unit exchange", Q_NULLPTR));
        mainTabWidget->setTabText(mainTabWidget->indexOf(computeTab), QApplication::translate("MainWindow", "Calculation", Q_NULLPTR));
        mainTabWidget->setTabText(mainTabWidget->indexOf(routeTab), QApplication::translate("MainWindow", "Directions", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        dbTabWidget->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        listShipsLabel->setText(QApplication::translate("MainWindow", "List spaceships", Q_NULLPTR));
        searchShipPushButton->setText(QApplication::translate("MainWindow", "List", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = shipTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = shipTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Velocity", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = shipTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Velocity unit", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = shipTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Acceleration", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = shipTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Acceleration unit", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        listDBPushButton->setStatusTip(QApplication::translate("MainWindow", "List the routes and apply the filter.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        listDBPushButton->setText(QApplication::translate("MainWindow", "List", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        searchTextBox->setStatusTip(QApplication::translate("MainWindow", "Type a keyword and search in routes by name", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Route", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Distance", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Unit", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        tableWidget->setStatusTip(QApplication::translate("MainWindow", "Table of routes", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        listRoutesLabel->setText(QApplication::translate("MainWindow", "List routes", Q_NULLPTR));
        dbTabWidget->setTabText(dbTabWidget->indexOf(listDataTab), QApplication::translate("MainWindow", "List database", Q_NULLPTR));
        routeNameLabel->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        distanceLabel->setText(QApplication::translate("MainWindow", "Distance", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        quantityInput->setStatusTip(QApplication::translate("MainWindow", "Distance of the route.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        distanceUnitcomboBox->setStatusTip(QApplication::translate("MainWindow", "Unit of the distance", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        unitLabel->setText(QApplication::translate("MainWindow", "Unit", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        addNewRootButton->setStatusTip(QApplication::translate("MainWindow", "Add the new route", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        addNewRootButton->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        addNewRouteLabel->setText(QApplication::translate("MainWindow", "Add a new Route", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        nameText->setStatusTip(QApplication::translate("MainWindow", "Name of the route. You must type this.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        addNewSpaceShipLabel->setText(QApplication::translate("MainWindow", "Add a new spaceship", Q_NULLPTR));
        shipNameLabel->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        velocityLabel->setText(QApplication::translate("MainWindow", "Velocity", Q_NULLPTR));
        velocityUnitLabel->setText(QApplication::translate("MainWindow", "Velocity unit", Q_NULLPTR));
        accelerationLabel->setText(QApplication::translate("MainWindow", "Acceleration", Q_NULLPTR));
        accelerationUnitLabel->setText(QApplication::translate("MainWindow", "Acceleration unit", Q_NULLPTR));
        addNewSpaceShipPushButton->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        dbTabWidget->setTabText(dbTabWidget->indexOf(newDataTab), QApplication::translate("MainWindow", "Add data", Q_NULLPTR));
        mainTabWidget->setTabText(mainTabWidget->indexOf(dbTab), QApplication::translate("MainWindow", "Database transactions", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
