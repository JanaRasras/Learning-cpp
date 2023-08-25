// Classifying Numbers

# include <iostream>
# include <iomanip>

using namespace std; 

const int N = 20; 

int main()
{
    int counter; 
    int number; 
    int zeros = 0;
    int odds = 0; 
    int evens = 0; 

    cout << " Please enter " << N << "Integers " << endl; 

    for (counter =1; counter <= N; counter ++) 
        {
            cin >> number; 
            switch (number %2)
                {
                    case 0 : 
                    evens ++;
                    if (number ==0)
                        zeros ++;
                    break;
                    case 1:
                    case -1: 
                        odds ++;
                }
        }

        cout << endl;

        cout << "There are " << evens <<"evens"
             << " that iclude " << zeros << "zeros." << endl;

        cout << "The number of odds is " << odds << endl; 

        return 0;
}