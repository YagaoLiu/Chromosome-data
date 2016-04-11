#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ( int argc, char ** argv )
{
	srand ( time (NULL) );
	string x; 
	ifstream input ( argv[1] );
	int m = atoi ( argv[2] );
	
	input >> x;

	int n = x.size();

	int k;
	if ( n == m )
		k = 0;
	else
		k = rand() % ( n - m );

	for ( int i = k; i < m+k; i++ )
	{
		switch ( x[i] )
		{
			case 'R':
				x[i] = 'A';
				break;
			case 'Y':
				x[i] = 'C';
				break;
			case 'S':
				x[i] = 'G';
				break;
			case 'W':
				x[i] = 'T';
				break;
			case 'K':
				x[i] = 'G';
				break;
			case 'M':
				x[i] = 'A';
				break;
			case 'B':
				x[i] = 'G';
				break;
			case 'D':
				x[i] = 'A';
				break;	
			case 'H':
				x[i] = 'T';
				break;	
			case 'V':
				x[i] = 'C';
				break;
			case 'N':
				x[i] = 'A';
				break;
		}
	}
	string pattern;
	pattern.resize( m );
	for ( int i = k, j = 0; j < m; i++, j++ )
	{
		pattern[j] = x[i];
	}
	ofstream output ( argv[3] );
	output << ">pattern\n";
	output << pattern;
	return 0;
}
			
			
			


