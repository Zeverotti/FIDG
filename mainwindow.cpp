#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Identity random_identity;
    random_identity.generate_identity();

    QString qstr_first_name = QString::fromStdString(random_identity.first_name);
    ui->label_14->setText(qstr_first_name);
    QString qstr_last_name = QString::fromStdString(random_identity.last_name);
    ui->label_15->setText(qstr_last_name);
    QString qstr_birthday = QString::fromStdString(random_identity.birthday);
    ui->label_16->setText(qstr_birthday);
    QString qstr_age = QString::fromStdString(random_identity.age);
    ui->label_17->setText(qstr_age);
    QString qstr_phone_number = QString::fromStdString(random_identity.phone_number);
    ui->label_18->setText(qstr_phone_number);
}
