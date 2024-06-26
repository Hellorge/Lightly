/********************************************************************************
** Form generated from reading UI file 'lightlydetectwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTLYDETECTWIDGET_H
#define UI_LIGHTLYDETECTWIDGET_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LightlyDetectWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *windowClass;
    QLabel *label_2;
    QLabel *windowTitle;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *windowClassCheckBox;
    QRadioButton *windowTitleCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LightlyDetectWidget)
    {
        if (LightlyDetectWidget->objectName().isEmpty())
            LightlyDetectWidget->setObjectName(QString::fromUtf8("LightlyDetectWidget"));
        LightlyDetectWidget->resize(400, 239);
        verticalLayout = new QVBoxLayout(LightlyDetectWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(LightlyDetectWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        windowClass = new QLabel(groupBox);
        windowClass->setObjectName(QString::fromUtf8("windowClass"));
        windowClass->setText(QString::fromUtf8("TextLabel"));

        gridLayout->addWidget(windowClass, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        windowTitle = new QLabel(groupBox);
        windowTitle->setObjectName(QString::fromUtf8("windowTitle"));
        windowTitle->setText(QString::fromUtf8("TextLabel"));

        gridLayout->addWidget(windowTitle, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(LightlyDetectWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        windowClassCheckBox = new QRadioButton(groupBox_2);
        windowClassCheckBox->setObjectName(QString::fromUtf8("windowClassCheckBox"));

        verticalLayout_2->addWidget(windowClassCheckBox);

        windowTitleCheckBox = new QRadioButton(groupBox_2);
        windowTitleCheckBox->setObjectName(QString::fromUtf8("windowTitleCheckBox"));
        windowTitleCheckBox->setLocale(QLocale(QLocale::French, QLocale::France));

        verticalLayout_2->addWidget(windowTitleCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(LightlyDetectWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LightlyDetectWidget);
        QObject::connect(buttonBox, SIGNAL(accepted()), LightlyDetectWidget, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LightlyDetectWidget, SLOT(reject()));

        QMetaObject::connectSlotsByName(LightlyDetectWidget);
    } // setupUi

    void retranslateUi(QDialog *LightlyDetectWidget)
    {
        LightlyDetectWidget->setWindowTitle(QCoreApplication::translate("LightlyDetectWidget", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LightlyDetectWidget", "Information about Selected Window", nullptr));
        label->setText(QCoreApplication::translate("LightlyDetectWidget", "Class: ", nullptr));
        label_2->setText(QCoreApplication::translate("LightlyDetectWidget", "Title: ", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("LightlyDetectWidget", "Window Property Selection", nullptr));
        windowClassCheckBox->setText(QCoreApplication::translate("LightlyDetectWidget", "Use window class (whole application)", nullptr));
        windowTitleCheckBox->setText(QCoreApplication::translate("LightlyDetectWidget", "Use window title", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LightlyDetectWidget: public Ui_LightlyDetectWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTLYDETECTWIDGET_H
