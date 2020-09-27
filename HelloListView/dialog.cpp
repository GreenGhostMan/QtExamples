#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QStringList languages = {"C","C++", "Java", "Php","Python"};
    foreach(QString str, languages)
    {
        ui->listWidget->addItem(str);
    }
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();
    item->setForeground(Qt::red);
}

void Dialog::on_pushButton_2_clicked()
{
    QFont font("Times", 15, QFont::Bold);
    QListWidgetItem *item = ui->listWidget->currentItem();
    item->setFont(font);
}

void Dialog::on_pushButton_3_clicked()
{
    QListWidgetItem *it = ui->listWidget->currentItem();
    it->setBackground(Qt::green);
}
