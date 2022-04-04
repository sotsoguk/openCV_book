#include <opencv2/opencv.hpp> //Include file for every supported OpenCV function

int main(int argc, char **argv)
{
    cv::Mat img_mod;
    
    cv::Mat img(cv::imread(argv[1], -1));
    if (img.empty())
        return -1;
    cv::namedWindow("original", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("modified", cv::WINDOW_AUTOSIZE);
    
    cv::pyrDown(img,img_mod);
    cv::imshow("original", img);
    cv::imshow("modified", img_mod);
    
    cv::waitKey(0);
    cv::destroyWindow("original");
    cv::destroyWindow("modified");
    
    return 0;
}

