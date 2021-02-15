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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SkillWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *m_nameLabel;
    QLabel *label_2;
    QLabel *m_categoryLabel;

    void setupUi(QWidget *SkillWidget)
    {
        if (SkillWidget->objectName().isEmpty())
            SkillWidget->setObjectName(QString::fromUtf8("SkillWidget"));
        SkillWidget->resize(549, 130);
        verticalLayout_2 = new QVBoxLayout(SkillWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        m_nameLabel = new QLabel(SkillWidget);
        m_nameLabel->setObjectName(QString::fromUtf8("m_nameLabel"));

        gridLayout_2->addWidget(m_nameLabel, 1, 1, 1, 1);

        label_2 = new QLabel(SkillWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 1, 1, 1);

        m_categoryLabel = new QLabel(SkillWidget);
        m_categoryLabel->setObjectName(QString::fromUtf8("m_categoryLabel"));

        gridLayout_2->addWidget(m_categoryLabel, 2, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        retranslateUi(SkillWidget);

        QMetaObject::connectSlotsByName(SkillWidget);
    } // setupUi

    void retranslateUi(QWidget *SkillWidget)
    {
        SkillWidget->setWindowTitle(QCoreApplication::translate("SkillWidget", "Form", nullptr));
        m_nameLabel->setText(QCoreApplication::translate("SkillWidget", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("SkillWidget", "TextLabel", nullptr));
        m_categoryLabel->setText(QCoreApplication::translate("SkillWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SkillWidget: public Ui_SkillWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKILLWIDGET_H
