#include "mainwindow.h"
#include <QApplication>

/*!
 * Main class for main.cpp
 */
int main(int argc, char *argv[])
{
    /*!
     * Creates and execs the application.
     * Passes arguments to the application.
     */
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
