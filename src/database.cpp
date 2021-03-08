#include "database.h"

Database::Database()
{
    connectDatabase();
    init();
}

void Database::connectDatabase()
{
    QString databaseDriver = "QSQLITE";
    if(QSqlDatabase::isDriverAvailable(databaseDriver))
    {
        m_QSqlDatabase = QSqlDatabase::addDatabase(databaseDriver);
        //m_QSqlDatabase.setDatabaseName("D:/Softwares/SQlite_browser/SQliteBrowser/SQLiteDBtest.db");
        m_QSqlDatabase.setDatabaseName("/home/user/Desktop/DB_FTracker/fitness.db");

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
    QString tableCreationScript = "CREATE TABLE 'tbl_userinfo' ("
               "'id'	INTEGER,"
                "'name'	TEXT,"
                "'date'	TEXT,"
                "'weight'	INTEGER,"
                "PRIMARY KEY('id' AUTOINCREMENT))";

    QSqlQuery query(tableCreationScript);
}

void Database::saveData(QString &username, QDate &date, const double &weight)
{
    QSqlQuery query;
    // Changing the format of the date
    QString dateString = date.toString("dd.MM.yyyy");
    query.prepare("INSERT INTO tbl_userinfo (name,date,weight) VALUES (?,?,?)");

    getIdOfDate(date);
    query.addBindValue(username);
    query.addBindValue(dateString);
    query.addBindValue(weight);

    if(!query.exec())
    {
        qDebug() << "error writing data into the database";
    }

}

double Database::getData(QString &username, QDate &date, bool result)
{

}

int Database::getIdOfDate(QDate date)
{
   QString idValue;
   QString searchText = "SELECT id FROM tbl_userinfo"
                                      " WHERE date = 'date'";

   QSqlQuery query;
   idValue = query.value(searchText).toString();
   qDebug() << "idValue = " << idValue;
}

