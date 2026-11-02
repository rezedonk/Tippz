#include <fstream>
#include <string>
using namespace std;
string bin(long long n){
    string r;
    while(n){ r=char('0'+n%2)+r; n/=2; } // перевод в двоичную
    return r;
}
int main(){
    ifstream fin("input.txt"); ofstream fout("output.txt");
    string s; getline(fin,s);
    string cur;
    for(char c:s){
        if(isdigit(c)) cur+=c;
        else{
            if(!cur.empty()){ fout<<bin(stoll(cur)); cur=""; }
            fout<<c;
        }
    }
    if(!cur.empty()) fout<<bin(stoll(cur));
    fin.close(); fout.close();
    return 0;
}
