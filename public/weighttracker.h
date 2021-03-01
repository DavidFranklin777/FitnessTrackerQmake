#ifndef WEIGHTTRACKER_H
#define WEIGHTTRACKER_H

#include <QDialog>
#include <datacontroller.h>

namespace Ui {
class WeightTracker;
}

class WeightTracker : public QDialog
{
   Q_OBJECT

public:
    /**
    * @brief WeightTracker
    * @param parent
    */
   explicit WeightTracker(QWidget *parent = 0);
   ~WeightTracker();

    /**
    * @brief fetchUsername
    * @param username
    */
   void fetchUsername(QString username);

private slots:
   /**
    * @brief on_pushButton_OK_clicked
    */
   void on_pushButton_OK_clicked();

private:
   Ui::WeightTracker *ui;
   QString m_Username;
};

#endif // WEIGHTTRACKER_H
