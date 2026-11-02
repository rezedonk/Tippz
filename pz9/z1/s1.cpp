#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream fin("input.txt"); ofstream fout("output.txt");
    string s; getline(fin,s);
    for(char c:s)
        if(string("useragreement").find(tolower(c))==string::npos)
            fout<<c;
    fin.close(); fout.close();
    return 0;
}
