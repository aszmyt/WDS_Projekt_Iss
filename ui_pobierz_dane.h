/********************************************************************************
** Form generated from reading UI file 'pobierz_dane.ui'
**
** Created: Tue May 17 21:48:46 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POBIERZ_DANE_H
#define UI_POBIERZ_DANE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PobierzDane
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *odswiez;
    QPushButton *wyjscie;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QGroupBox *dane;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_5;

    void setupUi(QWidget *PobierzDane)
    {
        if (PobierzDane->objectName().isEmpty())
            PobierzDane->setObjectName(QString::fromUtf8("PobierzDane"));
        PobierzDane->resize(355, 225);
        gridLayout_2 = new QGridLayout(PobierzDane);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        odswiez = new QPushButton(PobierzDane);
        odswiez->setObjectName(QString::fromUtf8("odswiez"));
        odswiez->setDefault(false);

        verticalLayout->addWidget(odswiez);

        wyjscie = new QPushButton(PobierzDane);
        wyjscie->setObjectName(QString::fromUtf8("wyjscie"));

        verticalLayout->addWidget(wyjscie);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        dane = new QGroupBox(PobierzDane);
        dane->setObjectName(QString::fromUtf8("dane"));
        verticalLayout_2 = new QVBoxLayout(dane);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(dane);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(dane);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(dane);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(dane);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(dane);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(dane);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(dane);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(dane);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(dane);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_5 = new QLineEdit(dane);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_5);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout->addWidget(dane, 0, 0, 2, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
        label_2->setBuddy(lineEdit_2);
        label_3->setBuddy(lineEdit_3);
        label_4->setBuddy(lineEdit_4);
        label_5->setBuddy(lineEdit_5);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(odswiez, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, wyjscie);

        retranslateUi(PobierzDane);

        QMetaObject::connectSlotsByName(PobierzDane);
    } // setupUi

    void retranslateUi(QWidget *PobierzDane)
    {
        PobierzDane->setWindowTitle(QApplication::translate("PobierzDane", "ISS TRACKER", 0, QApplication::UnicodeUTF8));
        odswiez->setText(QApplication::translate("PobierzDane", "&Od\305\233wie\305\274", 0, QApplication::UnicodeUTF8));
        wyjscie->setText(QApplication::translate("PobierzDane", "&Wyj\305\233cie", 0, QApplication::UnicodeUTF8));
        dane->setTitle(QApplication::translate("PobierzDane", "Dane", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PobierzDane", "czas", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PobierzDane", "szeroko\305\233\304\207", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PobierzDane", "d\305\202ugo\305\233\304\207", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PobierzDane", "wysoko\305\233\304\207", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PobierzDane", "azymut", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PobierzDane: public Ui_PobierzDane {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POBIERZ_DANE_H
