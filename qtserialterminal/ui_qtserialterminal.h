/********************************************************************************
** Form generated from reading UI file 'qtserialterminal.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTSERIALTERMINAL_H
#define UI_QTSERIALTERMINAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qtserialterminal
{
public:
    QAction *actionQuit;
    QAction *actionAboutQt;
    QAction *actionClear;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QComboBox *cmbBaud;
    QLabel *label_2;
    QComboBox *cmbPort;
    QLabel *label_3;
    QCheckBox *chkLocalEcho;
    QPushButton *btnOpen;
    QGroupBox *groupBox_2;
    QLineEdit *txtReqInterval;
    QLabel *label_5;
    QLineEdit *txtDelay;
    QCheckBox *chkUseDelay;
    QLineEdit *txtReqData;
    QLabel *label_4;
    QPushButton *btnStart;
    QCheckBox *chkNewRow;
    QCheckBox *chkNewLine;
    QGroupBox *groupBox_3;
    QPlainTextEdit *txtTerminal;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qtserialterminal)
    {
        if (qtserialterminal->objectName().isEmpty())
            qtserialterminal->setObjectName(QStringLiteral("qtserialterminal"));
        qtserialterminal->resize(740, 581);
        actionQuit = new QAction(qtserialterminal);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAboutQt = new QAction(qtserialterminal);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        actionClear = new QAction(qtserialterminal);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        centralWidget = new QWidget(qtserialterminal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 301, 91));
        cmbBaud = new QComboBox(groupBox);
        cmbBaud->setObjectName(QStringLiteral("cmbBaud"));
        cmbBaud->setGeometry(QRect(210, 30, 79, 23));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 30, 61, 16));
        cmbPort = new QComboBox(groupBox);
        cmbPort->setObjectName(QStringLiteral("cmbPort"));
        cmbPort->setGeometry(QRect(210, 60, 79, 23));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 60, 61, 16));
        chkLocalEcho = new QCheckBox(groupBox);
        chkLocalEcho->setObjectName(QStringLiteral("chkLocalEcho"));
        chkLocalEcho->setGeometry(QRect(10, 30, 91, 21));
        btnOpen = new QPushButton(groupBox);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));
        btnOpen->setGeometry(QRect(10, 60, 80, 23));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(360, 10, 361, 91));
        txtReqInterval = new QLineEdit(groupBox_2);
        txtReqInterval->setObjectName(QStringLiteral("txtReqInterval"));
        txtReqInterval->setGeometry(QRect(300, 30, 51, 23));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(240, 30, 57, 15));
        txtDelay = new QLineEdit(groupBox_2);
        txtDelay->setObjectName(QStringLiteral("txtDelay"));
        txtDelay->setEnabled(false);
        txtDelay->setGeometry(QRect(300, 60, 51, 23));
        chkUseDelay = new QCheckBox(groupBox_2);
        chkUseDelay->setObjectName(QStringLiteral("chkUseDelay"));
        chkUseDelay->setGeometry(QRect(240, 60, 61, 21));
        txtReqData = new QLineEdit(groupBox_2);
        txtReqData->setObjectName(QStringLiteral("txtReqData"));
        txtReqData->setGeometry(QRect(110, 30, 111, 23));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 30, 91, 16));
        btnStart = new QPushButton(groupBox_2);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        btnStart->setGeometry(QRect(10, 60, 80, 23));
        chkNewRow = new QCheckBox(groupBox_2);
        chkNewRow->setObjectName(QStringLiteral("chkNewRow"));
        chkNewRow->setGeometry(QRect(110, 60, 51, 21));
        chkNewRow->setChecked(false);
        chkNewLine = new QCheckBox(groupBox_2);
        chkNewLine->setObjectName(QStringLiteral("chkNewLine"));
        chkNewLine->setGeometry(QRect(170, 60, 51, 21));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 110, 701, 391));
        txtTerminal = new QPlainTextEdit(groupBox_3);
        txtTerminal->setObjectName(QStringLiteral("txtTerminal"));
        txtTerminal->setGeometry(QRect(20, 40, 661, 331));
        qtserialterminal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(qtserialterminal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 740, 20));
        qtserialterminal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qtserialterminal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        qtserialterminal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(qtserialterminal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        qtserialterminal->setStatusBar(statusBar);

        mainToolBar->addAction(actionQuit);
        mainToolBar->addAction(actionClear);
        mainToolBar->addAction(actionAboutQt);

        retranslateUi(qtserialterminal);

        QMetaObject::connectSlotsByName(qtserialterminal);
    } // setupUi

    void retranslateUi(QMainWindow *qtserialterminal)
    {
        qtserialterminal->setWindowTitle(QApplication::translate("qtserialterminal", "qtserialterminal", 0));
        actionQuit->setText(QApplication::translate("qtserialterminal", "quit", 0));
        actionAboutQt->setText(QApplication::translate("qtserialterminal", "aboutQt", 0));
        actionClear->setText(QApplication::translate("qtserialterminal", "clear", 0));
        groupBox->setTitle(QApplication::translate("qtserialterminal", "Serial 8bit-stop1-noparity-noflow", 0));
        cmbBaud->clear();
        cmbBaud->insertItems(0, QStringList()
         << QApplication::translate("qtserialterminal", "9600", 0)
         << QApplication::translate("qtserialterminal", "38400", 0)
         << QApplication::translate("qtserialterminal", "57600", 0)
         << QApplication::translate("qtserialterminal", "115200", 0)
        );
        label_2->setText(QApplication::translate("qtserialterminal", "BaudRate", 0));
        cmbPort->clear();
        cmbPort->insertItems(0, QStringList()
         << QApplication::translate("qtserialterminal", "ttyUSB0", 0)
         << QApplication::translate("qtserialterminal", "ttyUSB1", 0)
         << QApplication::translate("qtserialterminal", "ttyUSB2", 0)
         << QApplication::translate("qtserialterminal", "ttyATK0", 0)
         << QApplication::translate("qtserialterminal", "ttyATK1", 0)
         << QApplication::translate("qtserialterminal", "ttyATK2", 0)
         << QApplication::translate("qtserialterminal", "ttyACM0", 0)
         << QApplication::translate("qtserialterminal", "ttyACM1", 0)
         << QApplication::translate("qtserialterminal", "ttyACM2", 0)
        );
        label_3->setText(QApplication::translate("qtserialterminal", "PortName", 0));
        chkLocalEcho->setText(QApplication::translate("qtserialterminal", "Local Echo", 0));
        btnOpen->setText(QApplication::translate("qtserialterminal", "Open", 0));
        groupBox_2->setTitle(QApplication::translate("qtserialterminal", "Automatic Request", 0));
        txtReqInterval->setText(QApplication::translate("qtserialterminal", "100", 0));
        label_5->setText(QApplication::translate("qtserialterminal", "Interval", 0));
        chkUseDelay->setText(QApplication::translate("qtserialterminal", "Delay", 0));
        txtReqData->setText(QString());
        label_4->setText(QApplication::translate("qtserialterminal", "Request String", 0));
        btnStart->setText(QApplication::translate("qtserialterminal", "Start", 0));
        chkNewRow->setText(QApplication::translate("qtserialterminal", "\"\\r\"", 0));
        chkNewLine->setText(QApplication::translate("qtserialterminal", "\"\\n\"", 0));
        groupBox_3->setTitle(QApplication::translate("qtserialterminal", "Terminal", 0));
    } // retranslateUi

};

namespace Ui {
    class qtserialterminal: public Ui_qtserialterminal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTSERIALTERMINAL_H
