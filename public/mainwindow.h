#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<loginscreen.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
   Q_OBJECT

public:
    /**
    * @brief MainWindow
    * @param parent
    */
   explicit MainWindow(QWidget *parent = 0);
   ~MainWindow();

private slots:
    /**
     * @brief on_pushButton_clicked
     */
    void on_pushButton_clicked();

private:
   Ui::MainWindow *ui;
   LoginScreen         *m_LoginScreen;
};

#endif // MAINWINDOW_H
