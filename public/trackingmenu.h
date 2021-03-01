#ifndef TRACKINGMENU_H
#define TRACKINGMENU_H

#include <QDialog>
#include <weighttracker.h>

namespace Ui {
class TrackingMenu;
}

class TrackingMenu : public QDialog
{
   Q_OBJECT

public:
    /**
    * @brief TrackingMenu
    * @param parent
    */
   explicit TrackingMenu(QWidget *parent = 0);
   ~TrackingMenu();

    /**
    * @brief fetchUsername used to fetch a username from a login session.
    * @param username will be stored into a member variable m_Username
    */
   void fetchUsername(QString username);

private slots:
   /**
    * @brief on_pushButton_Weight_clicked
    */
   void on_pushButton_Weight_clicked();

   /**
    * @brief on_pushButton_Calories_clicked
    */
   void on_pushButton_Calories_clicked();

   /**
    * @brief on_pushButton_Measurements_clicked
    */
   void on_pushButton_Measurements_clicked();

   /**
    * @brief on_pushButton_Exercises_clicked
    */
   void on_pushButton_Exercises_clicked();

private:
   Ui::TrackingMenu *ui;
   QString m_Username;
};

#endif // TRACKINGMENU_H
