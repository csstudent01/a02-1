#include <iostream>
#include <iomanip>
using namespace std;

int main() {

int seasonType;
int fall;
int winter;
int spring;
int numRooms;
int dayOfStay;
float salesTax;
double taxes;
double reservationCost;
double costNoDiscount;
double discountAmount;
double costWithDiscount;
double totalCost;

cout << "Welcome to Resort 161. Answer some questions and i can calculate the reservation cost for your booking." << endl << endl;

cout << "Pick an option from below" << endl;
cout << "SEASON: [1]Fall [2]Winter [3]Spring [4]Summer:" << endl;
cin  >> seasonType;
cout << "NUMBER OF ROOMS:" << endl;
cin  >> numRooms;
cout << "DAYS OF STAY:" << endl;
cin  >> dayOfStay;
cout >> "TAX RATE:" << endl;
cin  >> salesTax;

//season
if(seasonType == 1) {
  reservationCost = 42.42 * numRooms;
}
else if (seasonType == 2) {
  reservationCost = 50 * numRooms;
else if (seasonType == 3)
  reservationCost = 75 * numRooms;
else(){
  reservationCost = 100* numRooms;
}


//check for discount, with 6+ ROOMS

if(numRooms >=6){
  discountAmount= reservationCost * (.10);
  costWithDiscount = reservationCost- discountAmount;
}
else{
  costNoDiscount = reservationCost;
}
//salesTax
taxes = (costWithDiscount * salesTax) / 100;

//total cost
totalCost = costWithDiscount + taxes;

//output
cout << "Season:";
cin >> seasonType;
cout << endl;

cout << "Price per night:"
cin >> ///$$ per night

cout << "Number of rooms:" << numRooms << endl;
cout << "Days of Stay:" << dayOfStay << endl;
cout << "Price:" << costNoDiscount+ taxes << endl;
cout << "Discount:" << discountAmount << endl;
cout << "Sub-total:" << costWithDiscount << endl;
cout << "Tax:" << taxes << endl;
cout << "Cost:" << 










return 0;

}