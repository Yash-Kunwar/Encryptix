#include <opencv2/opencv.hpp>
#include <iostream>
    
using namespace cv;

int main()
{
    // Load Image
    Mat img = imread("image.jpg");

    // Display Image
    namedWindow("Original Image", WINDOW_NORMAL);
    imshow("Original Image", img);
    waitKey(0);

    // Image Filters
    Mat gray_img, blur_img, sharpen_kernel, sharpen_img;
    cvtColor(img, gray_img, COLOR_BGR2GRAY);
    GaussianBlur(img, blur_img, Size(21, 21), 0);
    sharpen_kernel = (Mat_<float>(3, 3) << -1, -1, -1, -1, 9, -1, -1, -1, -1);
    filter2D(img, sharpen_img, -1, sharpen_kernel);

    // Color Adjustment
    Mat adjusted_img;
    int brightness = 50;
    int contrast = 50;
    img.convertTo(adjusted_img, -1, 1 + contrast / 127.0, brightness - contrast);

    // Crop and Resize
    Rect crop_rect(100, 100, 400, 400);
    Mat cropped_img = img(crop_rect);
    Mat resized_img;
    resize(img, resized_img, Size(800, 600));

    // Image Saving
    imwrite("processed_image.jpg", resized_img);

    // User Interface
    // You can use a GUI framework like Qt or wxWidgets to design the user interface for this tool.

    return 0;
}
