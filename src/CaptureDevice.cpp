#include "CaptureDevice.hpp"

CaptureDevice::CaptureDevice()
{
    std::cout << "Constructing CaptureDevice..." << std::endl;
}

CaptureDevice::~CaptureDevice()
{
    std::cout << "Deconstructing CaptureDevice..." << std::endl;
}

void CaptureDevice::initWindow()
{
    cv::namedWindow(this->m_windowTitle, cv::WINDOW_AUTOSIZE);
}

void CaptureDevice::initCapture()
{
    this->m_videoCapture = cv::VideoCapture(0);
}

void CaptureDevice::init()
{
    std::cout << "Initilizing CaptureDevice..." << std::endl;
    std::stringstream ss;
    ss << PROJECT_NAME << " - v" << PROJECT_VERSION_MAJOR << "." << PROJECT_VERSION_MINOR;
    this->m_windowTitle = ss.str();

    this->initWindow();
    this->initCapture();
}

void CaptureDevice::run()
{
    while(true)
    {
        this->m_videoCapture >> this->m_currentFrame; // Insert videocapture in to current frame
        cv::imshow(this->m_windowTitle, this->m_currentFrame);
        cv::waitKey(25);

        if (cv::getWindowProperty(this->m_windowTitle, cv::WINDOW_AUTOSIZE) == -1)
            break;
    }
}