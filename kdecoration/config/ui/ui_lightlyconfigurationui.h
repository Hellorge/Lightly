/********************************************************************************
** Form generated from reading UI file 'lightlyconfigurationui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTLYCONFIGURATIONUI_H
#define UI_LIGHTLYCONFIGURATIONUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "config/lightlyexceptionlistwidget.h"
#include "kcolorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_LightlyConfigurationUI
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *buttonSize;
    QComboBox *titleAlignment;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QCheckBox *drawSizeGrip;
    QCheckBox *drawTitleBarSeparator;
    QCheckBox *drawBorderOnMaximizedWindows;
    QCheckBox *outlineCloseButton;
    QCheckBox *drawBackgroundGradient;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QLabel *animationsDurationLabel;
    QSpinBox *animationsDuration;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *animationsEnabled;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *shadowSize;
    QLabel *label_2;
    QSpinBox *shadowStrength;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_5;
    KColorButton *shadowColor;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    Lightly::ExceptionListWidget *exceptions;

    void setupUi(QWidget *LightlyConfigurationUI)
    {
        if (LightlyConfigurationUI->objectName().isEmpty())
            LightlyConfigurationUI->setObjectName(QString::fromUtf8("LightlyConfigurationUI"));
        LightlyConfigurationUI->resize(428, 418);
        verticalLayout = new QVBoxLayout(LightlyConfigurationUI);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(LightlyConfigurationUI);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        buttonSize = new QComboBox(tab);
        buttonSize->addItem(QString());
        buttonSize->addItem(QString());
        buttonSize->addItem(QString());
        buttonSize->addItem(QString());
        buttonSize->addItem(QString());
        buttonSize->setObjectName(QString::fromUtf8("buttonSize"));

        gridLayout_4->addWidget(buttonSize, 1, 1, 1, 1);

        titleAlignment = new QComboBox(tab);
        titleAlignment->addItem(QString());
        titleAlignment->addItem(QString());
        titleAlignment->addItem(QString());
        titleAlignment->addItem(QString());
        titleAlignment->setObjectName(QString::fromUtf8("titleAlignment"));

        gridLayout_4->addWidget(titleAlignment, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 7, 0, 1, 3);

        drawSizeGrip = new QCheckBox(tab);
        drawSizeGrip->setObjectName(QString::fromUtf8("drawSizeGrip"));

        gridLayout_4->addWidget(drawSizeGrip, 5, 0, 1, 3);

        drawTitleBarSeparator = new QCheckBox(tab);
        drawTitleBarSeparator->setObjectName(QString::fromUtf8("drawTitleBarSeparator"));

        gridLayout_4->addWidget(drawTitleBarSeparator, 6, 0, 1, 3);

        drawBorderOnMaximizedWindows = new QCheckBox(tab);
        drawBorderOnMaximizedWindows->setObjectName(QString::fromUtf8("drawBorderOnMaximizedWindows"));

        gridLayout_4->addWidget(drawBorderOnMaximizedWindows, 3, 0, 1, 3);

        outlineCloseButton = new QCheckBox(tab);
        outlineCloseButton->setObjectName(QString::fromUtf8("outlineCloseButton"));

        gridLayout_4->addWidget(outlineCloseButton, 2, 0, 1, 3);

        drawBackgroundGradient = new QCheckBox(tab);
        drawBackgroundGradient->setObjectName(QString::fromUtf8("drawBackgroundGradient"));

        gridLayout_4->addWidget(drawBackgroundGradient, 4, 0, 1, 3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        animationsDurationLabel = new QLabel(tab_2);
        animationsDurationLabel->setObjectName(QString::fromUtf8("animationsDurationLabel"));
        animationsDurationLabel->setEnabled(false);
        animationsDurationLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(animationsDurationLabel, 1, 0, 1, 1);

        animationsDuration = new QSpinBox(tab_2);
        animationsDuration->setObjectName(QString::fromUtf8("animationsDuration"));
        animationsDuration->setEnabled(false);
        animationsDuration->setMaximum(500);

        gridLayout_5->addWidget(animationsDuration, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        animationsEnabled = new QCheckBox(tab_2);
        animationsEnabled->setObjectName(QString::fromUtf8("animationsEnabled"));

        gridLayout_5->addWidget(animationsEnabled, 0, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 2, 0, 1, 3);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout = new QGridLayout(tab_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(tab_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        shadowSize = new QComboBox(tab_4);
        shadowSize->addItem(QString());
        shadowSize->addItem(QString());
        shadowSize->addItem(QString());
        shadowSize->addItem(QString());
        shadowSize->addItem(QString());
        shadowSize->setObjectName(QString::fromUtf8("shadowSize"));

        gridLayout->addWidget(shadowSize, 0, 1, 1, 1);

        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        shadowStrength = new QSpinBox(tab_4);
        shadowStrength->setObjectName(QString::fromUtf8("shadowStrength"));
        shadowStrength->setMinimum(10);
        shadowStrength->setMaximum(100);

        gridLayout->addWidget(shadowStrength, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        shadowColor = new KColorButton(tab_4);
        shadowColor->setObjectName(QString::fromUtf8("shadowColor"));

        gridLayout->addWidget(shadowColor, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 3, 0, 1, 3);

        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        exceptions = new Lightly::ExceptionListWidget(tab_3);
        exceptions->setObjectName(QString::fromUtf8("exceptions"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(exceptions->sizePolicy().hasHeightForWidth());
        exceptions->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(exceptions);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(titleAlignment);
        label_4->setBuddy(buttonSize);
        animationsDurationLabel->setBuddy(animationsDuration);
        label->setBuddy(shadowSize);
        label_2->setBuddy(shadowStrength);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tabWidget, titleAlignment);
        QWidget::setTabOrder(titleAlignment, buttonSize);
        QWidget::setTabOrder(buttonSize, outlineCloseButton);
        QWidget::setTabOrder(outlineCloseButton, drawBorderOnMaximizedWindows);
        QWidget::setTabOrder(drawBorderOnMaximizedWindows, drawBackgroundGradient);
        QWidget::setTabOrder(drawBackgroundGradient, drawSizeGrip);
        QWidget::setTabOrder(drawSizeGrip, drawTitleBarSeparator);
        QWidget::setTabOrder(drawTitleBarSeparator, animationsEnabled);
        QWidget::setTabOrder(animationsEnabled, animationsDuration);
        QWidget::setTabOrder(animationsDuration, shadowSize);
        QWidget::setTabOrder(shadowSize, shadowStrength);
        QWidget::setTabOrder(shadowStrength, shadowColor);

        retranslateUi(LightlyConfigurationUI);
        QObject::connect(animationsEnabled, SIGNAL(toggled(bool)), animationsDurationLabel, SLOT(setEnabled(bool)));
        QObject::connect(animationsEnabled, SIGNAL(toggled(bool)), animationsDuration, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LightlyConfigurationUI);
    } // setupUi

    void retranslateUi(QWidget *LightlyConfigurationUI)
    {
        label_3->setText(QCoreApplication::translate("LightlyConfigurationUI", "Tit&le alignment:", nullptr));
        label_4->setText(QCoreApplication::translate("LightlyConfigurationUI", "B&utton size:", nullptr));
        buttonSize->setItemText(0, QCoreApplication::translate("LightlyConfigurationUI", "Tiny", nullptr));
        buttonSize->setItemText(1, QCoreApplication::translate("LightlyConfigurationUI", "Small", "@item:inlistbox Button size:"));
        buttonSize->setItemText(2, QCoreApplication::translate("LightlyConfigurationUI", "Medium", "@item:inlistbox Button size:"));
        buttonSize->setItemText(3, QCoreApplication::translate("LightlyConfigurationUI", "Large", "@item:inlistbox Button size:"));
        buttonSize->setItemText(4, QCoreApplication::translate("LightlyConfigurationUI", "Very Large", "@item:inlistbox Button size:"));

        titleAlignment->setItemText(0, QCoreApplication::translate("LightlyConfigurationUI", "Left", nullptr));
        titleAlignment->setItemText(1, QCoreApplication::translate("LightlyConfigurationUI", "Center", nullptr));
        titleAlignment->setItemText(2, QCoreApplication::translate("LightlyConfigurationUI", "Center (Full Width)", nullptr));
        titleAlignment->setItemText(3, QCoreApplication::translate("LightlyConfigurationUI", "Right", nullptr));

        drawSizeGrip->setText(QCoreApplication::translate("LightlyConfigurationUI", "Add handle to resize windows with no border", nullptr));
        drawTitleBarSeparator->setText(QCoreApplication::translate("LightlyConfigurationUI", "Draw separator under active window's titlebar", nullptr));
        drawBorderOnMaximizedWindows->setText(QCoreApplication::translate("LightlyConfigurationUI", "Allow resizing maximized windows from window edges", nullptr));
        outlineCloseButton->setText(QCoreApplication::translate("LightlyConfigurationUI", "Draw a circle around close button", nullptr));
        drawBackgroundGradient->setText(QCoreApplication::translate("LightlyConfigurationUI", "Draw titlebar background gradient", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("LightlyConfigurationUI", "General", nullptr));
        animationsDurationLabel->setText(QCoreApplication::translate("LightlyConfigurationUI", "Anima&tions duration:", nullptr));
        animationsDuration->setSuffix(QCoreApplication::translate("LightlyConfigurationUI", " ms", nullptr));
        animationsEnabled->setText(QCoreApplication::translate("LightlyConfigurationUI", "Enable animations", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("LightlyConfigurationUI", "Animations", nullptr));
        label->setText(QCoreApplication::translate("LightlyConfigurationUI", "Si&ze:", nullptr));
        shadowSize->setItemText(0, QCoreApplication::translate("LightlyConfigurationUI", "None", "@item:inlistbox Button size:"));
        shadowSize->setItemText(1, QCoreApplication::translate("LightlyConfigurationUI", "Small", "@item:inlistbox Button size:"));
        shadowSize->setItemText(2, QCoreApplication::translate("LightlyConfigurationUI", "Medium", "@item:inlistbox Button size:"));
        shadowSize->setItemText(3, QCoreApplication::translate("LightlyConfigurationUI", "Large", "@item:inlistbox Button size:"));
        shadowSize->setItemText(4, QCoreApplication::translate("LightlyConfigurationUI", "Very Large", "@item:inlistbox Button size:"));

        label_2->setText(QCoreApplication::translate("LightlyConfigurationUI", "S&trength:", "strength of the shadow (from transparent to opaque)"));
        shadowStrength->setSuffix(QCoreApplication::translate("LightlyConfigurationUI", "%", nullptr));
        label_5->setText(QCoreApplication::translate("LightlyConfigurationUI", "Color:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("LightlyConfigurationUI", "Shadows", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("LightlyConfigurationUI", "Window-Specific Overrides", nullptr));
        (void)LightlyConfigurationUI;
    } // retranslateUi

};

namespace Ui {
    class LightlyConfigurationUI: public Ui_LightlyConfigurationUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTLYCONFIGURATIONUI_H
