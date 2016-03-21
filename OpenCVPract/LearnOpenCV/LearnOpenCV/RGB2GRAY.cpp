#include <iostream>
#include <string>

#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
using namespace std;

int main()
{
	Mat image_rgb, image_gray;
	string image_rgb_path;
	
	cout << "Enter your RGB image path ... \n";
	getline(cin,image_rgb_path);

	image_rgb = imread(image_rgb_path,CV_LOAD_IMAGE_COLOR);

	if(!image_rgb.data)
	{
		cout << "Could not find/load image";
		return -1;
	}

	cvtColor(image_rgb,image_gray,CV_BGR2GRAY);

	namedWindow("Gray Image",WINDOW_AUTOSIZE);
	imshow("Gray Image",image_gray);

	waitKey(0);
	return 0;
}