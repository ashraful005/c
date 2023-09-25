#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
    string b;
    char ch;
    cin>>a>>b;
    int x = a.size();
    int y = b.size();
    string c = a + b;
    ch = a[0];
    a[0] = b[0];
    b[0] = ch;
    cout<<x<<" "<<y<<endl<<c<<endl<<a<<" "<<b<<endl;
    return 0;
}
