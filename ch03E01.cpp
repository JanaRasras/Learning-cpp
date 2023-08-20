// Example3: Movie Ticket Sale and Donation to Charity

#include <iostream>
# include <iomanip>
# include <string>

using namespace std;

int main() {
    string movieName;
    double adultTicketPrice;
    double childTicketPrice;
    int noOfAdultTicketsSold;
    int noOfChildTicketsSold;
    double percentDonation;
    double grossAmount;
    double amountDonated;
    double netSaleAmount;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout<<"Enter the movie name: ";
    getline(cin, movieName); // read a string containig blanks.
    cout <<endl;
    
    cout << "Enter the price of Adult Ticket: ";
    cin >> adultTicketPrice;
    cout << endl;
    
    cout << "Enter the price of child Ticket: ";
    cin >> childTicketPrice;
    cout << endl;
    
    cout << "Enter the number of Adult Tickets sold: ";
    cin >> noOfAdultTicketsSold;
    cout << endl;
    
    cout << "Enter the number of child Tickets sold: ";
    cin >> noOfChildTicketsSold;
    cout << endl;
    
    cout << "Enter the percentage of donation: ";
    cin >> percentDonation;
    cout << endl;
    
    grossAmount = adultTicketPrice * noOfAdultTicketsSold + 
                  childTicketPrice * noOfChildTicketsSold;
                  
    amountDonated = grossAmount * percentDonation / 100;
    
    netSaleAmount = grossAmount - amountDonated;
    
    cout << " -.-.-.-.-.-.-.-.--.-.- "
         << " -.-.-.-.-.-.-.-.--.-.- " <<endl;
    return 0;
}