#include <iostream>
#include <opencv2/opencv.hpp>
int main() {
    // 加载图像
    cv::Mat image = cv::imread("D:\\Wallpaper\\雏田.png");
    if (image.empty()) {
        std::cerr << "Error: Could not read image file." << std::endl;
        return -1;
    }

    // 调整图像大小
    cv::Size newSize(512, 288);
    cv::Mat resizedImage;
    cv::resize(image, resizedImage, newSize);

    // 显示调整后的图像
    cv::imshow("Resized Image", resizedImage);
    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}