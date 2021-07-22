#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  
  int seasonType;
  int numRooms;
  int dayOfStay;
  float salesTax;
  double taxAmount;
  double reservationCost;
  double costNoDiscount;
  double discountAmount;
  double costWithDiscount;
  double totalCost;

//Welcome message
  cout << "Welcome to Resort 161. Answer some questions and I can calculate the reservation cost for your booking." << endl << endl;
//Ask for user input for season type, number of rooms, days of stay.
  cout << "Pick an option from below" << endl;
  cout << "SEASON: [1]Fall [2]Winter [3]Spring [4]Summer:";
  cin  >> seasonType;
  cout << "NUMBER OF ROOMS:";
  cin  >> numRooms;
  cout << "DAYS OF STAY:";
  cin  >> dayOfStay;
  cout << "TAX RATE:";
  cin  >> salesTax;

  if(seasonType == 1){
      reservationCost = 42.42 * numRooms;
      }
    else if(seasonType == 2){
      reservationCost = 50 * numRooms;
    }
    else if(seasonType == 3){
      reservationCost = 75 * numRooms;
    }
    else if(seasonType == 4){
      reservationCost = 100* numRooms;
    }
//Check for discount, with 6+ ROOMS
  if(numRooms >=6){
      discountAmount= reservationCost * 0.10;
      costWithDiscount = reservationCost- discountAmount;
      }
    else{
      costWithDiscount = reservationCost;
    }
//SalesTax
    taxAmount = costWithDiscount * (salesTax / 100);
//Total cost
    totalCost = costWithDiscount + taxAmount;

  cout << endl << endl;

//Output variables
  cout << "Season:" << setw(30)<< seasonType << endl;
  cout << "Price per night:";
  //cin >> ///$$ per night
  cout << "Number of rooms:" <<setw(7)<< numRooms << endl;
  cout << "Days of Stay:" <<setw(7)<< dayOfStay << endl;
  cout << "Price:" <<setw(7)<< costNoDiscount+ taxAmount << endl;
  cout << "Discount:"<<setw(7) << discountAmount << endl;
  cout << "Sub-total:"<<setw(7) << costWithDiscount << endl;
  cout << "Tax:" <<setw(7)<< taxAmount << endl;
  cout << "Cost:" <<setw(7)<< totalCost << endl;

  return 0;
  
  }