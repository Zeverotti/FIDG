/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *label_14;
    QLabel *label_3;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *label_16;
    QLabel *label_5;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLabel *label_18;
    QLabel *label_7;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLabel *label_20;
    QLabel *label_11;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_22;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(500, 400);
        QPalette palette;
        QBrush brush(QColor(220, 160, 102, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Manjari"));
        font1.setPointSize(13);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        label_2->setFont(font1);

        horizontalLayout_3->addWidget(label_2);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Manjari"));
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        label_14->setFont(font2);

        horizontalLayout_3->addWidget(label_14);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Manjari"));
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setWeight(75);
        label_15->setFont(font3);

        horizontalLayout_3->addWidget(label_15);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Manjari"));
        font4.setPointSize(13);
        font4.setBold(false);
        font4.setItalic(true);
        font4.setWeight(50);
        label_4->setFont(font4);

        horizontalLayout_4->addWidget(label_4);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font3);

        horizontalLayout_4->addWidget(label_16);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font4);

        horizontalLayout_4->addWidget(label_5);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font3);

        horizontalLayout_4->addWidget(label_17);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font4);

        horizontalLayout_5->addWidget(label_6);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font3);

        horizontalLayout_5->addWidget(label_18);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font4);

        horizontalLayout_5->addWidget(label_7);

        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font3);

        horizontalLayout_5->addWidget(label_19);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font3);

        horizontalLayout_6->addWidget(label_9);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font3);

        horizontalLayout_6->addWidget(label_8);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(50, 16777215));
        label_10->setFont(font4);

        horizontalLayout_7->addWidget(label_10);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Manjari"));
        font5.setPointSize(8);
        font5.setBold(true);
        font5.setItalic(true);
        font5.setWeight(75);
        label_20->setFont(font5);

        horizontalLayout_7->addWidget(label_20);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font4);

        horizontalLayout_7->addWidget(label_11);

        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font3);

        horizontalLayout_7->addWidget(label_21);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font4);

        horizontalLayout_8->addWidget(label_22);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font3);

        horizontalLayout_8->addWidget(label_12);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font4);

        horizontalLayout_8->addWidget(label_13);

        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font3);

        horizontalLayout_8->addWidget(label_23);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font6;
        font6.setBold(true);
        font6.setItalic(false);
        font6.setWeight(75);
        pushButton->setFont(font6);

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "FAKE ID GENERETOR", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "First Name:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "first.txt", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Last Name:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "last.txt", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Birthday:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "birthday.txt", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Age:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "age.txt", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Phone:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "phone.txt", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Country N:", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "countryn.txt", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "CVV:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Credit N:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Email:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "email.txt", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Password:", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "password.txt", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "Car:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "car.txt", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Address:", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "address.txt", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("MainWindow", " Male", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("MainWindow", " Female", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "GENERATE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
