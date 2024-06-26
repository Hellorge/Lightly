/********************************************************************************
** Form generated from reading UI file 'lightlyexceptiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTLYEXCEPTIONDIALOG_H
#define UI_LIGHTLYEXCEPTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LightlyExceptionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *detectDialogButton;
    QLineEdit *exceptionEditor;
    QComboBox *exceptionType;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QCheckBox *borderSizeCheckBox;
    QCheckBox *hideTitleBar;
    QComboBox *borderSizeComboBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LightlyExceptionDialog)
    {
        if (LightlyExceptionDialog->objectName().isEmpty())
            LightlyExceptionDialog->setObjectName(QString::fromUtf8("LightlyExceptionDialog"));
        LightlyExceptionDialog->resize(362, 321);
        verticalLayout = new QVBoxLayout(LightlyExceptionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(LightlyExceptionDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        detectDialogButton = new QPushButton(groupBox);
        detectDialogButton->setObjectName(QString::fromUtf8("detectDialogButton"));

        gridLayout_2->addWidget(detectDialogButton, 2, 2, 1, 1);

        exceptionEditor = new QLineEdit(groupBox);
        exceptionEditor->setObjectName(QString::fromUtf8("exceptionEditor"));
        exceptionEditor->setProperty("showClearButton", QVariant(true));

        gridLayout_2->addWidget(exceptionEditor, 1, 1, 1, 2);

        exceptionType = new QComboBox(groupBox);
        exceptionType->addItem(QString());
        exceptionType->addItem(QString());
        exceptionType->setObjectName(QString::fromUtf8("exceptionType"));

        gridLayout_2->addWidget(exceptionType, 0, 1, 1, 2);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(LightlyExceptionDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        borderSizeCheckBox = new QCheckBox(groupBox_2);
        borderSizeCheckBox->setObjectName(QString::fromUtf8("borderSizeCheckBox"));

        gridLayout_3->addWidget(borderSizeCheckBox, 0, 0, 1, 1);

        hideTitleBar = new QCheckBox(groupBox_2);
        hideTitleBar->setObjectName(QString::fromUtf8("hideTitleBar"));

        gridLayout_3->addWidget(hideTitleBar, 2, 0, 1, 2);

        borderSizeComboBox = new QComboBox(groupBox_2);
        borderSizeComboBox->addItem(QString());
        borderSizeComboBox->addItem(QString());
        borderSizeComboBox->addItem(QString());
        borderSizeComboBox->addItem(QString());
        borderSizeComboBox->addItem(QString());
        borderSizeComboBox->addItem(QString());
        borderSizeComboBox->addItem(QString());
        borderSizeComboBox->addItem(QString());
        borderSizeComboBox->addItem(QString());
        borderSizeComboBox->setObjectName(QString::fromUtf8("borderSizeComboBox"));
        borderSizeComboBox->setEnabled(false);

        gridLayout_3->addWidget(borderSizeComboBox, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 3, 0, 1, 2);


        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(LightlyExceptionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(exceptionType);
        label_2->setBuddy(exceptionEditor);
#endif // QT_CONFIG(shortcut)

        retranslateUi(LightlyExceptionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LightlyExceptionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LightlyExceptionDialog, SLOT(reject()));
        QObject::connect(borderSizeCheckBox, SIGNAL(toggled(bool)), borderSizeComboBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(LightlyExceptionDialog);
    } // setupUi

    void retranslateUi(QDialog *LightlyExceptionDialog)
    {
        LightlyExceptionDialog->setWindowTitle(QCoreApplication::translate("LightlyExceptionDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LightlyExceptionDialog", "Window Identification", nullptr));
        label->setText(QCoreApplication::translate("LightlyExceptionDialog", "&Matching window property: ", nullptr));
        label_2->setText(QCoreApplication::translate("LightlyExceptionDialog", "Regular expression &to match: ", nullptr));
        detectDialogButton->setText(QCoreApplication::translate("LightlyExceptionDialog", "Detect Window Properties", nullptr));
        exceptionType->setItemText(0, QCoreApplication::translate("LightlyExceptionDialog", "Window Class Name", nullptr));
        exceptionType->setItemText(1, QCoreApplication::translate("LightlyExceptionDialog", "Window Title", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("LightlyExceptionDialog", "Decoration Options", nullptr));
        borderSizeCheckBox->setText(QCoreApplication::translate("LightlyExceptionDialog", "Border size:", nullptr));
        hideTitleBar->setText(QCoreApplication::translate("LightlyExceptionDialog", "Hide window title bar", nullptr));
        borderSizeComboBox->setItemText(0, QCoreApplication::translate("LightlyExceptionDialog", "No Border", "@item:inlistbox Border size:"));
        borderSizeComboBox->setItemText(1, QCoreApplication::translate("LightlyExceptionDialog", "No Side Borders", "@item:inlistbox Border size:"));
        borderSizeComboBox->setItemText(2, QCoreApplication::translate("LightlyExceptionDialog", "Tiny", "@item:inlistbox Border size:"));
        borderSizeComboBox->setItemText(3, QCoreApplication::translate("LightlyExceptionDialog", "Normal", "@item:inlistbox Border size:"));
        borderSizeComboBox->setItemText(4, QCoreApplication::translate("LightlyExceptionDialog", "Large", "@item:inlistbox Border size:"));
        borderSizeComboBox->setItemText(5, QCoreApplication::translate("LightlyExceptionDialog", "Very Large", "@item:inlistbox Border size:"));
        borderSizeComboBox->setItemText(6, QCoreApplication::translate("LightlyExceptionDialog", "Huge", "@item:inlistbox Border size:"));
        borderSizeComboBox->setItemText(7, QCoreApplication::translate("LightlyExceptionDialog", "Very Huge", "@item:inlistbox Border size:"));
        borderSizeComboBox->setItemText(8, QCoreApplication::translate("LightlyExceptionDialog", "Oversized", "@item:inlistbox Border size:"));

    } // retranslateUi

};

namespace Ui {
    class LightlyExceptionDialog: public Ui_LightlyExceptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTLYEXCEPTIONDIALOG_H
