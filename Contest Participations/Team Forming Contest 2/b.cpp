#include<bits/stdc++.h>
#define pii pair<int,int>
#define mkp make_pair
#define fs first
#define sc second
#define pb push_back
#define ppb pop_back()
#define pf printf
#define pf1(a) printf("%d\n",a)
#define hi() printf("hi!\n")
#define sf scanf
#define sf1(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d",&a,&b)
#define sf3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define sf1ll(a) scanf("%lld",&a)
#define sf2ll(a,b) scanf("%lld %lld",&a,&b)
#define sf3ll(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define pcase(x) printf("Case %d: ",x)
#define MX 1000000007
#define inf 1000000007
#define pi acos(-1.0)
#define mem(arr,x) memset((arr), (x), sizeof((arr)));
#define FOR(i,x) for(int i=0;i<(x); i++)
#define FOR1(i, x) for(int i = 1; i<=x ; i++)

using namespace std;
typedef long long int lint;
typedef double dbl;
#define mx 100007
int arr[mx], pre[mx];

int main() {
	int n, t;
	sf2(n, t);

	FOR(i, n) sf1(arr[i]);
	for(int i=1; i<n; i++) {
		arr[i]+=arr[i-1];
		pre[i]=arr[i-1];
	}

	int res=0;
	for(int i=0; i<n; i++) {
		int total=pre[i]+t;
		int pos=upper_bound(arr, arr+n, total)-arr-i;
		res=max(res, pos);
	}

	pf1(res);
	return 0;
}