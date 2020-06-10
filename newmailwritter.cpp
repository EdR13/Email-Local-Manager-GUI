#include "newmailwritter.h"
#include "ui_newmailwritter.h"

NewMailWritter::NewMailWritter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewMailWritter)
{
    ui->setupUi(this);
    setWindowTitle("Nuevo E-mail.");
}

NewMailWritter::~NewMailWritter()
{
    delete ui;
}

void NewMailWritter::on_buttonBox_accepted()
{
    accept();
}

void NewMailWritter::on_buttonBox_rejected()
{
    reject();
}
