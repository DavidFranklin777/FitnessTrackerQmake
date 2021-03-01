#include "weighttracker.h"
#include "ui_weighttracker.h"

WeightTracker::WeightTracker(QWidget *parent) :
   QDialog(parent),
   ui(new Ui::WeightTracker)
{
   ui->setupUi(this);
   ui->lineEdit_Weight->setValidator(new QIntValidator(0,500,this));
}

WeightTracker::~WeightTracker()
{
   delete ui;
}

void WeightTracker::fetchUsername(QString username)
{
   m_Username = username;
}

void WeightTracker::on_pushButton_OK_clicked()
{
    bool ok;
    QString userWeight;
    double userWeightDouble;
    QDate date;

    userWeight = ui->lineEdit_Weight->text();
    date= ui->dateEdit->date();

    //convert to double
    userWeightDouble = userWeight.toDouble(&ok);

    // Call dataController here
    if(true == ok)
    {
       DataController *dataControl = new DataController();
       dataControl->saveData(m_Username, date, userWeightDouble);
    }


}
