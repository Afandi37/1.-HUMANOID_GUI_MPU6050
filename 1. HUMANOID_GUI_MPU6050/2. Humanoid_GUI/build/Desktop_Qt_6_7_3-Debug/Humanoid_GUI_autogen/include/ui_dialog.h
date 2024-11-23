/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *berdiri;
    QPushButton *lambaikan;
    QPushButton *kuda2;
    QPushButton *pukul;
    QPushButton *bonus;
    QPushButton *jalan;
    QPushButton *senamTgn;
    QPushButton *jalanTempat;
    QLabel *label;
    QLabel *labelSetting;
    QComboBox *comboBox_ports;
    QTextEdit *textEdit_serialMonitor;
    QQuickWidget *quickWidget3D;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *remoteDevices;
    QTextEdit *textEdit_mpuData;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(750, 585);
        berdiri = new QPushButton(Dialog);
        berdiri->setObjectName("berdiri");
        berdiri->setGeometry(QRect(70, 60, 80, 23));
        lambaikan = new QPushButton(Dialog);
        lambaikan->setObjectName("lambaikan");
        lambaikan->setGeometry(QRect(210, 60, 80, 23));
        kuda2 = new QPushButton(Dialog);
        kuda2->setObjectName("kuda2");
        kuda2->setGeometry(QRect(340, 60, 80, 23));
        pukul = new QPushButton(Dialog);
        pukul->setObjectName("pukul");
        pukul->setGeometry(QRect(460, 60, 80, 23));
        bonus = new QPushButton(Dialog);
        bonus->setObjectName("bonus");
        bonus->setGeometry(QRect(460, 110, 80, 23));
        jalan = new QPushButton(Dialog);
        jalan->setObjectName("jalan");
        jalan->setGeometry(QRect(210, 110, 80, 23));
        senamTgn = new QPushButton(Dialog);
        senamTgn->setObjectName("senamTgn");
        senamTgn->setGeometry(QRect(70, 110, 80, 23));
        jalanTempat = new QPushButton(Dialog);
        jalanTempat->setObjectName("jalanTempat");
        jalanTempat->setGeometry(QRect(340, 110, 80, 23));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 170, 121, 16));
        labelSetting = new QLabel(Dialog);
        labelSetting->setObjectName("labelSetting");
        labelSetting->setGeometry(QRect(170, 170, 211, 16));
        comboBox_ports = new QComboBox(Dialog);
        comboBox_ports->setObjectName("comboBox_ports");
        comboBox_ports->setGeometry(QRect(250, 170, 79, 23));
        textEdit_serialMonitor = new QTextEdit(Dialog);
        textEdit_serialMonitor->setObjectName("textEdit_serialMonitor");
        textEdit_serialMonitor->setGeometry(QRect(50, 440, 301, 61));
        quickWidget3D = new QQuickWidget(Dialog);
        quickWidget3D->setObjectName("quickWidget3D");
        quickWidget3D->setGeometry(QRect(50, 230, 300, 200));
        quickWidget3D->setResizeMode(QQuickWidget::ResizeMode::SizeRootObjectToView);
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(390, 230, 301, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        remoteDevices = new QListWidget(verticalLayoutWidget);
        remoteDevices->setObjectName("remoteDevices");

        verticalLayout->addWidget(remoteDevices);

        textEdit_mpuData = new QTextEdit(Dialog);
        textEdit_mpuData->setObjectName("textEdit_mpuData");
        textEdit_mpuData->setGeometry(QRect(390, 440, 301, 61));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Humanoid GUI yes", nullptr));
        berdiri->setText(QCoreApplication::translate("Dialog", "Berdiri", nullptr));
        lambaikan->setText(QCoreApplication::translate("Dialog", "Dadah..", nullptr));
        kuda2->setText(QCoreApplication::translate("Dialog", "Kuda kuda", nullptr));
        pukul->setText(QCoreApplication::translate("Dialog", "Pukul", nullptr));
        bonus->setText(QCoreApplication::translate("Dialog", "Bonus", nullptr));
        jalan->setText(QCoreApplication::translate("Dialog", "Jalan", nullptr));
        senamTgn->setText(QCoreApplication::translate("Dialog", "Senam tgn", nullptr));
        jalanTempat->setText(QCoreApplication::translate("Dialog", "Jalan tetap", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Gerakan Terkini    :", nullptr));
        labelSetting->setText(QCoreApplication::translate("Dialog", "APA hayo", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Bluetootooth device :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
