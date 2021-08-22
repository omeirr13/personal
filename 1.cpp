#include <iostream>
using namespace std;

int main(){
    double gas, miles, MPG;
    cout<<"Number of gallons of gas car can hold?: \n";
    cin>>gas;
    cout<<"How many miles it can drive on full tank?: \n";
    cin>>miles;

    MPG = miles/static_cast<double>(gas);
    cout<<"The gas mileage is: "<<MPG<<" miles per gallon";

    return 0;
}