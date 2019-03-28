#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#define FOR(i,n,m) for(int i=n;i<m;i++)
#define REP(i,n) FOR(i,0,n)
#define pb(x) push_back(x)
#define MAX 100
#define fst first
#define snd second
#define sz(x) int(x.size())
#define all(v) v.begin(),v.end()
#define mp(x,y) make_pair(x,y)
using namespace std;

int main(int argc, char *argv[]) {
	int queries;
	map <string,int> countrylist;
	string input;
	cin >> queries;
	REP(i,queries){
		cin >> input;
		countrylist[input]++;
		cin.ignore(256,'\n');
	}
	for(auto i:countrylist){
		cout << i.first << ' ' << i.second << endl;
	}
    return 0;
}