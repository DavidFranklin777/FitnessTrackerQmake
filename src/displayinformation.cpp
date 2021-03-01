#include "displayinformation.h"
#include "ui_displayinformation.h"

DisplayInformation::DisplayInformation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DisplayInformation)
{
    ui->setupUi(this);
}

DisplayInformation::~DisplayInformation()
{
    delete ui;
}
