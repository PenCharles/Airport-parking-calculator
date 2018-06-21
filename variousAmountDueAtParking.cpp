#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
	
	//Author : James Saylor
	//Description : This program calculates the airport parking bill based on  
	//				different arrangements
	
	//constants
	const int DAY = 24;
	const double DAY_RATE = 9.25;
	const double HOURLY_RATE = 0.40;
	const double AIRPORT_FEE = 2.30;
	const double TAX_RATE = 0.07;
	const string LOT_NAME = "ABC Parking";
	const char PARKING_TYPE = 'U'; 

int main ()
{
	
	string licensePlate;
	int hoursParked;
	double dailyCharge, hourlyCharge, subTotal, taxCharge, totalBill;
	
	//input statements
	cout << LOT_NAME << endl;
	cout << "Uncovered Parking Billing Program" << endl << endl;
	cout << "Enter license plate number: ";
	cin >> licensePlate;
	cout << "Enter number of hours parked: ";
	cin >> hoursParked;
	cout << endl;
	
	//calculations
	dailyCharge = (hoursParked / DAY) * DAY_RATE;
	hourlyCharge = (hoursParked % DAY) * HOURLY_RATE;
	subTotal = dailyCharge + hourlyCharge;
	taxCharge = subTotal * TAX_RATE;
	totalBill = subTotal + taxCharge + AIRPORT_FEE;
	
	//sample output
	cout << LOT_NAME << " Receipt" << endl << endl;
	cout << "License Plate:" << setw(20) << licensePlate << endl;
	cout << "Parking Type:" << setw(21) << PARKING_TYPE << endl;
	cout << "Hours Parked:" << setw(21) << hoursParked << endl << endl;
	cout << "Daily Charges" << setprecision(2) << fixed << setw(21) << dailyCharge << endl;
	cout << "Hourly Charges" << setw(20) << hourlyCharge << endl;
	cout << setw(34) << "--------" << endl;
	cout << "Parking Subtotal" << setw(18) << subTotal << endl;
	cout << "Taxes" << setw(29) << taxCharge << endl;
	cout << "Airport Access Fee" << setw(16) << AIRPORT_FEE << endl;
	cout << setw(34) << "--------" << endl;
	cout << "Total Parking Bill" << setw(16) << totalBill << endl;
 	cout << endl << endl;
 	return 0;
}

