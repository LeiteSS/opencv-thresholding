////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "opencv2/highgui/highgui.hpp"
#include "opencv2\opencv.hpp"
#include <iostream>
#include <fstream>

using namespace cv;
using namespace std;


int main(int argc, char** argv)
{
	Mat colorImage = imread("C:\\mel02.jpg");

	// First convert the image to grayscale.
	Mat grayImage;
	cvtColor(colorImage, grayImage, CV_RGB2GRAY);

	// Then apply thresholding to make it binary.
	Mat binaryImage(grayImage.size(), grayImage.type());
	threshold(grayImage, binaryImage, 128, 255, CV_THRESH_BINARY);

	// Open the file in write mode.
	ofstream outputFile;
	outputFile.open("binary.txt");

	// Iterate through pixels.
	for (int r = 0; r < binaryImage.rows; r++)
	{
		for (int c = 0; c < binaryImage.cols; c++)
		{
			int pixel = binaryImage.at<uchar>(r, c);

			outputFile << pixel << '\t';
		}
		outputFile << endl;
	}

	// Close the file.
	outputFile.close();
	return 0;
}


