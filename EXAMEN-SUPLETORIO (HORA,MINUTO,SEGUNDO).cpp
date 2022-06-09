#include <iostream>
using namespace std;
	// 01:05:23   01:05:59     01:59:59   23:59:59
	// 01:05:24   01:06:00     02:00:00   00:00:00
	int main() {
		int h, m, s;
		char c;
		cin >> h >> c >> m >> c >> s;
		s = s + 1;
		if ( s >= 60){
			s = 0;
			m = m + 1;
			if(m >= 60){
				m = 0;
				h = h + 1;
			}
			
		}
		cout<<":" <<h<< ":" <<m<< ":" <<s<< endl;
	
}