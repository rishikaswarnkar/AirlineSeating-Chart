#ifndef AirlineClass_h
#define AirlineCLass_h
#include <iostream>
#include <iomanip>
#include<fstream>
#include<ostream>
using namespace std;
class AirlineClass
{
private:
	const int i = 2;
	int k;
	int a[10][3];
	int b[10][3];
	int c[10][3];
	int d[10][3];
	int e[10][3];
	int f[10][3];
	int g[10][3];
	int h[10][3];
	int boardnum;
	int flightnum;
	char section;
	int row;
	char col;
	int f1[50];
	int f2[50];
	int f3[50];
	int f4[50];
	int f5[50];
	int f6[50];
	int f7[50];
	int f8[50];

	int t1 = -1;
	int t2 = -1;
	int t3 = -1;
	int t4 = -1;
	int t5 = -1;
	int t6 = -1;
	int t7 = -1;
	int t8 = -1;


	char flag;

public:
	void AssignSeat();
	void emptyArray();
	void Footer(ofstream & fout);
	void header(ofstream & fout);
	void displayFlight1010(ofstream& fout);
	void displayFlight1020(ofstream& fout);
	void displayFlight1030(ofstream& fout);
	void displayFlight1040(ofstream& fout);
	void displayFlight1015(ofstream& fout);
	void displayFlight1025(ofstream& fout);
	void displayFlight1035(ofstream& fout);
	void displayFlight1045(ofstream& fout);



	void push1(int a);
	void push2(int b);
	void push3(int c);
	void push4(int d);
	void push5(int e);
	void push6(int f);
	void push7(int g);
	void push8(int h);
};
#endif AirlineClass_h;
