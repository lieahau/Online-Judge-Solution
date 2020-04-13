#include <bits/stdc++.h>

using namespace std;
const int MAX = 100000;
string T; int lenT, tempSA[MAX], c[MAX];
int RA[MAX], tempRA[MAX]; // rank array
vector<int> SA; // suffix array
void radixSort(int k){
    int i, sum, maxi=max(300, lenT);
    memset(c,0,sizeof c);
    for(i = 0; i < lenT; i++)
        c[i+k < lenT ? RA[i+k] : 0]++;
    for(i = sum = 0; i < maxi; i++){
        int t = c[i]; c[i] = sum; sum += t; }
    for(i = 0; i < lenT; i++) tempSA[c[SA[i]+k < lenT ? RA[SA[i]+k] : 0]++] = SA[i];
    for(i = 0; i < lenT; i++) SA[i] = tempSA[i];
}
void buildSA(){
    int i, j, r;
    lenT = T.length();
    for(i = 0; i < lenT; i++){
        RA[i]=T[i]; SA.push_back(i); }
    for(j = 1; j < lenT; j <<= 1){
        radixSort(j);
        radixSort(0);
        tempRA[SA[0]] = r = 0;
        for(i = 1; i < lenT; i++) tempRA[SA[i]] = (RA[SA[i]] == RA[SA[i-1]] && RA[SA[i]+j] == RA[SA[i-1]+j]) ? r : ++r;
        for(i = 0; i < lenT; i++) RA[i] = tempRA[i];
        if(RA[SA[lenT-1]] == lenT-1) break;
    }
} //T+=”$”; cout SA[i], T.substr(SA[i])

int ranks[MAX], lcp[MAX];
void buildLCP(){
    for(int i = 0; i < lenT; i++)
        ranks[SA[i]] = i;
    for(int i = 0, h = 0; i < lenT; i++){
        if(ranks[i] < lenT-1){
            for(int j=SA[ranks[i]+1]; T.substr(i+h, 1) == T.substr(j+h, 1);h++);
            lcp[ranks[i]] = h;
            if(h > 0) h--;
        }
    }
}

int lenT1, lenT2;
vector<string> lcs;
void findLCS(){
    int owner[lenT+10], maks = INT_MIN, temp;
    for(int i = 0; i < lenT; i++){
        if(SA[i] < lenT1) owner[i] = 1;
        else owner[i] = 2;

        if(i && owner[i] != owner[i-1]){
            if(lcp[i-1] > maks){
                lcs.clear();
                maks = lcp[i-1];
                lcs.push_back(T.substr(SA[i], maks));
            }
        else if(lcp[i-1] == maks)
            lcs.push_back(T.substr(SA[i], maks));
        }
    }
    if(maks == 0) lcs.clear();
    return;
}

int main()
{
    string temp;
    while(getline(cin, temp))
    {
        if(temp == ""){
            printf("\n");
            continue;
        }
        temp += "$";
        lenT1 = temp.length();
        T = temp;

        string temp1;
        getline(cin, temp1);
        temp1 += "#";
        lenT2 = temp1.length();
        T += temp1;

        memset(RA, 0, sizeof(RA));
        memset(lcp, 0, sizeof(lcp));
        SA.clear();
        buildSA();
        buildLCP();
        findLCS();
        if(!lcs.empty())
        {
            for(int i = 0; i < lcs.size(); i++)
                cout << lcs[i] << endl;
        }
        else
            cout << "No common sequence." << endl;
        cout << endl;
    }

    return 0;
}
