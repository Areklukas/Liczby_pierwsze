#include <iostream>
bool pierwsza(int liczba)
{
	ifstream a;    
	a.open(""); 
	ofstream wynik;
	wynik.open("");  
	a>>liczba;
		for (int i=2; i<liczba/2; i++)
     	if (liczba %i == 0) 
     	{
           cout << "Z³o¿ona";
           return false;
    	}
    	cout << "Pierwsza";
	a.close();
	wynik.close()
  	return << true;
} 
int main()
{
   return 0;
}
