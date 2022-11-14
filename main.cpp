#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string greet = "hey";

    transform(greet.begin(), greet.end(), greet.begin(), ::toupper);
    cout << greet << endl;

    string adieu = "BYE";

    transform(adieu.begin(), adieu.end(), adieu.begin(), ::tolower);
    cout << adieu << endl;

    return 0;   
}