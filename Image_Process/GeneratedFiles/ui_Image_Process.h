/********************************************************************************
** Form generated from reading UI file 'Image_Process.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGE_PROCESS_H
#define UI_IMAGE_PROCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Image_ProcessClass
{
public:
    QAction *actOpen;
    QAction *actSave;
    QAction *actHistm;
    QAction *actLineTrams;
    QAction *actLog;
    QAction *actGamma;
    QAction *actGray;
    QAction *actEqualization;
    QAction *actNorm;
    QAction *actThred;
    QAction *actSubsection;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_show;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Image_ProcessClass)
    {
        if (Image_ProcessClass->objectName().isEmpty())
            Image_ProcessClass->setObjectName(QStringLiteral("Image_ProcessClass"));
        Image_ProcessClass->resize(600, 400);
        actOpen = new QAction(Image_ProcessClass);
        actOpen->setObjectName(QStringLiteral("actOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/Resources/loadpic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon);
        actSave = new QAction(Image_ProcessClass);
        actSave->setObjectName(QStringLiteral("actSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/Resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSave->setIcon(icon1);
        actHistm = new QAction(Image_ProcessClass);
        actHistm->setObjectName(QStringLiteral("actHistm"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("Resources/histogram.png"), QSize(), QIcon::Normal, QIcon::Off);
        actHistm->setIcon(icon2);
        actLineTrams = new QAction(Image_ProcessClass);
        actLineTrams->setObjectName(QStringLiteral("actLineTrams"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("Resources/linetransform.png"), QSize(), QIcon::Normal, QIcon::Off);
        actLineTrams->setIcon(icon3);
        actLog = new QAction(Image_ProcessClass);
        actLog->setObjectName(QStringLiteral("actLog"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("Resources/logTransform.png"), QSize(), QIcon::Normal, QIcon::Off);
        actLog->setIcon(icon4);
        actGamma = new QAction(Image_ProcessClass);
        actGamma->setObjectName(QStringLiteral("actGamma"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("Resources/gamma.png"), QSize(), QIcon::Normal, QIcon::Off);
        actGamma->setIcon(icon5);
        actGray = new QAction(Image_ProcessClass);
        actGray->setObjectName(QStringLiteral("actGray"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("Resources/color_gray.png"), QSize(), QIcon::Normal, QIcon::Off);
        actGray->setIcon(icon6);
        actEqualization = new QAction(Image_ProcessClass);
        actEqualization->setObjectName(QStringLiteral("actEqualization"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("Resources/equalization.png"), QSize(), QIcon::Normal, QIcon::Off);
        actEqualization->setIcon(icon7);
        actNorm = new QAction(Image_ProcessClass);
        actNorm->setObjectName(QStringLiteral("actNorm"));
        QIcon icon8;
        icon8.addFile(QStringLiteral("Resources/normlization.png"), QSize(), QIcon::Normal, QIcon::Off);
        actNorm->setIcon(icon8);
        actThred = new QAction(Image_ProcessClass);
        actThred->setObjectName(QStringLiteral("actThred"));
        QIcon icon9;
        icon9.addFile(QStringLiteral("Resources/threshold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actThred->setIcon(icon9);
        actSubsection = new QAction(Image_ProcessClass);
        actSubsection->setObjectName(QStringLiteral("actSubsection"));
        QIcon icon10;
        icon10.addFile(QStringLiteral("Resources/subsection.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSubsection->setIcon(icon10);
        centralWidget = new QWidget(Image_ProcessClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_show = new QLabel(centralWidget);
        label_show->setObjectName(QStringLiteral("label_show"));
        label_show->setAutoFillBackground(true);
        label_show->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_show);

        Image_ProcessClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Image_ProcessClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        Image_ProcessClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Image_ProcessClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Image_ProcessClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Image_ProcessClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Image_ProcessClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(actOpen);
        menu->addAction(actSave);
        menu_2->addAction(actHistm);
        menu_2->addAction(actGray);
        menu_2->addAction(actLineTrams);
        menu_2->addAction(actLog);
        menu_2->addAction(actGamma);
        menu_2->addAction(actThred);
        menu_2->addAction(actSubsection);
        menu_2->addAction(actEqualization);
        menu_2->addAction(actNorm);
        mainToolBar->addAction(actOpen);
        mainToolBar->addAction(actSave);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actHistm);
        mainToolBar->addAction(actGray);
        mainToolBar->addAction(actLineTrams);
        mainToolBar->addAction(actLog);
        mainToolBar->addAction(actGamma);
        mainToolBar->addAction(actThred);
        mainToolBar->addAction(actSubsection);
        mainToolBar->addAction(actEqualization);
        mainToolBar->addAction(actNorm);

        retranslateUi(Image_ProcessClass);

        QMetaObject::connectSlotsByName(Image_ProcessClass);
    } // setupUi

    void retranslateUi(QMainWindow *Image_ProcessClass)
    {
        Image_ProcessClass->setWindowTitle(QApplication::translate("Image_ProcessClass", "Image_Process", Q_NULLPTR));
        actOpen->setText(QApplication::translate("Image_ProcessClass", "\346\211\223\345\274\200\345\233\276\347\211\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpen->setToolTip(QApplication::translate("Image_ProcessClass", "\346\211\223\345\274\200\345\233\276\347\211\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actOpen->setShortcut(QApplication::translate("Image_ProcessClass", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actSave->setText(QApplication::translate("Image_ProcessClass", "\344\277\235\345\255\230\345\233\276\347\211\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSave->setToolTip(QApplication::translate("Image_ProcessClass", "\344\277\235\345\255\230\345\233\276\347\211\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actSave->setShortcut(QApplication::translate("Image_ProcessClass", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actHistm->setText(QApplication::translate("Image_ProcessClass", "\347\233\264\346\226\271\345\233\276", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actHistm->setToolTip(QApplication::translate("Image_ProcessClass", "\347\233\264\346\226\271\345\233\276", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actLineTrams->setText(QApplication::translate("Image_ProcessClass", "\347\272\277\346\200\247\345\217\230\346\215\242", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actLineTrams->setToolTip(QApplication::translate("Image_ProcessClass", "\347\272\277\346\200\247\345\217\230\346\215\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actLog->setText(QApplication::translate("Image_ProcessClass", "\345\257\271\346\225\260\345\217\230\346\215\242", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actLog->setToolTip(QApplication::translate("Image_ProcessClass", "\345\257\271\346\225\260\345\217\230\346\215\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actGamma->setText(QApplication::translate("Image_ProcessClass", "\344\274\275\351\251\254\345\217\230\346\215\242", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actGamma->setToolTip(QApplication::translate("Image_ProcessClass", "\344\274\275\351\251\254\345\217\230\346\215\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actGray->setText(QApplication::translate("Image_ProcessClass", "\347\201\260\345\272\246\345\214\226", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actGray->setToolTip(QApplication::translate("Image_ProcessClass", "\347\201\260\345\272\246\345\214\226", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actEqualization->setText(QApplication::translate("Image_ProcessClass", "\345\235\207\350\241\241\345\214\226", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actEqualization->setToolTip(QApplication::translate("Image_ProcessClass", "\345\235\207\350\241\241\345\214\226", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actNorm->setText(QApplication::translate("Image_ProcessClass", "\350\247\204\345\256\232\345\214\226", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actNorm->setToolTip(QApplication::translate("Image_ProcessClass", "\350\247\204\345\256\232\345\214\226", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actThred->setText(QApplication::translate("Image_ProcessClass", "\351\230\210\345\200\274\345\210\206\345\211\262", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actThred->setToolTip(QApplication::translate("Image_ProcessClass", "\351\230\210\345\200\274\345\210\206\345\211\262", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSubsection->setText(QApplication::translate("Image_ProcessClass", "\345\210\206\346\256\265\347\272\277\346\200\247", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSubsection->setToolTip(QApplication::translate("Image_ProcessClass", "\345\210\206\346\256\265\347\272\277\346\200\247\345\217\230\346\215\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_show->setText(QString());
        menu->setTitle(QApplication::translate("Image_ProcessClass", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("Image_ProcessClass", "\347\202\271\350\277\220\347\256\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Image_ProcessClass: public Ui_Image_ProcessClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGE_PROCESS_H
