/********************************************************************************
** Form generated from reading UI file 'SkillWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKILLWIDGET_H
#define UI_SKILLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SkillWidget
{
public:

    void setupUi(QWidget *SkillWidget)
    {
        if (SkillWidget->objectName().isEmpty())
            SkillWidget->setObjectName(QString::fromUtf8("SkillWidget"));
        SkillWidget->resize(400, 300);

        retranslateUi(SkillWidget);

        QMetaObject::connectSlotsByName(SkillWidget);
    } // setupUi

    void retranslateUi(QWidget *SkillWidget)
    {
        SkillWidget->setWindowTitle(QCoreApplication::translate("SkillWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SkillWidget: public Ui_SkillWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKILLWIDGET_H
