/********************************************************************************
** Form generated from reading UI file 'remoteselector.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTESELECTOR_H
#define UI_REMOTESELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_remoteselector
{
public:

    void setupUi(QDialog *remoteselector)
    {
        if (remoteselector->objectName().isEmpty())
            remoteselector->setObjectName("remoteselector");
        remoteselector->resize(400, 300);

        retranslateUi(remoteselector);

        QMetaObject::connectSlotsByName(remoteselector);
    } // setupUi

    void retranslateUi(QDialog *remoteselector)
    {
        remoteselector->setWindowTitle(QCoreApplication::translate("remoteselector", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class remoteselector: public Ui_remoteselector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTESELECTOR_H
