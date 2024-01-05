#include <bits/stdc++.h>


#define ll long long
using namespace std;
#define Nirala0 ios_base::sync_with_stdio(false);
#define Nirala00 cin.tie(NULL);


const char nl='\n';
const int N = 2e6 + 1;
const int inf = 1e9;
const ll INF = 1e18;
bool cnn[N];
int arr[N];


int main()
{
    int t=1;
    while (t--){

        int temp;
        int n,q;
        cin>>n>>q;
        ll ans=0;
        vector<int>mpp;

        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            cnn[i]= 0;
            ans+=arr[i];
        }

        temp=0;
        while(q--)
        {
            int ss,q,x;
            cin>>ss;
            if(ss== 1){
                cin>>q>>x;
                if(cnn[q]){

                    ans-= arr[q];
                    ans+= x;
                    arr[q] = x;
                }
            else{
                cnn[q]= 1;
                if(temp== 0)
                    ans-=arr[q];
                else
                    ans-=temp;
                    ans+=x;
                    arr[q] = x;
                    mpp.push_back(q);
                }
            }
            else{
                cin>>x;
                for (int i=0;i<mpp.size();i++){
                    cnn[mpp[i]] = 0;
                }
                mpp.clear();
                temp=x;
                ans= (ll)x * n;
            }
            cout<<ans<<nl;
        }
    }
}
