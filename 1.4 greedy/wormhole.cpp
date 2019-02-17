/*
ID: yaagnto2
LANG: C++14
TASK: wormhole
*/
#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;
struct Point
{
	int64_t x, y;
};

int main()
{
	ifstream fin("wormhole.in");
	ofstream fout("wormhole.out");
	int n;
	fin >> n;
	vector<Point> points(n);
	for (size_t i = 0; i < n; i++)
		fin >> points[i].x >> points[i].y;



	return 0;
}

