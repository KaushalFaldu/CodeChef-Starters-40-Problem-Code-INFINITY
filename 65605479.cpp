#include <iostream>
#define  kp int
using namespace std;


int main()
{
	int a;
	cin>>a;
	while(a--)
	{
	    int n;
	    cin >> n;
        if(n == 1)cout << "0\n";
        else if(n <= 3)cout << "1\n";
        else {
            int ans = 2*(n/5);
            if(n%5 > 1)ans++;
            cout << ans << "\n";
            
        }
	}
	return 0;
}