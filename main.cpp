#include <iostream>

using namespace std;

int main()
{
    // declare vars
    int dataNumberCounter;
    double dataVariable[5];

    dataNumberCounter = 1;

    // loop

    while (dataNumberCounter < 6);
    {
    cout << " enter in data item #" << dataNumberCounter <<" ";
    cin >> dataVariable[dataNumberCounter];
    dataNumberCounter = dataNumberCounter + 1;

    }

    cout << "number of inputs were: " << dataNumberCounter;

    cout << "\nyour inputs were: " << dataVariable[1] << endl;
    cout << "your inputs were: " << dataVariable[2] << endl;
    cout << "your inputs were: " << dataVariable[3] << endl;
    cout << "your inputs were: " << dataVariable[4] << endl;
    cout << "your inputs were: " << dataVariable[5] << endl;

    if ( dataNumberCounter = 6 )
    {
        cout << "the if stmt worked";
    }

    return 0;
}
