#include<iostream>
#include<vector>
#include<bits/stdc++.h>
//We have imported the vector header file 

using namespace std;

//I have defined a function to print the elements of the vector 

void printvector(vector<int> v)
{
	for(int i=0 ; i<v.size() ; i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<"\n";
}

int main()
{
	//The 1st method involves using the push_back() modifier to push individual elements into the vector
	//Note how the vector is defined and initialized
	vector<int> vec;
	
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	//Now lets call the printvector() to print the elements
    printvector(vec);
	
	//In the 2nd method we initialize a vector by specifying the width (in this case n = 4) and the element(10  int this case)
	//so it will create a vector with 4 elements and all of them will have the value 10
	int n=4;
	vector<int> vec1(n, 10);
	
	printvector(vec1);
	
	//Note that if we dont pass 2 arguements then the vector is initialised with the passed arguement as the size and value as 0
	vector<int> vec2(3);
	
	printvector(vec2);
	
	//In the 3rd method we use array like initialization
	//This is known as initializer list and is supported by c++11 and above (not by c++98) 
	vector<int> vec3{1, 2, 3};
	printvector(vec3);
	
	//In the 4th method we initialize a vector from another vector using the begin() and end()
	vector<int> vect1{10, 20, 30};
	vector<int> vect2(vect1.begin(), vect1.end());
	
	printvector(vect2); 

	return 0;
}
