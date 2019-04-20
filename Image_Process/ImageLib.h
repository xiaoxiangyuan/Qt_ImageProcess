#pragma once
#include "windows.h"
#include <stdio.h>

class CImageLib
{
public:
	CImageLib();
	~CImageLib();

private:
	BITMAPFILEHEADER					m_BmpHead;												// 位图文件头
	LPBITMAPINFO							m_lpBmpInfo;												// 位图信息
	LPBYTE											m_lpBmpData;												// 位图数据

	unsigned int									m_uBmpWidth;											// 位图宽
	unsigned int									m_uBmpHeight;											// 位图高
	unsigned int									m_uBmpBit;													// 位深度

public:
	bool						  LoadBmpFromFile(const char* fileName);						    // 载入bmp
	bool						  SaveBmp(const char* fileName);										// 保存bmp

	inline unsigned int GetBmpWidth(){ return m_uBmpWidth; };							// 获取位图宽
	inline unsigned int GetBmpHeight(){ return m_uBmpHeight; };						// 获取位图高
	inline unsigned int GetBmpBitcount(){ return m_uBmpBit; };							// 获取位深度

	void						  GetBmpData(BYTE* bmpData);											// 获取位图数据
	void						  GetBmpInfo(BITMAPINFO* bmpInfo);								// 获取位图信息
};

