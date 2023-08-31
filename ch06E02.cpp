// Program 9
// Cabe Company

# include<iostream>
# include <iomanip>

using namespace std;

const double res_bill_fees = 4.5; 
const double res_basic_serv = 20.5;
const double res_cost_prem = 7.5; 

const double bus_bill = 15;
const double bus_basic = 75;
const double bus_basic_conn = 5; 
const double bus_cost_prem = 50;

double res();
double bus();

int main ()
{
    int accountNum;
    char customerType; 
    double amountDue;

    cout << fixed << showpoint;
    cout << setprecision(2);

    cout << "This Program computes a cable bill. " << endl;
    cout << "Enter account number" << endl;
    cout << "Enter customer type: R, r " << "(Residential), B, b (Business): "; 
    cin >> customerType; 
    cout << endl;
    switch (customerType) //Step 7
        {
        case 'r': 
        case 'R':
            amountDue = res(); 
            cout << "Account number = "
            << accountNum << endl; 
            cout << "Amount due = $"
            << amountDue << endl; 
            break;
        case 'b': 
        case 'B':
            amountDue = bus(); 
            cout << "Account number = "
            << accountNum << endl; 
            cout << "Amount due = $"
            << amountDue << endl; 
            break;
        default:
        cout << "Invalid customer type."
        << endl; 
        }
    return 0;
}

double res ()
{
   int noOfChannels; 
   double bAmount; 
   cout << "Enter the number of prem " << "channels used :" ;
   cin >> noOfChannels;
   cout << endl;
   bAmount = res_bill_fees + res_basic_serv + noOfChannels*res_cost_prem;
   return bAmount; 
}

double bus()

{
    int noOfBchannels; 
    int noOfPchannels; 
    double bAmount; 
    cout << "Enter the number of basic " << "channels used :" ;
    cin >> noOfBchannels;
    cout << endl;
    cout << "Enter the number of premium " << "channels used :" ;
    cin >> noOfPchannels;
    cout << endl;
    if (noOfBchannels <=10)
        bAmount = bus_bill + bus_basic + noOfPchannels*bus_cost_prem;
    else
        bAmount = bus_bill +bus_basic +(noOfBchannels - 10) * bus_basic_conn + noOfPchannels * bus_cost_prem;
    return bAmount;
}