#include<bits/stdc++.h>
#define pii pair<int,int>
#define mkp make_pair
#define fs first
#define sc second
#define pb push_back
#define ppb pop_back()
#define pf printf
#define pf1(a) printf("%d\n",a)
#define hi printf("hi!\n");
#define sf scanf
#define sf1(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d",&a,&b)
#define sf3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define sf1ll(a) scanf("%I64d",&a)
#define sf2ll(a,b) scanf("%I64d %I64d",&a,&b)
#define sf3ll(a,b,c) scanf("%I64d %I64d %I64d",&a,&b,&c)
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


int main()
{
    int t, tst = 1;
    string s;
    cin >> s;

    int cnt[256];
    mem(cnt, 0);
    FOR(i, s.size()) {
        char ch=s[i];
        cnt[ch]++;
    }

    string w="Bulbasaur";

    int res=0;

    while(1) {
        int wrong=0;
        FOR(i, w.size()) {
            char ch=w[i];
            if(!cnt[ch]) {
                wrong=1;
                break;
            }
            cnt[ch]--;
        }
        if(wrong) break;
        res++;
    }

    cout << res << endl;
    return 0;
}
