#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){

    string known;
    vector<string> encoded;
    vector<pair<int, char> > qtdknown(26);
    vector<pair<int, char> > qtdencoded(26);

    char letra='a';
    for(int i=0;i<26;i++){
        qtdknown[i].first=0;
        qtdknown[i].second=letra;
        qtdencoded[i].first=0;
        qtdencoded[i].second=letra;
        letra++;
    }

    while(getline(cin,known)){
        if(known.empty()){
            break;
        }

        for(int i=0;i<known.size();i++){
            if(known[i]>='a' && known[i]<='z'){
                qtdknown[known[i]-'a'].first--;
            }
            else if(known[i]>='A' && known[i]<='Z'){
                qtdknown[known[i]-'A'].first--;
            }
        }
    }
    while(getline(cin,known)){
        encoded.push_back(known);

        for(int i=0;i<known.size();i++){
            if(known[i]>='a' && known[i]<='z'){
                qtdencoded[known[i]-'a'].first--;
            }
            else if(known[i]>='A' && known[i]<='Z'){
                qtdencoded[known[i]-'A'].first--;
            }
        }
    }

    sort(qtdknown.begin(), qtdknown.end());
    sort(qtdencoded.begin(), qtdencoded.end());

    /*for(int i=0;i<26;i++){
        cout<<qtdknown[i].second<<" "<<qtdknown[i].first<<endl;
    }
    cout<<endl;
    for(int i=0;i<26;i++){
        cout<<qtdencoded[i].second<<" "<<qtdencoded[i].first<<endl;
    }
    */

    map<char, char> qual;
    for(int i=0;i<26;i++){
        qual[qtdencoded[i].second]=qtdknown[i].second;
    }

    for(int j=0;j<encoded.size();j++){
        for(int i=0;i<encoded[j].size();i++){
            if(encoded[j][i]>='a' && encoded[j][i]<='z'){
                printf("%c", qual[encoded[j][i]]);
                //cout<<qual[encoded[i]];
            }
            else if(encoded[j][i]>='A' && encoded[j][i]<='Z'){
                printf("%c", qual[encoded[j][i]+32]-32);
                //cout<<qual[encoded[i]+32]-32;
            }
            else{
                printf("%c", encoded[j][i]);
                //cout<<encoded[i];
            }
        }
        cout<<endl;
    }

    return 0;
}