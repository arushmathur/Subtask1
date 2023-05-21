#include <bits/stdc++.h>
using namespace std;
typedef long ll;
#define MOD 1000000007
#define pb push_back
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void changeArr(ll input[], ll N)
{
     
    // Copy input array llo newArray
    ll newArray[N];
    copy(input, input + N, newArray);
 
    // Sort newArray[] in ascending order
    sort(newArray, newArray + N);
    ll i;
     
    // Map to store the rank of
    // the array element
    map<ll, ll> ranks;
 
    ll rank = 1;
 
    for(ll index = 0; index < N; index++)
    {
 
        ll element = newArray[index];
 
        // Update rank of element
        if (ranks[element] == 0)
        {
            ranks[element] = rank;
            rank++;
        }
    }
 
    // Assign ranks to elements
    for(ll index = 0; index < N; index++)
    {
        ll element = input[index];
        input[index] = ranks[input[index]];
    }
}


int main() {
  //ios::sync_with_stdio(false); cin.tie(0);
  ll t,n,k;
  cin >> t;
  while (t--) {
      cin>>n>>k;
      ll a[n],b[n];bool d[n];
    for (ll i=0;i<n;i++){cin>>a[i];d[i]=0;} 
    for (ll i=0;i<n;i++){cin>>b[i];} 
    changeArr(a,n);
    sort(b,b+n);
    for (ll i=0;i<n;i++){cout<<a[i];}
    /*for (ll i=0;i<n;i++){
        while(d[a[i]]==1){a[i]++;}
        d[a[i]]=1;
        cout<<b[a[i]]<<" ";
    }
    cout<<endl;*/
  }
  return 0;
}