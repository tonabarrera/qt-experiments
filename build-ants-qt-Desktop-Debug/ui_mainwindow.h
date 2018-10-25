/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *main_layout;
    QVBoxLayout *control_layout;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QPushButton *btn_start;
    QPushButton *btn_pause;
    QPushButton *btn_color;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *game_layout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *gameLayout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1350, 720);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 7, 1331, 701));
        main_layout = new QHBoxLayout(horizontalLayoutWidget);
        main_layout->setSpacing(6);
        main_layout->setContentsMargins(11, 11, 11, 11);
        main_layout->setObjectName(QStringLiteral("main_layout"));
        main_layout->setContentsMargins(0, 0, 0, 0);
        control_layout = new QVBoxLayout();
        control_layout->setSpacing(6);
        control_layout->setObjectName(QStringLiteral("control_layout"));
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        control_layout->addWidget(label);

        spinBox = new QSpinBox(horizontalLayoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        control_layout->addWidget(spinBox);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        control_layout->addWidget(label_2);

        spinBox_2 = new QSpinBox(horizontalLayoutWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));

        control_layout->addWidget(spinBox_2);

        btn_start = new QPushButton(horizontalLayoutWidget);
        btn_start->setObjectName(QStringLiteral("btn_start"));

        control_layout->addWidget(btn_start);

        btn_pause = new QPushButton(horizontalLayoutWidget);
        btn_pause->setObjectName(QStringLiteral("btn_pause"));

        control_layout->addWidget(btn_pause);

        btn_color = new QPushButton(horizontalLayoutWidget);
        btn_color->setObjectName(QStringLiteral("btn_color"));

        control_layout->addWidget(btn_color);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        control_layout->addItem(verticalSpacer);


        main_layout->addLayout(control_layout);

        game_layout = new QVBoxLayout();
        game_layout->setSpacing(6);
        game_layout->setObjectName(QStringLiteral("game_layout"));
        scrollArea = new QScrollArea(horizontalLayoutWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1166, 693));
        verticalLayoutWidget_3 = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 0, 1021, 691));
        gameLayout = new QVBoxLayout(verticalLayoutWidget_3);
        gameLayout->setSpacing(6);
        gameLayout->setContentsMargins(11, 11, 11, 11);
        gameLayout->setObjectName(QStringLiteral("gameLayout"));
        gameLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);

        game_layout->addWidget(scrollArea);


        main_layout->addLayout(game_layout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Tama\303\261o:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Porcentaje de hormigas:", nullptr));
        btn_start->setText(QApplication::translate("MainWindow", "Iniciar/Reiniciar", nullptr));
        btn_pause->setText(QApplication::translate("MainWindow", "Pausa/Continuar", nullptr));
        btn_color->setText(QApplication::translate("MainWindow", "Color de la hormiga", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
