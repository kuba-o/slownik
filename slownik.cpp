#include <vector>
#include <string>
#include <iostream>
#include <iterator>
#include <fstream>

using namespace std;


struct slowo {
  string pl;
  string en;
  };

int main(){
  vector<slowo> slowo;

  vector<string> dict;
  string pl="0";
  string en;
  string word;
  string str;
  string strVec;

  ifstream read;
  read.open("dict.txt");
  while (getline(read, str)){
    strVec = str + "\n";
    dict.push_back(string(strVec));
    cout << str << endl;
  }
  read.close();

  while (1){
    cout<<"slowo pl:"<<endl;
      cin>>pl;
    if (pl=="1")
      break;
    else{
      cout<<"slowo en:"<<endl;
      cin>>en;

      word = pl + ' ' + en + ' ';

      dict.push_back(string(word));
    }
  }

  ofstream write;
  write.open("dict.txt");
  for (int i=0; i<dict.size(); i++){
    write<<dict[i];
  } 
  return 0;
}