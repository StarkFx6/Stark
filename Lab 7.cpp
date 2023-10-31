

#include <iostream>

using  namespace std;

int main()
{
    
	
	int y, a = 3;
        cout << "Знайденя множення";
	cout << "Enter y = ";
	cin >> y;
	float rez;
	int mno = 0;
	for (int n = 1; n <= 3; n++)
	{
		mno = mno * pow(n, 2);
                cout << mno << end;
	}
	rez = pow(y, 3)+ mno;  
	cout << "Z = " << rez << endl;
}


