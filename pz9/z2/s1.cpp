#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream f1("input1.txt"), f2("input2.txt");
    ofstream fout("output.txt");
    string x,y; getline(f1,x); getline(f2,y);
    fout<<(x.find(y)!=string::npos?"yes":"no");
    f1.close(); f2.close(); fout.close();
    return 0;
}
