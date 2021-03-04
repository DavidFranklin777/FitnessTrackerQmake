#include "trackingmenu.h"
#include "ui_trackingmenu.h"

TrackingMenu::TrackingMenu(QWidget *parent) :
   QDialog(parent),
   ui(new Ui::TrackingMenu)
{
   ui->setupUi(this);
}

TrackingMenu::~TrackingMenu()
{
   delete ui;
}

void TrackingMenu::fetchUsername(QString username)
{
   m_Username = username;
}


void TrackingMenu::on_pushButton_Weight_clicked()
{
    hide();
    WeightTracker *weightTracker = new WeightTracker();
    weightTracker->fetchUsername(m_Username);
    weightTracker->show();
}

void TrackingMenu::on_pushButton_Calories_clicked()
{
    ui->label_Calories->setText("Function not available");
}

void TrackingMenu::on_pushButton_Measurements_clicked()
{
    ui->label_Measurements->setText("Function not available");
}

void TrackingMenu::on_pushButton_Exercises_clicked()
{
    ui->label_Exercises->setText("Function not available");
}
