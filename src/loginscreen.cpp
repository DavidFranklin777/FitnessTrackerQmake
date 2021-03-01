#include "loginscreen.h"
#include "ui_loginscreen.h"
#include <QPixmap>

LoginScreen::LoginScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginScreen)
{
    ui->setupUi(this);
    QPixmap pix("/home/user/mib3/MyProjects/Practice/FitnessTracker/FitnessTracker/FitTracker.png");  //Change this to your local file's address
    ui->label_logo->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
}

LoginScreen::~LoginScreen()
{
    delete ui;
}


void LoginScreen::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();

//    if((("David" == username) || ("Rahul" == username))
//            &&
//            ("root" == password))
//    {
//        SecondWindow *secondWindow = new SecondWindow();
//        hide();
//        secondWindow->show();
//    }

//    else
//    {
//        QString errorMessage = "Username or password incorrect. Please try again";
//        ui->label_errorMessage->setText(errorMessage);
//    }

      TrackingMenu *trackingMenu = new TrackingMenu();
      hide();
      trackingMenu->fetchUsername(username);
      trackingMenu->show();
      //    SecondWindow *secondWindow = new SecondWindow();
//    hide();
//    secondWindow->fetchUsername(username);
//    secondWindow->show();
}

