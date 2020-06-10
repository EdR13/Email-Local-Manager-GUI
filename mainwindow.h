#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "exit.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Exit e;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_New_clicked();

    void on_Exit_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
