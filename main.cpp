#include <iostream>
#include <string>
using namespace std;

int main()
{
    string alfabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string done = "";
    int c = 0;

    while (getline(cin, done))
    {
	    for (int j = 0; j < done.length(); j++)
	    {
		   c = 0;
		   for (int i = 0; i < alfabet.length(); i++)
		    {
			    if (done[j] == ' ')
			    {
			    	cout << ' ';
				break;
		   	    }
			    else if (done[j] != alfabet[i])
			    {
				    c++;
			    }
			    else
			    {
				    if (c + 3 > alfabet.length()-1)
				    {
					    cout << alfabet[(c+3)-alfabet.length()];
				    }
				    else
				    {
					    cout << alfabet[c + 3];
				    }
			    }
		    }
	    }
	    cout << endl;
    }
}

//https://pl.spoj.com/problems/JSZYCER/
