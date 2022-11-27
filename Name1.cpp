#include<iostream>
// #include<vector>
#include<string>
// #include<cmath>
#include<bits/stdc++.h>
using namespace std;


int BinarySearch(int high,string p,char ch){
    int low=0;
    // sort(p.begin(),p.end());
    while(low<=high){
        int mid = (low+high)/2;
        if(p[mid]<ch){
            low = mid+1;
        }
        else if(p[mid]>ch) high = mid-1;
        else return mid;
        
    }
    return -1;
}


int main()
{
int t,high,n,pos;
string p1,p2,pc;
string cc,c;
cin>>t;
while(t--){
    pc="";
    cc="";
    bool sta = true;
    cin>>p1>>p2;
    pc =p1+p2;
    cin>>n;
    while(n--){
        cin>>c;
        cc+=c;

    }
    sort(cc.begin(),cc.end());
    // we will use binary search for this project to avoid TLE
    for(int i=0; i<cc.size();i++)
    {
        high  = pc.size();
        sort(pc.begin(),pc.end());
        pos= BinarySearch(high,pc,cc[i]);
        if (pos==-1){
            cout<<"NO\n";
            sta = false;
            break;
        }   
        else
        {
            pc.erase(pc.begin()+pos);
            sta = true;
        } 
    }
    if(sta == true){
        cout<<"YES\n";
    }
    
}   
 return 0;
}
