#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}






void MainWindow::on_actionOpen_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionSave_triggered()
{
    QMessageBox::information(this,"About","This is about me");
}
