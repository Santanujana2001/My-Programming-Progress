#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	// your code goes here
	int x, n, sum = 0;
	cout << "loop" << endl;
	cin >> x;
	int count = 0;
	while (x--)
	{
		int rem, n, d, a, ans,rmfk,diff;
		cout << "enter n and d" << endl;
		cin >> n >> d;
		a = n;
		while (a>0)
		{
			count++;
			 rem = a % 10;
			 a = a / 10;
			//  rmfk=rem;
				if (rem == d)
				{
					rem + 1;
					a=a*pow(10,count)+rem*pow(10,count-1);
					count=0;
					diff=a-n;
				}
				// else
				// {
				// }
				// cout<<"count= "<<count<<endl;
				// cout<<"a= "<<a<<endl;
				// if (count>0 && rmfk==d)
				// {
				// 	sum=rem*pow(10,count);
				// 	if (rmfk==0)
				// 	{
				// 		sum=sum+rem;
				// 	}
					
				// 	// cout<<" in if this time rem and sum "<<rem<<" "<<sum<<endl;
				// }
				// else
				// {
				//  ans = rem * pow(10, count);
				//  sum = sum + ans;
				// //  cout<<"in else this time rem and sum "<<rem<<" "<<sum<<endl;
				// }
				//  ans = rem * pow(10, count);
				//  sum = sum + ans;
			
		}
		// cout<<a-n<<endl;
		// cout << "new nnumber is " << sum << endl;
		// count=0;
		// sum = 0;
		// diff=a-n;
		cout<<diff<<endl;
	}
	return 0;
}
