//Code Compile and Run by codechef IDE

#include <iostream>
using namespace std;

int main() 
{
	int size;
	cout << "Enter Box Size\n";
	cin >> size;

	for(int col=0;col<size;++col)
		{
			cout << "#";
		}
	if(size > 1) 
		{
			cout << "\n";
			for(int row=0;row<size-2;++row)
				{
					cout<< "#";
					for(int col=0;col<size-2;++col)
						{
							cout << " ";
						}
					cout<<"#\n";
				}
			for(int col=0;col<size;++col)
				{
					cout << "#";
		}		}
	return 0;
}

