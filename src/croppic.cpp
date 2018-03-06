#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>

#include <opencv2/opencv.hpp>
#include "sample.hpp"

using namespace std;
using namespace cv;

void parsesample(const string&);
void cropimg(SampleInfo&);

int main(int argc, const char** argv)
{
	ifstream input(argv[1]);
	string s;

	while(getline(input, s))
	{
		parsesample(s);
	}
	input.close();

	return 0;
}

void parsesample(const string& s)
{
	SampleInfo sample(s);
	cropimg(sample);
}

void cropimg(SampleInfo& sample)
{
	Mat img = imread(sample.getpath(), 1);
	vector<vector<int>> rects = sample.getRects();
	for (int i = 0; i < sample.getnum(); ++i)
	{
		Mat imgROI = img(Rect(rects[i][0], rects[i][1], rects[i][2], rects[i][3]));
		imwrite(sample.getpath(), imgROI);
	}
}
