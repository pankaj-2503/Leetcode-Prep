    /* author--cronton*/

      #include<iostream>
      #include<math.h>
      #include<algorithm>
      #include<map>
      #include<vector>
      #include<set>
      #include<stack>
      #include<iomanip>
      #include<ctype.h>
      #include<cstring>
      #include<numeric>
      #include<string>
      #include<cstring>
      #include<queue>
      #include<limits.h>
      #include<unordered_map>




using namespace std;


     #define ll long long
     #define lld long double
     #define en "\n"
     #define sp " "
     #define all(x) x.begin(),x.end()
     #define f(i,from,to) for(ll i=from;i<to;i++)
     #define fe(i,from,to) for(ll i=from;i<=to;i++)
     #define fr(i,from,to) for(ll i=from;i>=to;i--)
     #define fre(i,from,to) for(ll i=from;i>to;i--)
     #define pb(x) push_back(x)
     #define mx(v) *max_element(v.begin(), v.end())
     #define mn(v) *min_element(v.begin(), v.end())
     #define vi vector<ll>
     #define vip vector<pair<ll,ll>>
     #define no cout << "NO" << endl
     #define yes cout << "YES" << endl
     #define lb lower_bound
     #define up upper_bound
     #define pi 3.141592653589793238462

class Solution {
public:
    int maximumLengthSubstring(string s) {
        ll mx=0;
        ll n=s.size();
        unordered_map<char,int>m;
        
        f(i,0,n){
            f(j,i,n){
                int f=0;
                m[s[j]]++;
                for(auto k:m){
                    if(k.second>2){f=1;break;}
                }
                if(f==0) mx=max(mx,j-i+1);
            }
            m.clear();
        }
        return mx;
    }
};