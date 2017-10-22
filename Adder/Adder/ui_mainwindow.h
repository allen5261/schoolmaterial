/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QComboBox *subject;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(384, 128);
        MainWindow->setMinimumSize(QSize(384, 128));
        MainWindow->setMaximumSize(QSize(384, 128));
        QIcon icon;
        icon.addFile(QStringLiteral("icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(21, 20, 41, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 46, 41, 16));
        subject = new QComboBox(centralWidget);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(70, 17, 91, 22));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 42, 301, 22));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 77, 51, 22));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\257\276\344\273\266\344\270\212\344\274\240\347\263\273\347\273\237", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MainWindow->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MainWindow", "\347\247\221\343\200\200\347\233\256", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\220\215", Q_NULLPTR));
        subject->clear();
        subject->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\350\257\267\351\200\211\346\213\251...", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\350\257\255\346\226\207", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\225\260\345\255\246", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\350\213\261\350\257\255", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\214\226\345\255\246", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\216\206\345\217\262", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
