#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int n;
    long l;
    char ch;
    float f;
    double d;
    
    cin>>n>>l>>ch>>f>>d;
    cout<<n<<endl;
    cout<<l<<endl;
    cout<<ch<<endl;
    cout << fixed << f << setprecision(3) << endl;
    cout << fixed << d << setprecision(3) << endl;
    
    return 0;
}