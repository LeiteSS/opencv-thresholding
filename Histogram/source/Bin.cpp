////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "opencv2/highgui/highgui.hpp"
#include "opencv2\opencv.hpp"
#include <iostream>


using namespace cv;
using namespace std;


int main(int argc, const char** argv)

{

	Mat img = imread("C:\\mel02.jpg", CV_LOAD_IMAGE_COLOR); //open and read the image


	if (img.empty())
	{
		cout << "Image cannot be loaded..!!" << endl;
		return -1;
	}

	//Grayscale matrix
	cv::Mat grayscaleMat(img.size(), CV_8U);

	//Convert BGR to Gray
	cv::cvtColor(img, grayscaleMat, CV_BGR2GRAY);

	//Binary image
	cv::Mat binaryMat(grayscaleMat.size(), grayscaleMat.type());

	//Apply thresholding
	cv::threshold(grayscaleMat, binaryMat, 100, 255, cv::THRESH_BINARY);

	//Show the results
	cv::namedWindow("Output", cv::WINDOW_AUTOSIZE);
	cv::imshow("Output", binaryMat);

	cv::waitKey(0);

	return 0;
}

