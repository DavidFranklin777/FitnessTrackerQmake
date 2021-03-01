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
   explicit TrackingMenu(QWidget *parent = 0);
   ~TrackingMenu();

   void fetchUsername(QString username);

private slots:
   void on_pushButton_Weight_clicked();
   void on_pushButton_Calories_clicked();
   void on_pushButton_Measurements_clicked();
   void on_pushButton_Exercises_clicked();

private:
   Ui::TrackingMenu *ui;
   QString m_Username;
};

#endif // TRACKINGMENU_H
