/********************************************************************************
** Form generated from reading UI file 'lightlyexceptionlistwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTLYEXCEPTIONLISTWIDGET_H
#define UI_LIGHTLYEXCEPTIONLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LightlyExceptionListWidget
{
public:
    QGridLayout *gridLayout;
    QTreeView *exceptionListView;
    QSpacerItem *verticalSpacer;
    QPushButton *moveUpButton;
    QPushButton *moveDownButton;
    QPushButton *addButton;
    QPushButton *removeButton;
    QPushButton *editButton;

    void setupUi(QWidget *LightlyExceptionListWidget)
    {
        if (LightlyExceptionListWidget->objectName().isEmpty())
            LightlyExceptionListWidget->setObjectName(QString::fromUtf8("LightlyExceptionListWidget"));
        LightlyExceptionListWidget->resize(473, 182);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LightlyExceptionListWidget->sizePolicy().hasHeightForWidth());
        LightlyExceptionListWidget->setSizePolicy(sizePolicy);
        LightlyExceptionListWidget->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(LightlyExceptionListWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        exceptionListView = new QTreeView(LightlyExceptionListWidget);
        exceptionListView->setObjectName(QString::fromUtf8("exceptionListView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(exceptionListView->sizePolicy().hasHeightForWidth());
        exceptionListView->setSizePolicy(sizePolicy1);
        exceptionListView->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(exceptionListView, 0, 0, 6, 1);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);

        moveUpButton = new QPushButton(LightlyExceptionListWidget);
        moveUpButton->setObjectName(QString::fromUtf8("moveUpButton"));

        gridLayout->addWidget(moveUpButton, 0, 1, 1, 1);

        moveDownButton = new QPushButton(LightlyExceptionListWidget);
        moveDownButton->setObjectName(QString::fromUtf8("moveDownButton"));

        gridLayout->addWidget(moveDownButton, 1, 1, 1, 1);

        addButton = new QPushButton(LightlyExceptionListWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout->addWidget(addButton, 2, 1, 1, 1);

        removeButton = new QPushButton(LightlyExceptionListWidget);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        gridLayout->addWidget(removeButton, 3, 1, 1, 1);

        editButton = new QPushButton(LightlyExceptionListWidget);
        editButton->setObjectName(QString::fromUtf8("editButton"));

        gridLayout->addWidget(editButton, 4, 1, 1, 1);

        QWidget::setTabOrder(exceptionListView, moveUpButton);
        QWidget::setTabOrder(moveUpButton, moveDownButton);
        QWidget::setTabOrder(moveDownButton, addButton);
        QWidget::setTabOrder(addButton, removeButton);
        QWidget::setTabOrder(removeButton, editButton);

        retranslateUi(LightlyExceptionListWidget);

        QMetaObject::connectSlotsByName(LightlyExceptionListWidget);
    } // setupUi

    void retranslateUi(QWidget *LightlyExceptionListWidget)
    {
        moveUpButton->setText(QCoreApplication::translate("LightlyExceptionListWidget", "Move Up", nullptr));
        moveDownButton->setText(QCoreApplication::translate("LightlyExceptionListWidget", "Move Down", nullptr));
        addButton->setText(QCoreApplication::translate("LightlyExceptionListWidget", "Add", nullptr));
        removeButton->setText(QCoreApplication::translate("LightlyExceptionListWidget", "Remove", nullptr));
        editButton->setText(QCoreApplication::translate("LightlyExceptionListWidget", "Edit", nullptr));
        (void)LightlyExceptionListWidget;
    } // retranslateUi

};

namespace Ui {
    class LightlyExceptionListWidget: public Ui_LightlyExceptionListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTLYEXCEPTIONLISTWIDGET_H
