#ifndef __CAPTURE_DEVICE_HPP__
#define __CAPTURE_DEVICE_HPP__

#include <iostream>
#include <sstream>
#include <string>
#include "opencv2/opencv.hpp"

#include "ProjectConfig.hpp"

class CaptureDevice
{
private:
    std::string m_windowTitle;
    cv::Mat m_currentFrame;
    cv::VideoCapture m_videoCapture;

public:
    CaptureDevice();
    ~CaptureDevice();

    void initWindow();
    void initCapture();
    void init();
    void run();

}; // capture device

#endif