#include <iostream>
#include <opencv2/opencv.hpp>
#include <fmt/core.h>
int main(int argc, char **argv)
{
    cv::namedWindow("cam", cv::WINDOW_AUTOSIZE);
    cv::VideoCapture cap;
    auto camNum{0};
    if (argc == 1)
    {
        cap.open(0);
    }
    else
    {
        cap.open(argv[1]);
    }
    if (!cap.isOpened())
    {
        std::cerr << "Specified camera not working \n";
    }
    cap.set(cv::CAP_PROP_FRAME_HEIGHT, 480);
    cap.set(cv::CAP_PROP_FRAME_WIDTH, 640);
    cap.set(cv::CAP_PROP_FPS, 30);
    //    std::cout << cap.get(cv::CAP_PROP_FPS) << ","<< cap.get(cv::CAP_PROP_FRAME_HEIGHT)<<"\n";
    fmt::print("{} x {} @ {} fps\n", cap.get(cv::CAP_PROP_FRAME_WIDTH), cap.get(cv::CAP_PROP_FRAME_HEIGHT), cap.get(cv::CAP_PROP_FPS));
     cv::Mat frame;
    while (true)
    {
        cap >> frame;
        if (frame.empty())
            break;
        cv::imshow("cam", frame);
        if (cv::waitKey(33) >= 0)
            break;
    }
    return 0;
}