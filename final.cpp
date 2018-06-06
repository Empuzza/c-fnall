#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int a, b;
  cout << "Ćwiczenie tabliczki mnożenia" << endl;
  //wylosowanie liczb
  srand(time(NULL));
  a=(rand()%11);
  b=(rand()%11);
  //podaję działanie
  cout << "Oblicz: ";
  cout << a;
  cout << "*";
  cout << b;
  cout << "=" << endl;
  //pytam o wynik
  cout << "Podaj wynik: ";
  int wynik;
  cin >> wynik;
  //sprawdzam poprawność
  if(wynik==a*b)
      {
      cout << "Bardzo dobrze!" << endl;
	
  }else{
      cout << "Niestety, to nie jest prawidłowy wynik" << endl;
      cout << "Prawidłowy wynik to: ";
      cout << a*b;
  }
  
  return 0;
}
