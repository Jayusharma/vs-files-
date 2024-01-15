#include<iostream>
#include<string>
using namespace std;
void print(int c[],int n){
    cout<<"c is-> ";
    for (int i = 0; i <n; i++)
    {
        cout<<c[i]<<" ";
    }
cout<<endl;    
}
bool checkEqual(int a[], int b[]){
for(int i=0; i<26; i++){
if(a[i] != b[i])
return 0;
}
return 1;
}
int main(){
    string s1="eidbaooo";
    string s2="ab";
   int count1[26] = {0};

for(int i=0; i<s1.length(); i++){
int index = s1[i] - 'a';

count1[index]++;
}
print(count1,26);
int j = 0;
int windowSize = s1.length();
int count2[26] = {0};

//running for first window
while(j <windowSize && j <s2.length()){
int index = s2[j] - 'a';
count2[index]++;
j++;
}   
print(count2,26);

if (checkEqual(count1, count2) )
cout<<"yes";
}