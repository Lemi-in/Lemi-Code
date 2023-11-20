#include <iostream>
using namespace std;

int main () {

int hour;
int minute;
int second1, second2;

cout<<"Enter Hour"<<endl;
cin>>hour;
cout<<"Enter Minute"<<endl;
cin>>minute;
cout<<"Enter Seconds"<<endl;
cin>>second1;

second2 = hour*3600 + minute*60 + second1;

cout<<"The second is: "<<second2<<" seconds"<<endl;

return 0;
}