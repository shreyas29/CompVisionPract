#include <iostream>
#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
using namespace std;

int main()
{
	Mat mat = Mat::zeros(400,400,CV_8UC3);

	//line 
	line(mat, Point(100,100),Point(300,300),Scalar(255,255,0),5,8);

	//circle
	circle( mat, Point( 200, 200 ), 32.0, Scalar( 0, 255, 255 ), 10, 8);
    
	//ellipse
	ellipse(mat,Point(200,200),Size(300,100),0,0,360,Scalar(255,255,0));

	//rectangle
	rectangle(mat,Point(100,100),Point(150,200),Scalar(255,0,0));	

	//put text in image
	putText(mat,"Label",Point(50,50),FONT_HERSHEY_SIMPLEX,1,Scalar(200,20,200));

	//display image
	imshow("Image",mat);

	waitKey(0);
	return 0;
}