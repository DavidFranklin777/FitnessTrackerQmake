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
   explicit WeightTracker(QWidget *parent = 0);
   ~WeightTracker();
      void fetchUsername(QString username);

private slots:
   void on_pushButton_OK_clicked();

private:
   Ui::WeightTracker *ui;
   QString m_Username;
};

#endif // WEIGHTTRACKER_H
