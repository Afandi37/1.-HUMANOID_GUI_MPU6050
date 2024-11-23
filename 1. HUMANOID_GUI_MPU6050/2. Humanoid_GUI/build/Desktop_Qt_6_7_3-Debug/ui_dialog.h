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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

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
    QTextEdit *textEdit_Roll;
    QLabel *label_2;
    QTextEdit *textEdit_Pitch;
    QLabel *label_3;
    QTextEdit *textEdit_Yaw;
    QLabel *label_4;

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
        textEdit_Roll = new QTextEdit(Dialog);
        textEdit_Roll->setObjectName("textEdit_Roll");
        textEdit_Roll->setGeometry(QRect(450, 230, 131, 31));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(400, 340, 121, 16));
        textEdit_Pitch = new QTextEdit(Dialog);
        textEdit_Pitch->setObjectName("textEdit_Pitch");
        textEdit_Pitch->setGeometry(QRect(450, 280, 131, 31));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(400, 240, 121, 16));
        textEdit_Yaw = new QTextEdit(Dialog);
        textEdit_Yaw->setObjectName("textEdit_Yaw");
        textEdit_Yaw->setGeometry(QRect(450, 330, 131, 31));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(400, 290, 121, 16));

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
        label_2->setText(QCoreApplication::translate("Dialog", "Roll :", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Pitch :", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Yaw :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
