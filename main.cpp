#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<pair<int, int>> tiros(1000000);

int main() {
 int T;
 cin >> T;
 
 while (T--) {
     long long n;
     cin >> n;
     
     int x, y;
     
     for (long long i = 0; i < n; i++) {
        cin >> x >> y;
        tiros[i] = make_pair(x, y);        
     }
     long long score = 0;
     for (long long i = 0; i < n; i++) {
        int s = (sqrt((tiros[i].first*tiros[i].first) + (tiros[i].second*tiros[i].second))/20 - 11)*-1;
//         cout << s << endl;
        if (s > 10 ) {
            s = 10;
        }
        else if (s < 0) {
            s = 0;            
        }
        score += s;
     }
     cout << score << "\n"; 
     
 }
}
