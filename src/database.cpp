#include "database.h"

Database::Database()
    : m_TableCreationScript("CREATE TABLE 'FitnessTrackingTable' ("
                "'id'	INTEGER,"
                "'name'	TEXT,"
                "'weight'	INTEGER,"
                "'day'	INTEGER,"
                "'month'	INTEGER,"
                "'year'	INTEGER,"
                "PRIMARY KEY('id' AUTOINCREMENT))")
    ,m_QSqlQuery(m_TableCreationScript)
{
    connectDatabase();
}

void Database::connectDatabase()
{
    QString databaseDriver = "QSQLITE";
    if(QSqlDatabase::isDriverAvailable(databaseDriver))
    {
        m_QSqlDatabase = QSqlDatabase::addDatabase(databaseDriver);
        m_QSqlDatabase.setDatabaseName("D:/Softwares/SQlite_browser/SQliteBrowser/SQLiteDBtest.db"); // -- Windows
        //m_QSqlDatabase.setDatabaseName("/home/user/Desktop/DB_FTracker/fitness.db");               // --Linux

        if(!m_QSqlDatabase.open())
        {
            QMessageBox::information(this, "Not connected", "Database not connected");

        }
        else
        {
            QMessageBox::information(this, "Connected", "Database is connected successfully");
        }

    }
}

void Database::init()
{
    qDebug() << "initializing database -- " << m_QSqlDatabase.databaseName();
    QString tableCreationScript = "CREATE TABLE 'FitnessTrackingTable' ("
                "'id'	INTEGER,"
                "'name'	TEXT,"
                "'weight'	INTEGER,"
                "'day'	INTEGER,"
                "'month'	INTEGER,"
                "'year'	INTEGER,"
                "PRIMARY KEY('id' AUTOINCREMENT))";

    //QSqlQuery query(tableCreationScript);
}

void Database::saveData(QString &username, QDate &date, const double &weight)
{
    //QSqlQuery query;
    m_QSqlQuery.prepare("INSERT INTO tbl_userinfo("
                  "name,"
                  "date,"
                  "weight)"
                  "values (?,?,?);");

    m_QSqlQuery.addBindValue(username);
    m_QSqlQuery.addBindValue(date);
    m_QSqlQuery.addBindValue(weight);

    if(!m_QSqlQuery.exec())
    {
        qDebug() << "error writing data into the database";
    }

}

double Database::getData(QString &username, QDate &date, bool result)
{

}

