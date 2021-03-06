// square.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
std::ifstream fin("square.in");
std::ofstream fout("square.out");
int * sort(int x, int y) 
{
	static int output[2] = { y,x };
	if (x > y) {
		output[0] = x;
		output[1] = y;
	}
	
	//static int[2] p = copy1;
	std::cout << output[0] << " " << output[1] << std::endl;
	return copy1;
}

int solve(int x1, int y1, int x2, int y2, int X1, int Y1, int X2, int Y2) {
	std::cout << "Computing with " << std::endl;
	std::cout << x1 << " " << y1 << " " << x2 << " " << y2 << " " << std::endl <<X1 << " " << Y1 << " "<< X2 << " " << Y2 << std::endl;
	int MINX, MINY, MAXX, MAXY;
	int *a = sort(x1, x2);
	int *b = sort(X1, X2);
	int *c = sort(y1, y2);
	int *d = sort(Y1, Y2);
	int *e = sort(*a, *b);
	int *f = sort(*c, *d);
	int *g = sort(*(a+1), *(b+1));
	int *h = sort(*(c+1), *(d+1));
	std::cout << "data: " << *a << " " << *b << " " << *c << " " << *d << " " << *e << " " << *f << " " << *g << " " << *h << " " << std::endl;
	MAXX = *e;
	MAXY = *f;
	MINY = *(h+1);
	MINX = *(g+1);
	std::cout << MAXX << " " << MAXY << " " << MINX << " " << MINY;
	int x, y;
	x = MAXX - MINX;
	y = MAXY - MINY;
	if (x > y) {
		return x * x;
	}
	else {
		return y * y;
	}
}
int main()
{
	int a, b, c, d;
	int e, f, g, h;
	fin >> a; fin >> b; fin >> c; fin >> d; fin >> e; fin >> f; fin >> g; fin >> h;
	fout << solve(a,b,c,d,e,f,g,h);
	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
