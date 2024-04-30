//ac
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int n,cont=0;
    long long int k,a;
    cin>>n>>k;
    vector <long long int> array;
    for(int i=0;i<n;i++){
        cin>>a;
        array.push_back(a);
    }

    sort(array.begin(), array.end());

    for(int i=0;i<array.size();i++){
        if(array[i]*k > 1000000000 || array[i]*k>array.back()){
            break;
        }

        int low=i+1, high=array.size()-1, mid;
        while(low<=high){
            mid=(high+low)/2;
            if(array[mid]==array[i]*k){
                //cout<<82000*100000000<<endl;
                array.erase(array.begin() + mid);
                break;
            }
            else if(array[mid]<array[i]*k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }

    cout<<array.size()<<endl;

    return 0;
}