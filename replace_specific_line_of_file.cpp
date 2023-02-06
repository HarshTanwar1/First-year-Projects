/* This project do a task to replace a specific line with the given text by user */


#include<bits/stdc++.h>
#include<string>
#include<fstream>
#include<vector>
using namespace std;

int main(){
    string file_name;
    string text;
    int line_number;
    cout<<"Enter the file name :: ";
    getline(cin,file_name);
    cout<<"Enter the text :: ";
    getline(cin,text);
    cout<<"Enter the line number to replace :: ";
    cin>>line_number;

    fstream in;
    in.open(file_name);
    if(in.fail()){
        cout<<"SORRY!!! file does not exist"<<endl;
        return 1;
    }

    vector <string> lines;
    string line;
    while(getline(in,line)){
        lines.push_back(line);
    }

    if(lines.size()<line_number){
        cout<<"file have total "<<lines.size()<<" lines\n"<<line_number<<" line is not present in it."<<endl;
        return 1;
    }

    in.close();

    ofstream out;
    out.open(file_name);
    if(out.fail()){
        cout<<"SORRY!!! file does not exist"<<endl;
        return 1;
    }
    --line_number;

    for(int i = 0;i<lines.size();i++){
        if(i != line_number){
            out<<lines[i]<<endl;
        }
        else{
            out<<text<<endl;
        }
    }

    out.close();

    return 0;
}