/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *startingWidget;
    QPushButton *pushButtonStart;
    QLineEdit *lineEditName;
    QLabel *labelNameTip;
    QLabel *labelServerAdres;
    QLineEdit *lineEditServerAdres;
    QLabel *labelServerPort;
    QLineEdit *lineEditServerPort;
    QWidget *gameWidget;
    QLabel *labelPlayer0;
    QLabel *labelPlayer1;
    QPushButton *pushButtonSurrender;
    QPushButton *pit6;
    QPushButton *pit13;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pit9;
    QPushButton *pit7;
    QPushButton *pit4;
    QPushButton *pit3;
    QPushButton *pit8;
    QPushButton *pit1;
    QPushButton *pit11;
    QPushButton *pit10;
    QPushButton *pit2;
    QPushButton *pit5;
    QPushButton *pit0;
    QPushButton *pit12;
    QPushButton *pushButtonBack;
    QLabel *gameFlowLabel0;
    QLabel *gameFlowLabel1;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        startingWidget = new QWidget(centralwidget);
        startingWidget->setObjectName(QString::fromUtf8("startingWidget"));
        startingWidget->setGeometry(QRect(90, 70, 571, 331));
        pushButtonStart = new QPushButton(startingWidget);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));
        pushButtonStart->setGeometry(QRect(220, 160, 111, 31));
        QFont font;
        font.setPointSize(16);
        pushButtonStart->setFont(font);
        lineEditName = new QLineEdit(startingWidget);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setGeometry(QRect(120, 110, 321, 41));
        QFont font1;
        font1.setPointSize(20);
        lineEditName->setFont(font1);
        labelNameTip = new QLabel(startingWidget);
        labelNameTip->setObjectName(QString::fromUtf8("labelNameTip"));
        labelNameTip->setGeometry(QRect(210, 70, 161, 41));
        labelNameTip->setFont(font);
        labelServerAdres = new QLabel(startingWidget);
        labelServerAdres->setObjectName(QString::fromUtf8("labelServerAdres"));
        labelServerAdres->setGeometry(QRect(130, 210, 111, 17));
        lineEditServerAdres = new QLineEdit(startingWidget);
        lineEditServerAdres->setObjectName(QString::fromUtf8("lineEditServerAdres"));
        lineEditServerAdres->setGeometry(QRect(230, 205, 171, 31));
        labelServerPort = new QLabel(startingWidget);
        labelServerPort->setObjectName(QString::fromUtf8("labelServerPort"));
        labelServerPort->setGeometry(QRect(130, 250, 91, 17));
        lineEditServerPort = new QLineEdit(startingWidget);
        lineEditServerPort->setObjectName(QString::fromUtf8("lineEditServerPort"));
        lineEditServerPort->setGeometry(QRect(230, 240, 171, 31));
        gameWidget = new QWidget(centralwidget);
        gameWidget->setObjectName(QString::fromUtf8("gameWidget"));
        gameWidget->setGeometry(QRect(0, 0, 801, 561));
        gameWidget->setMaximumSize(QSize(801, 561));
        labelPlayer0 = new QLabel(gameWidget);
        labelPlayer0->setObjectName(QString::fromUtf8("labelPlayer0"));
        labelPlayer0->setGeometry(QRect(0, 90, 151, 41));
        QPalette palette;
        QBrush brush(QColor(204, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(190, 190, 190, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        labelPlayer0->setPalette(palette);
        labelPlayer0->setFont(font1);
        labelPlayer0->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelPlayer1 = new QLabel(gameWidget);
        labelPlayer1->setObjectName(QString::fromUtf8("labelPlayer1"));
        labelPlayer1->setGeometry(QRect(650, 360, 151, 41));
        QPalette palette1;
        QBrush brush2(QColor(78, 154, 6, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        labelPlayer1->setPalette(palette1);
        labelPlayer1->setFont(font1);
        labelPlayer1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButtonSurrender = new QPushButton(gameWidget);
        pushButtonSurrender->setObjectName(QString::fromUtf8("pushButtonSurrender"));
        pushButtonSurrender->setGeometry(QRect(0, 510, 89, 25));
        pit6 = new QPushButton(gameWidget);
        pit6->setObjectName(QString::fromUtf8("pit6"));
        pit6->setEnabled(true);
        pit6->setGeometry(QRect(0, 130, 111, 231));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush3(QColor(243, 243, 243, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush4(QColor(204, 0, 0, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        pit6->setPalette(palette2);
        pit13 = new QPushButton(gameWidget);
        pit13->setObjectName(QString::fromUtf8("pit13"));
        pit13->setEnabled(true);
        pit13->setGeometry(QRect(690, 130, 111, 231));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pit13->setPalette(palette3);
        gridLayoutWidget = new QWidget(gameWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(109, 129, 581, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pit9 = new QPushButton(gridLayoutWidget);
        pit9->setObjectName(QString::fromUtf8("pit9"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pit9->sizePolicy().hasHeightForWidth());
        pit9->setSizePolicy(sizePolicy);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pit9->setPalette(palette4);

        gridLayout->addWidget(pit9, 1, 2, 1, 1);

        pit7 = new QPushButton(gridLayoutWidget);
        pit7->setObjectName(QString::fromUtf8("pit7"));
        sizePolicy.setHeightForWidth(pit7->sizePolicy().hasHeightForWidth());
        pit7->setSizePolicy(sizePolicy);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pit7->setPalette(palette5);

        gridLayout->addWidget(pit7, 1, 0, 1, 1);

        pit4 = new QPushButton(gridLayoutWidget);
        pit4->setObjectName(QString::fromUtf8("pit4"));
        sizePolicy.setHeightForWidth(pit4->sizePolicy().hasHeightForWidth());
        pit4->setSizePolicy(sizePolicy);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pit4->setPalette(palette6);

        gridLayout->addWidget(pit4, 0, 1, 1, 1);

        pit3 = new QPushButton(gridLayoutWidget);
        pit3->setObjectName(QString::fromUtf8("pit3"));
        sizePolicy.setHeightForWidth(pit3->sizePolicy().hasHeightForWidth());
        pit3->setSizePolicy(sizePolicy);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pit3->setPalette(palette7);

        gridLayout->addWidget(pit3, 0, 2, 1, 1);

        pit8 = new QPushButton(gridLayoutWidget);
        pit8->setObjectName(QString::fromUtf8("pit8"));
        sizePolicy.setHeightForWidth(pit8->sizePolicy().hasHeightForWidth());
        pit8->setSizePolicy(sizePolicy);
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pit8->setPalette(palette8);

        gridLayout->addWidget(pit8, 1, 1, 1, 1);

        pit1 = new QPushButton(gridLayoutWidget);
        pit1->setObjectName(QString::fromUtf8("pit1"));
        sizePolicy.setHeightForWidth(pit1->sizePolicy().hasHeightForWidth());
        pit1->setSizePolicy(sizePolicy);
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pit1->setPalette(palette9);

        gridLayout->addWidget(pit1, 0, 4, 1, 1);

        pit11 = new QPushButton(gridLayoutWidget);
        pit11->setObjectName(QString::fromUtf8("pit11"));
        sizePolicy.setHeightForWidth(pit11->sizePolicy().hasHeightForWidth());
        pit11->setSizePolicy(sizePolicy);
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pit11->setPalette(palette10);

        gridLayout->addWidget(pit11, 1, 4, 1, 1);

        pit10 = new QPushButton(gridLayoutWidget);
        pit10->setObjectName(QString::fromUtf8("pit10"));
        sizePolicy.setHeightForWidth(pit10->sizePolicy().hasHeightForWidth());
        pit10->setSizePolicy(sizePolicy);
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pit10->setPalette(palette11);

        gridLayout->addWidget(pit10, 1, 3, 1, 1);

        pit2 = new QPushButton(gridLayoutWidget);
        pit2->setObjectName(QString::fromUtf8("pit2"));
        sizePolicy.setHeightForWidth(pit2->sizePolicy().hasHeightForWidth());
        pit2->setSizePolicy(sizePolicy);
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pit2->setPalette(palette12);

        gridLayout->addWidget(pit2, 0, 3, 1, 1);

        pit5 = new QPushButton(gridLayoutWidget);
        pit5->setObjectName(QString::fromUtf8("pit5"));
        sizePolicy.setHeightForWidth(pit5->sizePolicy().hasHeightForWidth());
        pit5->setSizePolicy(sizePolicy);
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pit5->setPalette(palette13);

        gridLayout->addWidget(pit5, 0, 0, 1, 1);

        pit0 = new QPushButton(gridLayoutWidget);
        pit0->setObjectName(QString::fromUtf8("pit0"));
        sizePolicy.setHeightForWidth(pit0->sizePolicy().hasHeightForWidth());
        pit0->setSizePolicy(sizePolicy);
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        pit0->setPalette(palette14);

        gridLayout->addWidget(pit0, 0, 5, 1, 1);

        pit12 = new QPushButton(gridLayoutWidget);
        pit12->setObjectName(QString::fromUtf8("pit12"));
        sizePolicy.setHeightForWidth(pit12->sizePolicy().hasHeightForWidth());
        pit12->setSizePolicy(sizePolicy);
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pit12->setPalette(palette15);

        gridLayout->addWidget(pit12, 1, 5, 1, 1);

        pushButtonBack = new QPushButton(gameWidget);
        pushButtonBack->setObjectName(QString::fromUtf8("pushButtonBack"));
        pushButtonBack->setEnabled(false);
        pushButtonBack->setGeometry(QRect(350, 510, 89, 25));
        gameFlowLabel0 = new QLabel(gameWidget);
        gameFlowLabel0->setObjectName(QString::fromUtf8("gameFlowLabel0"));
        gameFlowLabel0->setGeometry(QRect(230, 420, 351, 20));
        gameFlowLabel0->setLayoutDirection(Qt::LeftToRight);
        gameFlowLabel0->setTextFormat(Qt::AutoText);
        gameFlowLabel0->setAlignment(Qt::AlignCenter);
        gameFlowLabel1 = new QLabel(gameWidget);
        gameFlowLabel1->setObjectName(QString::fromUtf8("gameFlowLabel1"));
        gameFlowLabel1->setGeometry(QRect(310, 440, 191, 20));
        gameFlowLabel1->setAlignment(Qt::AlignCenter);
        label = new QLabel(gameWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(380, 370, 67, 17));
        QFont font2;
        font2.setPointSize(21);
        label->setFont(font2);
        label_2 = new QLabel(gameWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 100, 67, 17));
        label_2->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Mankala", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Szukaj gry", nullptr));
        labelNameTip->setText(QCoreApplication::translate("MainWindow", "Nazwa gracza", nullptr));
        labelServerAdres->setText(QCoreApplication::translate("MainWindow", "Adres serwera", nullptr));
        lineEditServerAdres->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        labelServerPort->setText(QCoreApplication::translate("MainWindow", "Port serwera", nullptr));
        lineEditServerPort->setText(QCoreApplication::translate("MainWindow", "1234", nullptr));
        labelPlayer0->setText(QCoreApplication::translate("MainWindow", "Player0", nullptr));
        labelPlayer1->setText(QCoreApplication::translate("MainWindow", "Player1", nullptr));
        pushButtonSurrender->setText(QCoreApplication::translate("MainWindow", "Poddaj si\304\231", nullptr));
        pit6->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pit13->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pit9->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pit7->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pit4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pit3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pit8->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pit1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pit11->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pit10->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pit2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pit5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pit0->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pit12->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("MainWindow", "Powr\303\263t", nullptr));
        gameFlowLabel0->setText(QCoreApplication::translate("MainWindow", "Ruch gracza", nullptr));
        gameFlowLabel1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "---->", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<----", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
