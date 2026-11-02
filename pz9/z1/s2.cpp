#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream fin("input.txt"); ofstream fout("output.txt");
    string s; getline(fin,s);
    bool bad[26]={};
    for(char c:string("useragreement")) bad[c-'a']=1;
    for(char c:s){
        char l=tolower(c);
        if(!(l>='a'&&l<='z'&&bad[l-'a'])) fout<<c;
    }
    fin.close(); fout.close();
    return 0;
}
