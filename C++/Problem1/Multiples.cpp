#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
	vector<long> v; // Dynamic array in Cpp!!! Nice stuff!!! Make life easy!!!
	long total = 0;
	freopen("/Users/edilsonsuame/Documents/Perl_Cpp_Ruby/C++/multiples_3_5.txt", "w", stdout); //Change the standart output to a txt file!
	long limit=1000;

	for (long i = 1; i < limit; i++)
	{
		if( (i % 3 == 0) || (i % 5 == 0) ){
			total += i;
			v.push_back(i);	} // Add elements to array v!
	}
	printf ("The sum of all multiples of 3 or 5 below %ld is: %ld\n",limit,total);
  
  // Print all content of array v
	for (long x : v)
        cout << x << endl;
    cout<<"\n";
}
