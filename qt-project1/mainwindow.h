/**
* @file
* @author Andrew Guillen
* @version 1.0
* @section LICENSE
*  None
* @section DESCRIPTION
*  Header file to be used with simple application that contains 3 buttons that generate a simple output.
*/

/**
  Edited by Andrew Guillen for practice purposes (and purposes of small homework assignment)
  */


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

/** \brief Main class
 *         of my application for project CS340.
 *
 *  Inherits for QMainWindow from Qt
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

/**
 *This is used to create the main window.
 */

public:
     /**
      * Constructor for MainWindow
      *
      * @param parent a parent widget, can be null
      */
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

/**
 *These private slots are used to create the buttons on the application
 */
private slots:
    /** \brief Buttons
     * There are 3 buttons in the application, all of whom display a set phrase upon a click.
     */

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

/**
 *This is the Main Window UI.
 */
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
