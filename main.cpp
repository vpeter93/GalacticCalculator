#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QLibraryInfo>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
    //QCoreApplication::addLibraryPath(QCoreApplication::applicationDirPath());
    QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication application(argc, argv);

    QPixmap splashPixMap("img/logo.jpg");
    QSplashScreen splashScreen(splashPixMap,Qt::WindowStaysOnTopHint);
    splashScreen.show();

    application.processEvents();

    QString locale = QLocale::system().name();

    QTranslator qtLibraryTranslator;
    qtLibraryTranslator.load
    (
        QCoreApplication::applicationDirPath()+"/locale/qt_" +locale,
        QLibraryInfo::location(QLibraryInfo::TranslationsPath)
    );
    application.installTranslator(&qtLibraryTranslator);

    QTranslator GalacticCalculatorTranslator;
    GalacticCalculatorTranslator.load
    (
        QCoreApplication::applicationDirPath()+"/locale/GalacticCalculator_"+locale
    );
    application.installTranslator(&GalacticCalculatorTranslator);

    MainWindow window;
    window.show();

    splashScreen.close();

    return application.exec();
}
