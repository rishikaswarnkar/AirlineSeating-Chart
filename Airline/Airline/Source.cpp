//**************************** PROGRAM IDENTIFICATION  ***************************************
//*                                                                                             *
//* PROGRAM FILE NAME: Source.cpp        Assisgnment #:  1                        Grade:_______*
//*                                                                                             *
//* PROGRAM AUTHOR:                ___________________________________________                     *
//*                                        Rishika Swarnkar                                     *
//*                                                                                             *
//*COURSE: CSC 36000 11                                            DUE DATE: January 23,2018     *
//*                                                                                             *
//********************************************************************************************

//**************************** PROGRAM DESCRIPTION *******************************************
//*                                                                                             *
//*  PROCESS:This program is desgined to read a list of data consisting of Passenger's         *
//* assigned Boarding Number, the Requested Flight Number, the Requested Section, the         *
//* Requested Seat Row, and the Requested Seat Column. This program assigns seats to         *
//* passengers on a "first-come, first serve" basis and according to the rules mentioned.    *
//* The program then prints the seating chart along with the waiting list                     *
//*                                                                                             *
//* USER DEFINED                                                                             *
//* MODULES : AssignSeat - assigns the seats to the in every flight                             *
//*             display - displays the seating chart of the every flight                         *
//*            emptyarrayf1 - sets every seat to -999 indicates empty                            *
//*        
//***********************************************************************************************************
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ostream>
#include"AirlineClass.h"
using namespace std;
int main()
{

	AirlineClass flight1;
	flight1.emptyArray();
	flight1.AssignSeat();
	//AirlineClass f;
	//ofstream fout1;
	//fout1.open("Footn.txt");
	//	f.Footer(fout1);
	//fout1.close(); 

	ofstream fout;
	fout.open("flight1output.txt");
	//flight1.Footer(fout);
	flight1.displayFlight1010(fout);
	fout.close();
	fout.open("flight2output.txt");
	flight1.displayFlight1020(fout);
	fout.close();
	fout.open("flight3output.txt");
	flight1.displayFlight1030(fout);
	fout.close();
	fout.open("flight4output.txt");
	flight1.displayFlight1015(fout);
	fout.close();
	fout.open("flight5output.txt");
	flight1.displayFlight1025(fout);
	fout.close();
	fout.open("flight6output.txt");
	flight1.displayFlight1035(fout);
	fout.close();
	fout.open("flight7output.txt");
	flight1.displayFlight1040(fout);
	fout.close();
	fout.open("flight8output.txt");
	flight1.displayFlight1045(fout);
	fout.close();
	system("pause");
	return 0;
}