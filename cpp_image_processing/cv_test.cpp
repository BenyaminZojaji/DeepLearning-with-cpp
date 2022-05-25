#include <time.h>
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main()
{
    clock_t start_time, end_time;
    start_time = clock();
    cv::Mat image_a, image_b, image_c;

    image_a = cv::imread("IMG_1446.JPG", 1);
    if ( !image_a.data )
    {
        cout << "No image data \n";
        return -1;
    }

    resize(image_a, image_b, cv::Size(), 0.5, 0.5);
    cvtColor(image_b, image_c, cv::COLOR_BGR2GRAY);

    imwrite("result.jpg", image_c);
    // cv::namedWindow("Display Image", WINDOW_AUTOSIZE );
    // cv::imshow("Display Image", image);
    // cv::waitKey(0);

    end_time = clock();
    cout << float(end_time - start_time) / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}

// worked on linux
// sudo apt install libopencv-dev
// g++ cv_test.cpp -o build/myapp `pkg-config --libs --cflags opencv`


// cmake -S ..
// cmake --build . --config Release

// ...
// g++ cv_test.cpp -o myapp -std=c++11 `pkg-config --libs --cflags opencv4` -v --target=arm64
// g++ -I/usr/local/include/opencv4 -L/usr/local/lib/opencv4 -g -o binary  cv_test.cpp -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_ml -lopencv_video -lopencv_features2d -lopencv_calib3d -lopencv_objdetect -lopencv_stitching -std=c++11  --target=arm64-apple-darwin20.2.0 -stdlib=libc++ -lopencv_core

