#include <iostream>
#include <Windows.h>
#include "opencv2\highgui.hpp"

using namespace cv;
using namespace std;

int main()
{
	VideoCapture vc;
	Mat frame;
	int frames_per_sec;
	
	//open stream
	vc.open("E:/Movies/Bolly Wood/RHTDM.mp4");
	
	//check video file exists or not
	if(!vc.isOpened())
		throw runtime_error("Can't open video ...");

	//get frames per second
	frames_per_sec = vc.get(CV_CAP_PROP_FPS);
	cout << "FPS: " << frames_per_sec << endl;
	cout << "HEIGHT: " << vc.get(CV_CAP_PROP_FRAME_HEIGHT) << endl;
	cout << "WIDTH: " << vc.get(CV_CAP_PROP_FRAME_WIDTH) << endl;	
	cout << "current position of the video in frames: " << vc.get(CV_CAP_PROP_POS_FRAMES);
	cout << "current position of the video in milliseconds: " << vc.get(CV_CAP_PROP_POS_MSEC) << endl;	

	//create window
	namedWindow("Movie", CV_WINDOW_AUTOSIZE);

	while (vc.read(frame))
	{
		imshow("Movie", frame);
	
		if(waitKey(30) == VK_ESCAPE)
		{
			cout <<"Esc pressed"<<endl;
			break;
		}
	}	
	return 0;
}