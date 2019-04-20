#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Image_Process.h"
#include "ImageLib.h"
#include <opencv.hpp>
#include "highgui.h"
#include <QFileDialog> 
#include <iostream>

using namespace std;
using namespace cv;

class Image_Process : public QMainWindow
{
	Q_OBJECT

public:
	Image_Process(QWidget *parent = Q_NULLPTR);

private:
	Ui::Image_ProcessClass ui;
	CImageLib	m_ImageLib;
	IplImage* m_srcImage;
	QImage	m_qtImage;

private slots:
	int OnMenuLoadPictureClicked();
	int OnMenuSavePictureClicked();
	int OnMenuColor2GrayClicked();
	int OnMenuHistmClicked();
	int OnMenuLogTransClicked();
	int OnMenuGammaTransClicked();
	int OnMenuLinerTransClicked();
	int OnMenuThresholdTransClicked();
	int OnMenuSubsectionTransClicked();
	int OnMenuEqualizationClicked();
	int OnMenuNormalizationClicked();
};
