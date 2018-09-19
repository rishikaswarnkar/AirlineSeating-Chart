#include <iostream>
#include <fstream>
#include <iomanip>
#include<ostream>
#include"AirlineClass.h"
using namespace std;

void AirlineClass::emptyArray()
{
	//Receives - Nothing
	//Task     - Sets the value of all the seat to -999 indicating empty seat
	//Returns   - Nothing
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 3; j++)
		{
			a[i][j] = -999;
			b[i][j] = -999;
			c[i][j] = -999;
			d[i][j] = -999;
			e[i][j] = -999;
			f[i][j] = -999;
			g[i][j] = -999;
			h[i][j] = -999;
		}
}
//****************************************************************************************************************************
void  AirlineClass::push1(int a)
{
	//Receives - The boarding number of people in Waiting list 
	//Task     - Pushes and stores the stack of boardnum in an array
	//Returns  - Nothing
	t1++;
	f1[t1] = a;
}
//****************************************************************************************************************************
void AirlineClass::push2(int b)
{
	//Receives - The boarding number of people in Waiting list 
	//Task     - Pushes and stores the stack of boardnum in an array
	//Returns  - Nothing
	t2++;
	f2[t2] = b;
}
//****************************************************************************************************************************
void AirlineClass::push3(int c)
{
	//Receives - The boarding number of people in Waiting list 
	//Task     - Pushes and stores the stack of boardnum in an array
	//Returns  - Nothing
	t3++;
	f3[t3] = c;
}
//****************************************************************************************************************************
void AirlineClass::push4(int d)
{
	//Receives - The boarding number of people in Waiting list 
	//Task     - Pushes and stores the stack of boardnum in an array
	//Returns  - Nothing
	t4++;
	f4[t4] = d;
}
//****************************************************************************************************************************
void AirlineClass::push5(int e)
{
	//Receives - The boarding number of people in Waiting list 
	//Task     - Pushes and stores the stack of boardnum in an array
	//Returns  - Nothing
	t5++;
	f5[t5] = e;
}
//****************************************************************************************************************************
void AirlineClass::push6(int f)
{
	//Receives - The boarding number of people in Waiting list 
	//Task     - Pushes and stores the stack of boardnum in an array
	//Returns  - Nothing
	t6++;
	f6[t6] = f;
}
//****************************************************************************************************************************
void AirlineClass::push7(int g)
{
	//Receives - The boarding number of people in Waiting list 
	//Task     - Pushes and stores the stack of boardnum in an array
	//Returns  - Nothing
	t7++;
	f7[t7] = g;
}
//****************************************************************************************************************************
void AirlineClass::push8(int h)
{
	//Receives - The boarding number of people in Waiting list 
	//Task     - Pushes and stores the stack of boardnum in an array
	//Returns  - Nothing
	t8++;
	f8[t8] = h;
}
//****************************************************************************************************************************
void AirlineClass::AssignSeat()
{
	//Receives - Nothing 
	//Task     - Assigns the seat to all the passengers according to the rules mentioned
	//Returns  - Nothing
	ifstream infile;
	infile.open("data1.txt");
	if (infile.fail())
	{
		cerr << "Error opening File" << endl;
		exit(1);
	}

	do
	{
	label:
		infile >> boardnum >> flightnum >> section >> row >> col;

		if (col == 'L')
		{
			k = 0;
		}

		if (col == 'M')
		{
			k = 1;
		}

		if (col == 'R')
		{
			k = 2;
		}

		if (flightnum == 1010)
		{
			if (section == 'F')
			{
				flag = 'N';
				if ((a[row - 1][k] == -999) && (flag == 'N'))
				{
					a[row - 1][k] = boardnum;
					flag = 'Y';
				}

				if (flag == 'N')
				{

					for (int j = 0; j < 3; j++)
					{
						if (a[row - 1][j] == -999)
						{
							a[row - 1][j] = boardnum;
							flag = 'Y';
							goto label;

						}
					}

				}

				if (flag == 'N')
				{
					for (int i = 0; i < row - 1; i++)
					{
						if (a[i][k] == -999)
						{
							a[i][k] = boardnum;
							flag = 'Y';
							goto label;

						}

					}
				}

				if (flag == 'N')
				{

					for (int i = 0; i < 3; i++)
						for (int j = 0; j < 3; j++)
						{
							if (a[i][j] == -999)
							{
								a[i][j] = boardnum;
								flag = 'Y';
								goto label;

							}
						}
				}
				if (flag == 'N') {
					push1(boardnum);

				}
			}

			if (section == 'C')
			{
				flag = 'N';

				if ((a[row - 1][k] == -999) && (flag == 'N'))
				{
					a[row - 1][k] = boardnum;
					flag = 'Y';

				}
				if (flag == 'N')
				{

					for (int j = 0; j < 3; j++)
					{
						if (a[row - 1][j] == -999)
						{
							a[row - 1][j] = boardnum;
							flag = 'Y';
							goto label;

						}
					}

				}

				if (flag == 'N')
				{
					for (int i = 3; i < row - 1; i++)
					{
						if (a[i][k] == -999)
						{
							a[i][k] = boardnum;
							flag = 'Y';
							goto label;

						}

					}
				}


				if (flag == 'N')
				{

					for (int i = 3; i <= 9; i++)
						for (int j = 0; j < 3; j++)
						{
							if (a[i][j] == -999)
							{
								a[i][j] = boardnum;
								flag = 'Y';
								goto label;

							}
						}
				}
				if (flag == 'N') {
					push1(boardnum);
					goto label;
				}
			}

		}
		if (flightnum == 1020)
		{

			if (section == 'F')
			{

				flag = 'N';

				if ((b[row - 1][k] == -999) && (flag == 'N'))
				{
					b[row - 1][k] = boardnum;
					flag = 'Y';
					goto label;

				}
				else
				{
					for (int i = 0; i < 3; i++)
						for (int j = 0; j < 3; j++)
						{
							if (b[i][j] == -999)
							{
								b[i][j] = boardnum;
								flag = 'Y';
								goto label;
							}
						}
					if (flag == 'N') {
						push2(boardnum);
						goto label;
					}
				}
			}
			if (section == 'C')
			{
				flag = 'N';


				if ((b[row - 1][k] == -999) && (flag == 'N'))
				{
					b[row - 1][k] = boardnum;
					flag = 'Y';


				}
				else
				{

					for (int i = 3; i <= 9; i++)
						for (int j = 0; j < 3; j++)
						{
							if (b[i][j] == -999)
							{
								b[i][j] = boardnum;
								flag = 'Y';
								//goto label;
								goto label;
							}
						}
					if (flag == 'N') {
						push2(boardnum);

					}
				}
			}
		}
		if (flightnum == 1030)
		{

			if (section == 'F')
			{
				flag = 'N';
				if ((c[row - 1][k] == -999) && (flag == 'N'))
				{
					c[row - 1][k] = boardnum;
					flag = 'Y';


				}
				else
				{

					for (int i = 0; i < 3; i++)
						for (int j = 0; j < 3; j++)
						{
							if (c[i][j] == -999)
							{
								c[i][j] = boardnum;
								flag = 'Y';
								goto label;
							}
						}
				}
				if (flag == 'N') {
					push3(boardnum);

				}

			}

			if (section == 'C')
			{
				flag = 'N';

				if ((c[row - 1][k] == -999) && (flag == 'N'))
				{
					c[row - 1][k] = boardnum;
					flag = 'Y';

				}
				else
				{

					for (int i = 3; i <= 9; i++)
						for (int j = 0; j < 3; j++)
						{
							if (c[i][j] == -999)
							{
								c[i][j] = boardnum;
								flag = 'Y';
								//	goto label;
								goto label;
							}
						}
				}
				if (flag == 'N') {
					push3(boardnum);

				}
			}
		}
		if (flightnum == 1015)
		{
			if (section == 'F')
			{
				flag = 'N';



				if ((d[row - 1][k] == -999) && (flag == 'N'))
				{
					d[row - 1][k] = boardnum;
					flag = 'Y';


				}
				else
				{

					for (int i = row - 1; i < 3; i++)
						for (int j = k; j < 3; j++)
						{
							if (d[i][j] == -999)
							{
								d[i][j] = boardnum;
								flag = 'Y';
								goto label;
							}
						}
				}
				if (flag == 'N') {
					push4(boardnum);

				}

			}

			if (section == 'C')
			{

				flag = 'N';


				if ((d[row - 1][k] == -999) && (flag == 'N'))
				{
					d[row - 1][k] = boardnum;
					flag = 'Y';


				}
				else
				{

					for (int i = 3; i <= 9; i++)
						for (int j = 0; j < 3; j++)
						{
							if (d[i][j] == -999)
							{
								d[i][j] = boardnum;
								flag = 'Y';
								goto label;
							}
						}
					if (flag == 'N') {
						push4(boardnum);

					}
				}
			}
		}
		if (flightnum == 1025)
		{
			if (section == 'F')
			{
				flag = 'N';

				if ((e[row - 1][k] == -999) && (flag == 'N'))
				{
					e[row - 1][k] = boardnum;
					flag = 'Y';

				}
				else
				{
					for (int i = 0; i < 3; i++)
						for (int j = 0; j < 3; j++)
						{
							if (e[i][j] == -999)
							{
								a[i][j] = boardnum;
								flag = 'Y';
								goto label;
							}
						}
				}
				if (flag == 'N')
				{
					push5(boardnum);

				}

			}


			if (section == 'C')
			{
				flag = 'N';

				if ((e[row - 1][k] == -999) && (flag == 'N'))
				{
					e[row - 1][k] = boardnum;
					flag = 'Y';

				}
				else
				{
					for (int i = 3; i <= 9; i++)
						for (int j = 0; j < 3; j++)
						{
							if (e[i][j] == -999)
							{
								e[i][j] = boardnum;
								flag = 'Y';
								goto label;
							}
						}
				}
				if (flag == 'N') {
					push5(boardnum);

				}
			}
		}
		if (flightnum == 1035)
		{
			if (section == 'F')
			{
				flag = 'N';

				if ((f[row - 1][k] == -999) && (flag == 'N'))
				{
					f[row - 1][k] = boardnum;
					flag = 'Y';


				}
				else
				{

					for (int i = 0; i < 3; i++)
						for (int j = 0; j < 3; j++)
						{
							if (f[i][j] == -999)
							{
								f[i][j] = boardnum;
								flag = 'Y';
								goto label;
							}
						}
				}
				if (flag == 'N')
					push6(boardnum);

			}


			if (section == 'C')
			{
				flag = 'N';
				if ((f[row - 1][k] == -999) && (flag == 'N'))
				{
					f[row - 1][k] = boardnum;
					flag = 'Y';

				}
				else
				{

					for (int i = 3; i <= 9; i++)
						for (int j = 0; j < 3; j++)
						{
							if (f[i][j] == -999)
							{
								f[i][j] = boardnum;
								flag = 'Y';
								goto label;
							}
						}
				}
				if (flag == 'N') {
					push6(boardnum);
				}

			}
		}
		if (flightnum == 1040)
		{
			if (section == 'F')
			{
				flag = 'N';

				if ((g[row - 1][k] == -999) && (flag == 'N'))
				{
					g[row - 1][k] = boardnum;
					flag = 'Y';

				}
				else
				{

					for (int i = 0; i < 3; i++)
						for (int j = 0; j < 3; j++)
						{
							if (g[i][j] == -999)
							{
								g[i][j] = boardnum;
								flag = 'Y';
								goto label;
							}
						}
				}
				if (flag == 'N')
					push7(boardnum);

			}


			if (section == 'C')
			{
				flag = 'N';
				if ((g[row - 1][k] == -999) && (flag == 'N'))
				{
					g[row - 1][k] = boardnum;
					flag = 'Y';

				}
				else
				{

					for (int i = 3; i <= 9; i++)
						for (int j = 0; j < 3; j++)
						{
							if (g[i][j] == -999)
							{
								g[i][j] = boardnum;
								flag = 'Y';
								goto label;
							}
						}
					if (flag == 'N') {
						push7(boardnum);
					}
				}
			}
		}
		if (flightnum == 1045)
		{
			if (section == 'F')
			{
				flag = 'N';

				if ((h[row - 1][k] == -999) && (flag == 'N'))
				{
					h[row - 1][k] = boardnum;
					flag = 'Y';

				}
				else
				{

					for (int i = 0; i < 3; i++)
						for (int j = 0; j < 3; j++)
						{
							if (h[i][j] == -999)
							{
								h[i][j] = boardnum;
								flag = 'Y';
								goto label;
							}
						}
				}
				if (flag == 'N')
					push8(boardnum);

			}


			if (section == 'C')
			{
				flag = 'N';
				if ((h[row - 1][k] == -999) && (flag == 'N'))
				{
					h[row - 1][k] = boardnum;
					flag = 'Y';

				}
				else
				{

					for (int i = 3; i <= 9; i++)
						for (int j = 0; j < 3; j++)
						{
							if (h[i][j] == -999)
							{
								h[i][j] = boardnum;
								flag = 'Y';
								goto label;
							}
						}
					if (flag == 'N') {
						push8(boardnum);
					}
				}
			}
		}
	} while (boardnum != -999);
	infile.close();
}
//****************************  FUNCTION HEADER  *****************************************************
void AirlineClass::header(ofstream& fout1)
{
	//Receives - the outfile file
	//Task     - Prints the output preamble
	//Returns   - Nothing
	fout1 << "                                 " << "Rishika Swarnkar";
	fout1 << "                                 " << "CSC 36000";
	fout1 << "";
	return;

}
//***********************************************************************************************************
void AirlineClass::Footer(ofstream& fout)
{
	//Receives - the outfile file
	//Task     - Prints the output preamble
	//Returns   - Nothing
	fout << "                                 " << "------------------------------" << endl;
	fout << "                                 " << "CSC 36000" << endl;
	fout << "  " << endl;
	return;
}
//***********************************************************************************************************
void AirlineClass::displayFlight1010(ofstream& fout)
{

	//Receive -Output file
	//Task -The fuction displays the seating chart of Flight 1010
	// Fuction returns no value
	//AirlineClass::header(fout);
	AirlineClass::header(fout);
	fout << setw(30) << "Southern Comfort Airline" << endl;
	fout << setw(5) << "Flight 1010" << endl;
	fout << setw(50) << "FROM: Jackson, Mississippi" << endl;
	fout << setw(50) << "TO: Memphis, Tenessee" << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fout << a[i][j] << "    ";
		}
		fout << endl;
	}
	fout << "WAITING LIST " << endl;
	if (t1 == -1)
	{
		fout << '\t' << "THERE IS NO WAITING LIST" << endl;
	}
	else
	{
		for (int i = 0; i < t1; i++)
		{
			fout << f1[i] << "    ";
		}
	}
	fout << "END OF SEATING CHART" << endl;
	AirlineClass::Footer(fout);
}
//***********************************************************************************************************
void AirlineClass::displayFlight1020(ofstream& fout)
{

	//Receive -Output file
	//Task -The fuction displays the seating chart of Flight 1010
	// Fuction returns no value
	//AirlineClass::header(fout);
	fout << setw(30) << "Southern Comfort Airline" << endl;
	fout << setw(5) << "Flight 1020" << endl;
	fout << setw(50) << "FROM: Jackson, Mississippi" << endl;
	fout << setw(50) << "TO: Little Rock , Arkansas" << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fout << b[i][j] << "    ";
		}
		fout << endl;
	}
	fout << "WAITING LIST " << endl;
	if (t2 == -1)
	{
		fout << '\t' << "THERE IS NO WAITING LIST" << endl;
	}
	else
	{
		for (int i = 0; i < t1; i++)
		{
			fout << f2[i] << "    ";
		}
	}
	fout << "END OF SEATING CHART" << endl;
}
//************************************************************************************************************
void AirlineClass::displayFlight1030(ofstream& fout)
{

	//Receive -Output file
	//Task -The fuction displays the seating chart of Flight 1010
	// Fuction returns no value
	//AirlineClass::header(fout);
	fout << setw(30) << "Southern Comfort Airline" << endl;
	fout << setw(5) << "Flight 1030" << endl;
	fout << setw(50) << "FROM: Jackson, Mississippi" << endl;
	fout << setw(50) << "TO: Sherveport,Louisiana" << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fout << c[i][j] << "    ";
		}
		fout << endl;
	}
	fout << "WAITING LIST " << endl;
	if (t3 == -1)
	{
		fout << '\t' << "THERE IS NO WAITING LIST" << endl;
	}
	else
	{
		for (int i = 0; i < t1; i++)
		{
			fout << f3[i] << "    ";
		}
	}
	fout << "END OF SEATING CHART" << endl;
}
void AirlineClass::displayFlight1015(ofstream& fout)
{

	//Receive -Output file
	//Task -The fuction displays the seating chart of Flight 1010
	// Fuction returns no value
	//AirlineClass::header(fout);
	fout << setw(30) << "Southern Comfort Airline" << endl;
	fout << setw(5) << "Flight 1015" << endl;
	fout << setw(50) << "FROM:Memphis, Tenessee " << endl;
	fout << setw(50) << "TO:Jackson, Mississippi " << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fout << d[i][j] << "    ";
		}
		fout << endl;
	}
	fout << "WAITING LIST " << endl;
	if (t4 == -1)
	{
		fout << '\t' << "THERE IS NO WAITING LIST" << endl;
	}
	else
	{
		for (int i = 0; i < t1; i++)
		{
			fout << f4[i] << "    ";
		}
	}
	fout << "END OF SEATING CHART" << endl;
}
void AirlineClass::displayFlight1025(ofstream& fout)
{

	//Receive -Output file
	//Task -The fuction displays the seating chart of Flight 1010
	// Fuction returns no value
	//AirlineClass::header(fout);
	fout << setw(30) << "Southern Comfort Airline" << endl;
	fout << setw(5) << "Flight 1015" << endl;
	fout << setw(50) << "FROM:Little Rock, Arkansas " << endl;
	fout << setw(50) << "TO: Jackson, Mississippi " << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fout << e[i][j] << "    ";
		}
		fout << endl;
	}
	fout << "WAITING LIST " << endl;
	if (t5 == -1)
	{
		fout << '\t' << "THERE IS NO WAITING LIST" << endl;
	}
	else
	{
		for (int i = 0; i < t1; i++)
		{
			fout << f5[i] << "    ";
		}
	}
	fout << "END OF SEATING CHART" << endl;
}
void AirlineClass::displayFlight1040(ofstream& fout)
{
	//Receive -Output file
	//Task -The fuction displays the seating chart of Flight 1010
	// Fuction returns no value
	//AirlineClass::header(fout);
	fout << setw(30) << "Southern Comfort Airline" << endl;
	fout << setw(5) << "Flight 1030" << endl;
	fout << setw(50) << "FROM:Shreveport, Louisiana" << endl;
	fout << setw(50) << "TO:Jackson, Mississippi " << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fout << g[i][j] << "    ";
		}
		fout << endl;
	}
	fout << "WAITING LIST " << endl;
	if (t6 == -1)
	{
		fout << '\t' << "THERE IS NO WAITING LIST" << endl;
	}
	else
	{
		for (int i = 0; i < t1; i++)
		{
			fout << f6[i] << "    ";
		}
	}
	fout << "END OF SEATING CHART" << endl;
}
//*******************************************************************************************************
void AirlineClass::displayFlight1045(ofstream& fout)
{

	//Receive -Output file
	//Task -The fuction displays the seating chart of Flight 1010
	// Fuction returns no value
	//AirlineClass::header(fout);
	fout << setw(30) << "Southern Comfort Airline" << endl;
	fout << setw(5) << "Flight 1040" << endl;
	fout << setw(50) << "FROM:Jackson, Mississippi" << endl;
	fout << setw(50) << "TO:Orlando, Florida " << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fout << h[i][j] << "    ";
		}
		fout << endl;
	}
	fout << "WAITING LIST " << endl;
	if (t7 == -1)
	{
		fout << '\t' << "THERE IS NO WAITING LIST" << endl;
	}
	else
	{
		for (int i = 0; i < t1; i++)
		{
			fout << f7[i] << "    ";
		}
	}
	fout << "END OF SEATING CHART" << endl;
}
//*******************************************************************************************************
void AirlineClass::displayFlight1035(ofstream& fout)
{

	//Receive -Output file
	//Task -The fuction displays the seating chart of Flight 1010
	// Fuction returns no value
	//AirlineClass::header(fout);
	fout << setw(30) << "Southern Comfort Airline" << endl;
	fout << setw(5) << "Flight 1045" << endl;
	fout << setw(50) << "FROM:Orlando, Florida" << endl;
	fout << setw(50) << "TO:Jackson, Mississippi " << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fout << h[i][j] << "    ";
		}
		fout << endl;
	}
	fout << "WAITING LIST " << endl;
	if (t8 == -1)
	{
		fout << '\t' << "THERE IS NO WAITING LIST" << endl;
	}
	else
	{
		for (int i = 0; i < t1; i++)
		{
			fout << f8[i] << "    ";
		}
	}
	fout << "END OF SEATING CHART" << endl;
}
//*******************************************************************************************