#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_8->hide();
    ui->label_9->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_pressed()
{
    std::string gender;

    if(ui->radioButton->isChecked()==true){
        gender = "male";
    }
    else if(ui->radioButton_2->isChecked()==true){
        gender = "female";
    }

    Identity random_identity;
    random_identity.generate_identity(gender);

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
    QString qstr_country_code = QString::fromStdString(random_identity.country_code);
    ui->label_19->setText(qstr_country_code);
    QString qstr_email = QString::fromStdString(random_identity.email);
    ui->label_20->setText(qstr_email);
    QString qstr_car = QString::fromStdString(random_identity.car);
    ui->label_12->setText(qstr_car);
    QString qstr_password = QString::fromStdString(random_identity.password);
    ui->label_21->setText(qstr_password);
}
