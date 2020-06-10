#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include "newmailwritter.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ///Agregar las rutas de las imágenes que se usan como íconos.
    QPixmap write_img("C:/Users/Edix2/Desktop/Gestor_Correo/images/write.png");
    QPixmap read_img("C:/Users/Edix2/Desktop/Gestor_Correo/images/read.png");
    QPixmap modify_img("C:/Users/Edix2/Desktop/Gestor_Correo/images/modify.png");
    QPixmap delete_img("C:/Users/Edix2/Desktop/Gestor_Correo/images/delete2.png");
    QPixmap security_img("C:/Users/Edix2/Desktop/Gestor_Correo/images/backup.png");
    QPixmap propietario_img("C:/Users/Edix2/Desktop/Gestor_Correo/images/dic.png");
    QPixmap fast_img("C:/Users/Edix2/Desktop/Gestor_Correo/images/search.png");
    QPixmap dispersion_img("C:/Users/Edix2/Desktop/Gestor_Correo/images/disp.png");
    QPixmap exit_img("C:/Users/Edix2/Desktop/Gestor_Correo/images/exit.png");

    ///Asignar los íconos a los elementos de la ventana.
    ui->img_write->setPixmap(write_img.scaled(40,40,Qt::KeepAspectRatio));
    ui->img_read->setPixmap(read_img.scaled(40,40,Qt::KeepAspectRatio));
    ui->img_modify->setPixmap(modify_img.scaled(40,40,Qt::KeepAspectRatio));
    ui->img_delete->setPixmap(delete_img.scaled(40,40,Qt::KeepAspectRatio));
    ui->img_security->setPixmap(security_img.scaled(40,40,Qt::KeepAspectRatio));
    ui->img_propietario->setPixmap(propietario_img.scaled(40,40,Qt::KeepAspectRatio));
    ui->img_fast->setPixmap(fast_img.scaled(40,40,Qt::KeepAspectRatio));
    ui->img_dispersion->setPixmap(dispersion_img.scaled(40,40,Qt::KeepAspectRatio));
    ui->img_exit->setPixmap(exit_img.scaled(40,40,Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_New_clicked()
{
    NewMailWritter NMW(this);
    int res;
    NMW.setWindowIcon(QIcon(":/images/write.png"));
    res = NMW.exec();
    if(res == QDialog::Rejected)
        return;

}

void MainWindow::on_Exit_clicked()
{
    e.setWindowIcon(QIcon(":/images/exit.png"));
    e.exec();
}
