#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		vector<pair<ll,ll> > intervals;
		for(int i=0;i<n;i++){
			ll start, end;
			cin >> start >> end;
			intervals.push_back(make_pair(start,end));
		}
		sort(intervals.begin(), intervals.end());
		while(m--){
			ll curr;
			cin >> curr;
			int index = lower_bound(intervals.begin(),intervals.end(),make_pair(curr,0)) 
							 - intervals.begin();
			// when curr_time matches with zeroth position
			if(index==0){
				ll ans = intervals[0].first - curr;
				cout << ans << endl;
			}
			else{
				ll ans = -1;
				if(intervals[index-1].second > curr){
					ans = 0;
				}
				else if(index < intervals.size()){
					ans = intervals[index].first - curr;
				}
				cout << ans << endl;
			}
			
		}
		
	}
	return 0;

}