#pragma once
#ifndef PictiureDispose_h
#define PictiureDispose_h
#include <graphics.h>
#include <conio.h>

struct Coordinate
{
	int x;
	int y;
};

class Dispose				//ͼ������
{
public:
	Dispose();
	~Dispose();

	void setImage(IMAGE Image, int x = 0, int y = 0);

	void setBlur(int);

	void setTransparency(double alpha = 0);

	void setCutoutImage(COLORREF color_delete, int color_tolerance);

	int getImageX() const;

	int getImageY() const;

	IMAGE Putimage();

protected:
	POINT mStr_coor;	//����ṹ
	COLORREF mC_color_delete;
	LPCTSTR mL_pResName;
	LPCTSTR mL_Path;
	IMAGE mI_image;

	double mi_alpha;		//͸����
	int mi_color_tolerance; //�ݲ�
	int mi_image_width;
	int mi_image_height;
	int mi_image_number;
	int mi_BlurValue;

private:
	DWORD *mD_image_buffer;
	DWORD *mD_image_buffer1;
	IMAGE *mI_image_getincision;	//��ȡ�и�õ�ͼƬ����

	int mi_color_R;
	int mi_color_G;
	int mi_color_B;

	bool mb_bResize;
};
#endif

