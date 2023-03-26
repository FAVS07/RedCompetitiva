#include <bits/stdc++.h>
using namespace std;

#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
unordered_map <long long int,int> piramide;

void Piramide(){
    for (int fila = 1; fila <= 1000; fila++)
	{
		int C = 1; 
		for (int i = 1; i <= fila; i++)
		{
		    if(piramide[C] <= 0 && C < 1000000000){
			   piramide[C]= fila;
		    }
			C = C * (fila - i) / i;
		}
	}
}

int main()
{__
   Piramide();
	int n;
	cin >> n;
	while(n--){
	    int q;
	    cin >>q;
	    if(piramide[q] <= 0){
	        cout << q+1 << endl;
    	 }else{
    	    cout << piramide[q]<< endl;
    	  } 
	}
	return 0;
}