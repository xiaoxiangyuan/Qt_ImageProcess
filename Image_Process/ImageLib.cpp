#include "ImageLib.h"


CImageLib::CImageLib()
{
	m_lpBmpInfo = NULL;
	m_lpBmpData = NULL;

	m_uBmpWidth = 0;
	m_uBmpHeight = 0;
	m_uBmpBit = 0;
}


CImageLib::~CImageLib()
{
	if (m_lpBmpInfo != NULL)
	{
		delete[] m_lpBmpInfo;
		m_lpBmpInfo = NULL;
	}

	if (m_lpBmpData != NULL)
	{
		delete[] m_lpBmpData;
		m_lpBmpData = NULL;
	}
}

bool CImageLib::LoadBmpFromFile(const char* fileName)
{
	DWORD dwSize = 0;
	FILE* file;

	// ��λͼ�ļ�
	file = fopen(fileName, "rb");

	// �ж��Ƿ�򿪳ɹ�
	if (file == NULL)
	{
		return false;
	}
	
	// ��ȡλͼ�ļ�ͷ
	fread(&m_BmpHead, sizeof(BITMAPFILEHEADER), 1, file);

	// �����ڴ��ȡλͼ��Ϣ
	dwSize = m_BmpHead.bfOffBits - sizeof(BITMAPFILEHEADER);
	if (m_lpBmpInfo != NULL)
	{
		delete[] m_lpBmpInfo;
		m_lpBmpInfo = NULL;
	}

	m_lpBmpInfo = new BITMAPINFO[dwSize];
	fread(m_lpBmpInfo, dwSize, 1, file);

	// �����ڴ��ȡλͼ����
	dwSize = m_lpBmpInfo->bmiHeader.biSizeImage;
	if (m_lpBmpData != NULL)
	{
		delete[] m_lpBmpData;
		m_lpBmpData = NULL;
	}

	m_lpBmpData = new BYTE[dwSize];
	fread(m_lpBmpData, 1, dwSize, file);

	// ��ȡ��Ӧ��ֵ
	m_uBmpBit = m_lpBmpInfo->bmiHeader.biBitCount;
	m_uBmpWidth = m_lpBmpInfo->bmiHeader.biWidth;
	m_uBmpHeight = m_lpBmpInfo->bmiHeader.biHeight;

	return true;
}

void CImageLib::GetBmpData(BYTE* bmpData)
{
	if (m_lpBmpData == NULL)
	{
		return;
	}

	int LineByte = (m_uBmpWidth * m_uBmpBit / 8 + 3) / 4 * 4;
	memcpy(bmpData, m_lpBmpData, LineByte * m_uBmpHeight);
}

bool	CImageLib::SaveBmp(const char* fileName)
{

	return true;
}
