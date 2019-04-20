#pragma once
#include "windows.h"
#include <stdio.h>

class CImageLib
{
public:
	CImageLib();
	~CImageLib();

private:
	BITMAPFILEHEADER					m_BmpHead;												// λͼ�ļ�ͷ
	LPBITMAPINFO							m_lpBmpInfo;												// λͼ��Ϣ
	LPBYTE											m_lpBmpData;												// λͼ����

	unsigned int									m_uBmpWidth;											// λͼ��
	unsigned int									m_uBmpHeight;											// λͼ��
	unsigned int									m_uBmpBit;													// λ���

public:
	bool						  LoadBmpFromFile(const char* fileName);						    // ����bmp
	bool						  SaveBmp(const char* fileName);										// ����bmp

	inline unsigned int GetBmpWidth(){ return m_uBmpWidth; };							// ��ȡλͼ��
	inline unsigned int GetBmpHeight(){ return m_uBmpHeight; };						// ��ȡλͼ��
	inline unsigned int GetBmpBitcount(){ return m_uBmpBit; };							// ��ȡλ���

	void						  GetBmpData(BYTE* bmpData);											// ��ȡλͼ����
	void						  GetBmpInfo(BITMAPINFO* bmpInfo);								// ��ȡλͼ��Ϣ
};

