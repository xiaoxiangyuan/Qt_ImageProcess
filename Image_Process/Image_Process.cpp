#include "Image_Process.h"

Image_Process::Image_Process(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	// Ϊ�˵�����ť�����ź�/��
	connect(ui.actOpen, SIGNAL(triggered()), this, SLOT(OnMenuLoadPictureClicked()));
	connect(ui.actSave, SIGNAL(triggered()), this, SLOT(OnMenuSavePictureClicked()));
	connect(ui.actGray, SIGNAL(triggered()), this, SLOT(OnMenuColor2GrayClicked()));
	connect(ui.actHistm, SIGNAL(triggered()), this, SLOT(OnMenuHistmClicked()));
	connect(ui.actLineTrams, SIGNAL(triggered()), this, SLOT(OnMenuLinerTransClicked()));
	connect(ui.actLog, SIGNAL(triggered()), this, SLOT(OnMenuLogTransClicked()));
	connect(ui.actGamma, SIGNAL(triggered()), this, SLOT(OnMenuGammaTransClicked()));
	connect(ui.actThred, SIGNAL(triggered()), this, SLOT(OnMenuThresholdTransClicked()));
	connect(ui.actSubsection, SIGNAL(triggered()), this, SLOT(OnMenuSubsectionTransClicked()));
	connect(ui.actEqualization, SIGNAL(triggered()), this, SLOT(OnMenuEqualizationClicked()));
	connect(ui.actNorm, SIGNAL(triggered()), this, SLOT(OnMenuNormalizationClicked()));
}

int Image_Process::OnMenuLoadPictureClicked()
{
	QFileDialog	qdlg;
	int nWidth, nHeight, nbit, nchanel;

	// ��ȡ�û�ѡ����ļ�·��
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "/home", tr("Images (*.bmp)"));
	string strFileName = fileName.toStdString();
	// �ж��Ƿ�ѡ���ļ�
	if (fileName.length() > 0)
	{
		// ��ȡ�ļ�
		if (m_ImageLib.LoadBmpFromFile(strFileName.c_str()))
		{
			// ��ȡλͼ���ݽ�����ʾ
			nWidth = m_ImageLib.GetBmpWidth();
			nHeight = m_ImageLib.GetBmpHeight();
			nbit = m_ImageLib.GetBmpBitcount();
			nchanel = nbit / 8;

			// ����QImage���󲢿����ڴ�,�Ҷ�ͼ��ʹ��Format_Indexed8����ɫͼ��ʹ��Format_RGB888
			QImage img = QImage(nWidth, nHeight, QImage::Format_Indexed8);
			m_ImageLib.GetBmpData(img.bits());
			
			// ����ͼƬ��С��Ӧ����
			img = img.scaled(ui.label_show->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);		
			ui.label_show->setPixmap(QPixmap::fromImage(img));

			return 0;
		}
	}
	return 0;
}

int Image_Process::OnMenuSavePictureClicked()
{

	return 0;
}

int Image_Process::OnMenuColor2GrayClicked()
{

	return 0;
}

int Image_Process::OnMenuHistmClicked()
{

	return 0;
}

int Image_Process::OnMenuLogTransClicked()
{

	return 0;
}

int Image_Process::OnMenuGammaTransClicked()
{

	return 0;
}

int Image_Process::OnMenuLinerTransClicked()
{

	return 0;
}

int Image_Process::OnMenuThresholdTransClicked()
{

	return 0;
}

int Image_Process::OnMenuSubsectionTransClicked()
{

	return 0;
}

int Image_Process::OnMenuEqualizationClicked()
{

	return 0;
}

int Image_Process::OnMenuNormalizationClicked()
{

	return 0;
}