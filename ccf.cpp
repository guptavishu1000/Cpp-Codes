//OM NAMAHA SHIVAYA

#include<bits/stdc++.h>
using namespace std;

#define ll                long long
#define ld                long double
#define vec               vector
#define vi                vector<ll>
#define si                set<ll>
#define pii               pair<ll,ll>
#define mii               map<ll,ll>
#define vip               vector<pair<ll,ll>> 
#define pii               pair<ll,ll>
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define rall(x)           (x).rbegin(),(x).rend()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (ll)((x).size())
#define gcd(a,b)          __gcd((ll)a,(ll)b)
#define lcm(a,b)          (ll)a*(ll)b/gcd(a,b)
#define sumof(x)           accumulate(all(x),0)
#define ff                first
#define ss                second
#define mp                make_pair
#define mt                make_tuple
#define rev(i,a,b)        for(ll i=a;i>b;i--)
#define rep(i,a,b)        for(ll i=a;i<b;i++)
#define trav(a,b)         for(auto a:b)
#define endl              "\n"
#define lb(v,x)           lower_bound(all(v),x)-v.begin()
#define ub(v,x)           upper_bound(all(v),x)-v.begin()
#define ceil(a,b)         ceil((double)a/(double)b)
#define floor(a,b)        floor((double)a/(double)b)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ps(x,y)           fixed<<setprecision(y)<<x
#define setbits(x)        __builtin_popcount(x)
#define zrobits(x)        __builtin_ctzll(x)
#define show(v)           rep(i,0,sz(v))cout<<v[i]<<" ";cout<<endl
#define showarr(v)        rep(i,0,*(&v + 1) - v)cout<<v[i]<<" ";cout<<endl
#define X                 real()
#define Y                 imag()

typedef complex<ll> C;
typedef set<int>::iterator sit;	
typedef vector<int>::iterator vit;
typedef map<int,int>::iterator mit;
typedef vec<long double> vd;
typedef vec<string> vs;
typedef pair<int, string> paris;

const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
const int N=5e5+5;
const int32_t maxn=N;

template<typename T1,typename T2>istream& operator>>(istream& in,pair<T1,T2> &a){in>>a.fr>>a.sc;return in;}
template<typename T1,typename T2>ostream& operator<<(ostream& out,pair<T1,T2> a){out<<a.fr<<" "<<a.sc;return out;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

ll fac(ll x);
ll inv_fac(ll x);
ll binexp(ll a,ll b);
ll ncr(ll n,ll r);
 
ll fac(ll x){
    ll fcto=1;
    for(ll i=2;i<=x;i++){
        fcto*=i;
        fcto%=INF;
    }
    return fcto;
}
 
ll inv_fac(ll x){
    return binexp(fac(x),INF-2);
}
 
ll binexp(ll a,ll b){
    if(a==0||a==1)  return a;
    if(b==0)    return 1;
    ll ret=binexp(a,b/2);
    if(b%2) return (((ret*ret)%INF)*a)%INF;
    else return (ret*ret)%INF;
}
 
ll ncr(ll n,ll r){
    return ((fac(n)*inv_fac(n-r)%INF)*inv_fac(r))%INF;
}
// string print24(string s1,string s2)
// {
//     // Get hours
//     // int h1 = (int)s1[1] - '0';
//     // int h2 = (int)s1[0] - '0';
//     // int hh = (h2 * 10 + h1 % 10);
 
//     // If time is in "AM"
//     cout<<s1<<s2;
//     // if (s2[0] == 'A')
//     // {
//     //     if (hh == 12)
//     //     {
//     //         s1[0]='0';s1[1]='0';
//     //         // for (int i=2; i <= 7; i++)
//     //         //     cout << str[i];
//     //     }
//     //     // else
//     //     // {
//     //     //     for (int i=0; i <= 7; i++)
//     //     //         cout << str[i];
//     //     // }
//     // }
 
//     // // If time is in "PM"
//     // else
//     // {
//     //     if (hh == 12)
//     //     {
//     //         s1[0]='1';s1[1]='2';
//     //         // for (int i=2; i <= 7; i++)
//     //         //     cout << str[i];
//     //     }
//     //     // else
//     //     // {   
//     //     // 	stringstream ss;
//     //     //     hh = hh + 12;
//     //     //     ss << hh;
//     //     //     string s0=ss.str();
//     //     //     //ss<<s0;
//     //     //     s1[0]=s0[0];
//     //     //     s1[1]=s0[1];

//     //     //     // for (int i=2; i <= 7; i++)
//     //     //     //     cout << str[i];
//     //     // }
//     // }
//     return s1;
// }




int main()
{
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	#ifdef SIEVE
		sieve();
	#endif
	#ifdef NCR
		init();
	#endif
	#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
    //	freopen("output.txt", "w", stdout);
    #endif
	
	 ll ttt=1;
    cin>>ttt;
    

    #ifndef ONLINE_JUDGE
	//	cout<<"\nTime Elapsed: " << 1000.0000*clock() / CLOCKS_PER_SEC << " ms\n";
	#endif
	return 0;
} 