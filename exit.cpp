#include "exit.h"
#include "ui_exit.h"
#include <iostream>

Exit::Exit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Exit)
{
    ui->setupUi(this);
}

Exit::~Exit()
{
    delete ui;
}

void Exit::on_exitbutton_clicked()
{
    exit(0);
}
