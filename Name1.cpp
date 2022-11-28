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
        else return 1;
        
    }
    return -1;
}


int main()
{
int t,high,n,pos,count=0;
string p1,p2,pc;
string cc,c;
cin>>t;
while(t--){
        pc="";
    cc="";
    count = 0;
    // bool sta = true;
    cin>>p1>>p2;
    pc =p1+p2;
    cin>>n;
    while(n--){
        cin>>c;
        cc+=c;

    }
    
    for(int i=0; i<cc.size();i++)
    {
        high  = pc.size();
        sort(pc.begin(),pc.end());
        pos= BinarySearch(high,pc,cc[i]);
        if (pos==-1){
            cout<<"NO\n";
            // sta = false;
            break;
        }  
        else{
            count++;
        }
    }
    if(count == cc.size()){
        cout<<"YES\n";
    }

}
 return 0;
}
