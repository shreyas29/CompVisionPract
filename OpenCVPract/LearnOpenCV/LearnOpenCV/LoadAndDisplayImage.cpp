#include <iostream>
#include <string>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
using namespace std;

int main()
{
	Mat image;
	string image_path;
	
	cout<<"Enter image path ... \n";
	getline(cin,image_path);

	image = imread(image_path,CV_LOAD_IMAGE_COLOR);

	if(!image.data)
	{
		cout << "Could not find/load image";
		return -1;
	}
	
	namedWindow("Display Window",WINDOW_AUTOSIZE);
	imshow("Display Window",image);

	waitKey(0);
	return 0;
}