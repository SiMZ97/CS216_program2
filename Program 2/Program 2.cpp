/*
Siavash Mehrabani
Chapter 1-3 assignment Program2
2/17/2024
*/

#include <iostream>
#include <string>
using namespace std;


int main() {
    const double ADULT_TICKET_PRICE = 6.00;
    const double CHILD_TICKET_PRICE = 3.00;
    const double THEATER_PERCENTAGE = 0.20;

    string movieName;
    int adultTicketsSold, childTicketsSold;

    cout << "Enter the name of the movie: ";
    getline(cin, movieName);

    cout << "Enter the number of adult tickets sold: ";
    cin >> adultTicketsSold;

    cout << "Enter the number of child tickets sold: ";
    cin >> childTicketsSold;

    double grossBoxOfficeProfit = (adultTicketsSold * ADULT_TICKET_PRICE) + (childTicketsSold * CHILD_TICKET_PRICE);

    double distributorPayment = grossBoxOfficeProfit * (1 - THEATER_PERCENTAGE);

    double netBoxOfficeProfit = grossBoxOfficeProfit * THEATER_PERCENTAGE;

    cout << "Movie name: \"" << movieName << "\"" << endl;
    cout << "Adult tickets sold: " << adultTicketsSold << endl;
    cout << "Child tickets sold: " << childTicketsSold << endl;
    cout << "Gross box office profit: $" << grossBoxOfficeProfit << endl;
    cout << "Amount paid to distributor: -$" << distributorPayment << endl;
    cout << "Net box office profit: $" << netBoxOfficeProfit << endl;

    return 0;
}
