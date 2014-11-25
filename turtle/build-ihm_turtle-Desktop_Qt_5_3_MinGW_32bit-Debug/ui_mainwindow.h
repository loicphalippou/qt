/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *image_rgb;
    QLabel *troisD;
    QSpacerItem *verticalSpacer_4;
    QLabel *carte2d;
    QLabel *depth;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *infos;
    QFrame *line_3;
    QLabel *label_3;
    QProgressBar *wifi;
    QLabel *label_2;
    QProgressBar *batterie;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBox;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QLabel *debug;
    QFrame *line_2;
    QTextBrowser *textBrowser;
    QFrame *line;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(592, 357);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 1, 2, 1, 1);

        image_rgb = new QLabel(centralwidget);
        image_rgb->setObjectName(QStringLiteral("image_rgb"));

        gridLayout_2->addWidget(image_rgb, 2, 0, 1, 1);

        troisD = new QLabel(centralwidget);
        troisD->setObjectName(QStringLiteral("troisD"));

        gridLayout_2->addWidget(troisD, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 3, 2, 1, 1);

        carte2d = new QLabel(centralwidget);
        carte2d->setObjectName(QStringLiteral("carte2d"));

        gridLayout_2->addWidget(carte2d, 2, 2, 1, 1);

        depth = new QLabel(centralwidget);
        depth->setObjectName(QStringLiteral("depth"));

        gridLayout_2->addWidget(depth, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 3, 1, 1);


        gridLayout->addLayout(gridLayout_2, 3, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        infos = new QLabel(centralwidget);
        infos->setObjectName(QStringLiteral("infos"));

        verticalLayout->addWidget(infos);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        wifi = new QProgressBar(centralwidget);
        wifi->setObjectName(QStringLiteral("wifi"));
        wifi->setValue(75);
        wifi->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        wifi->setTextVisible(true);

        verticalLayout->addWidget(wifi);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        batterie = new QProgressBar(centralwidget);
        batterie->setObjectName(QStringLiteral("batterie"));
        batterie->setValue(24);
        batterie->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        batterie->setOrientation(Qt::Horizontal);
        batterie->setInvertedAppearance(false);
        batterie->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout->addWidget(batterie);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setEnabled(true);
        checkBox->setMouseTracking(true);
        checkBox->setCheckable(false);

        gridLayout_3->addWidget(checkBox, 0, 2, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        debug = new QLabel(centralwidget);
        debug->setObjectName(QStringLiteral("debug"));

        verticalLayout->addWidget(debug);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);


        gridLayout->addLayout(verticalLayout, 3, 3, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setEnabled(false);
        menubar->setGeometry(QRect(0, 0, 592, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        statusbar->setEnabled(false);
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        image_rgb->setText(QApplication::translate("MainWindow", "image rgb", 0));
        troisD->setText(QApplication::translate("MainWindow", "3D", 0));
        carte2d->setText(QApplication::translate("MainWindow", "carte 2d", 0));
        depth->setText(QApplication::translate("MainWindow", "Depth", 0));
        infos->setText(QApplication::translate("MainWindow", "infos", 0));
        label_3->setText(QApplication::translate("MainWindow", "Signal Wifi", 0));
        label_2->setText(QApplication::translate("MainWindow", "Batterie TurtleBot", 0));
        checkBox->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Etat Systeme", 0));
        debug->setText(QApplication::translate("MainWindow", "debug", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
