#pragma once
#include <string>
#include <opencv2/opencv.hpp>

/*
*	���ദ���ȥ���Բ�CT�г��ֵĸ�Ȧ
*/

class CRemoveSteelFrame
{
public:
	CRemoveSteelFrame();
	CRemoveSteelFrame(std::string filepath);
	~CRemoveSteelFrame();

private:
	cv::Mat src_img;

public:
	bool CRemoveSteelFrame::RemoveFrame();
	unsigned char CRemoveSteelFrame::GetMeanValue(const cv::Mat& src_img);
	void getSizeContours(std::vector<std::vector<cv::Point>> &contours);
};

