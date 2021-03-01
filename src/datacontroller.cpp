#include "datacontroller.h"

DataController::DataController()
{

}

void DataController::saveData(QString &username, QDate &date, const double &weight)
{
    // Call database functions here
    m_DataBase.saveData(username, date, weight);
    std::cout << "Bro" << std::endl;

}

double DataController::getData(QString &username, QDate &date, bool result)
{
    // Give data to HMI using this function
    // m_DataBase.readData(date, result);
    //return weight here

}
