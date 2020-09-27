#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "Information Box","This is the text");
}

void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::warning(this,"Warning Box","this is warning box");
}

void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::about(this,"About Box","This is About Box");
}

void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::question(this,"Question Box","Question box is here?",
                          QMessageBox::Yes | QMessageBox::No);
}
