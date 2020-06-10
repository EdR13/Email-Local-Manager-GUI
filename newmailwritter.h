#ifndef NEWMAILWRITTER_H
#define NEWMAILWRITTER_H

#include <QDialog>

namespace Ui {
class NewMailWritter;
}

class NewMailWritter : public QDialog
{
    Q_OBJECT

public:
    explicit NewMailWritter(QWidget *parent = nullptr);
    ~NewMailWritter();

private slots:

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::NewMailWritter *ui;
};

#endif // NEWMAILWRITTER_H
