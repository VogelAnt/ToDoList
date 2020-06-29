/********************************************************************************
** Form generated from reading UI file 'SkillManagementWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKILLMANAGEMENTWIDGET_H
#define UI_SKILLMANAGEMENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SkillManagementWidget
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SkillManagementWidget)
    {
        if (SkillManagementWidget->objectName().isEmpty())
            SkillManagementWidget->setObjectName(QString::fromUtf8("SkillManagementWidget"));
        SkillManagementWidget->resize(800, 600);
        menubar = new QMenuBar(SkillManagementWidget);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        SkillManagementWidget->setMenuBar(menubar);
        centralwidget = new QWidget(SkillManagementWidget);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        SkillManagementWidget->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(SkillManagementWidget);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SkillManagementWidget->setStatusBar(statusbar);

        retranslateUi(SkillManagementWidget);

        QMetaObject::connectSlotsByName(SkillManagementWidget);
    } // setupUi

    void retranslateUi(QMainWindow *SkillManagementWidget)
    {
        SkillManagementWidget->setWindowTitle(QCoreApplication::translate("SkillManagementWidget", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SkillManagementWidget: public Ui_SkillManagementWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKILLMANAGEMENTWIDGET_H
