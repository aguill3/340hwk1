#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"


 ////This is a QWidget that is used to create the main window when run.
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


 ////A MainWindow object
MainWindow::~MainWindow()
{
    delete ui;
}


////This is the first button placed by our example.
void MainWindow::on_pushButton_clicked()
{
    std::cout << "pushbutton " << std::endl;
}


////This is the second button placed on the main window GUI
void MainWindow::on_pushButton_2_clicked()
{
    std::cout << "This is Button 2. This is a test. " << std::endl;
}

////This is the 3rd button on the main window that simply produces an output when clicked.
////Clicking on the button will just print out a pre-defined sentence on the console.
void MainWindow::on_pushButton_3_clicked()
{
    std::cout << "Button 3 is working!" << std::endl;
}
