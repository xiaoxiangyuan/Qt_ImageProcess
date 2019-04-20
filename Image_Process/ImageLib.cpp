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

	// 打开位图文件
	file = fopen(fileName, "rb");

	// 判断是否打开成功
	if (file == NULL)
	{
		return false;
	}
	
	// 读取位图文件头
	fread(&m_BmpHead, sizeof(BITMAPFILEHEADER), 1, file);

	// 开辟内存读取位图信息
	dwSize = m_BmpHead.bfOffBits - sizeof(BITMAPFILEHEADER);
	if (m_lpBmpInfo != NULL)
	{
		delete[] m_lpBmpInfo;
		m_lpBmpInfo = NULL;
	}

	m_lpBmpInfo = new BITMAPINFO[dwSize];
	fread(m_lpBmpInfo, dwSize, 1, file);

	// 开辟内存读取位图数据
	dwSize = m_lpBmpInfo->bmiHeader.biSizeImage;
	if (m_lpBmpData != NULL)
	{
		delete[] m_lpBmpData;
		m_lpBmpData = NULL;
	}

	m_lpBmpData = new BYTE[dwSize];
	fread(m_lpBmpData, 1, dwSize, file);

	// 获取相应的值
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
