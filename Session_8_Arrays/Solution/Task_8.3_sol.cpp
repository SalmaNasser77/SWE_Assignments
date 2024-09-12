// link to the problem: https://www.hackerearth.com/problem/algorithm/range-sum-4/


#include <iostream>
using namespace std;

const int  N  = 100000 + 7;  //defining the maximum size of an array

int arr[N];    // the array I'll store the integers in
long long prefix[N];   // the array I'll calculate the prefix in 

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);  // this line makes taking the input and outputing faster "makes cin and cout faster"
	int t;   // to store the number of test cases
	cin >> t; 
	while(t--) 
	{
		int n; // storing the number of the elements in this test case
		cin >> n;

		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];  // reading the elements from the user
		}
                // calculating the prefix sum of the array
		for(int i = 0; i < n; i++)
		{
			if(i == 0) // checkes if it's the first element or not
			{
				prefix[i] = arr[i];
			}
			else
			{
				prefix[i] = ((long long)arr[i] + prefix[i - 1]);  // calculating the prefix[i] by adding the arr[i] to the periously calculated sum
			}
		}


		int q; // for storing the number of queries
		cin >> q;
		while(q--)
		{
			int l, r; // for storing the query range the user is asking for
			cin >> l >> r;
			l--, r--; // since the range is between (1 and n) we must make it zero indexed

			long long ans = prefix[r]; // the answer is the sum of the array up till arr[l]
			if(l != 0) ans -= prefix[l - 1]; // but if the start range isn't the first element we need to subtract what is less that arr[l] 

			cout << ans << endl; // outputing the answer
		}


	}
}
