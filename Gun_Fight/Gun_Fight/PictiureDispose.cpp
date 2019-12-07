#include "PictiureDispose.h"

Dispose::Dispose()
{
	mi_color_R = 0;
	mi_color_G = 0;
	mi_color_B = 0;
	mi_alpha = 0;
}

Dispose::~Dispose()
{
}

void Dispose::setImage(IMAGE Image, int x, int y)
{
	mI_image = Image;
	mStr_coor.x = x;
	mStr_coor.y = y;
}

int Dispose::getImageX()const
{
	return mStr_coor.x;
}

int Dispose::getImageY()const
{
	return mStr_coor.y;
}

IMAGE Dispose::Putimage()
{
	return mI_image;	//返回图片
}

void Dispose::setBlur(int BlurValue)
{
	mi_BlurValue = BlurValue;

	mi_image_width = mI_image.getwidth();
	mi_image_height = mI_image.getheight();
	mD_image_buffer = GetImageBuffer(&mI_image);
	mi_color_R = 0;
	mi_color_G = 0;
	mi_color_B = 0;

	int m = 0;
	int num = 0;
	int color = 0;
	int Kernel[9] = { -(mi_image_width + 1),-mi_image_width,-(mi_image_width - 1),-1,
		0,1,(mi_image_width - 1),mi_image_width,(mi_image_width + 1) };

	for (int a = 0; a < mi_BlurValue; a++)
	{


		for (int i = 0; i < mi_image_width*mi_image_height; i++)
		{
			m = 0;
			for (int n = 0; n < 9; n++)
			{
				num = i + Kernel[n];

				if (num < 0 || num >= mi_image_width*mi_image_height)
				{
					color = RGB(0, 0, 0);
					m++;
				}
				else
				{
					color = mD_image_buffer[num];
				}

				mi_color_R += GetRValue(color);
				mi_color_G += GetGValue(color);
				mi_color_B += GetBValue(color);
			}
			mD_image_buffer[i] = RGB(mi_color_R / (9 - m), mi_color_G / (9 - m), mi_color_B / (9 - m));
			mi_color_R = 0, mi_color_G = 0, mi_color_B = 0;
		}
	}
}

//参数说明
//alpha值范围 0~1（0为原图,1为全透明,其余为半透明）
void Dispose::setTransparency(double alpha)
{
	IMAGE image_temp;

	mi_alpha = alpha;
	if(mi_alpha!=0)			//alpha 为0不进行处理
	{ 
		mi_image_width = mI_image.getwidth();
		mi_image_height = mI_image.getheight();

		SetWorkingImage();
		getimage(&image_temp, mStr_coor.x, mStr_coor.y, mi_image_width, mi_image_height);

		mD_image_buffer = GetImageBuffer(&mI_image);
		mD_image_buffer1 = GetImageBuffer(&image_temp);

		mi_color_R = 0;
		mi_color_G = 0;
		mi_color_B = 0;

		for (int i = 0; i < mi_image_width*mi_image_height; i++)
		{
			mi_color_R = int((1 - alpha)*GetRValue(mD_image_buffer[i]) + (alpha*GetRValue(mD_image_buffer1[i])));
			mi_color_G = int((1 - alpha)*GetGValue(mD_image_buffer[i]) + (alpha*GetGValue(mD_image_buffer1[i])));
			mi_color_B = int((1 - alpha)*GetBValue(mD_image_buffer[i]) + (alpha*GetBValue(mD_image_buffer1[i])));

			mD_image_buffer[i] = RGB(mi_color_R, mi_color_G, mi_color_B);
		}
	}
}

//参数说明
//color_delete:需要清除的颜色值，color_tolerance:color_delete 和 图片上颜色的差值
void Dispose::setCutoutImage(COLORREF color_delete, int color_tolerance)
{
	IMAGE image_temp;
	
	mC_color_delete = BGR(color_delete);
	mi_color_tolerance = color_tolerance;

	mi_image_width = mI_image.getwidth();
	mi_image_height = mI_image.getheight();

	SetWorkingImage();
	getimage(&image_temp, mStr_coor.x, mStr_coor.y, mi_image_width, mi_image_height);

	mD_image_buffer = GetImageBuffer(&mI_image);
	mD_image_buffer1 = GetImageBuffer(&image_temp);

	mi_color_R = 0;		int r = GetRValue(mC_color_delete);
	mi_color_G = 0;		int g = GetGValue(mC_color_delete);
	mi_color_B = 0;		int b = GetBValue(mC_color_delete);

	for (int i = 0; i < mi_image_width*mi_image_height; i++)
	{
		mi_color_R = GetRValue(mD_image_buffer[i]);
		mi_color_G = GetGValue(mD_image_buffer[i]);
		mi_color_B = GetBValue(mD_image_buffer[i]);

		if (abs(mi_color_R - r) <= mi_color_tolerance
			&&abs(mi_color_G - g) <= mi_color_tolerance
			&&abs(mi_color_B - b) <= mi_color_tolerance)   //颜色容差判断
		{
			mD_image_buffer[i] = mD_image_buffer1[i];
		}
	}
}

