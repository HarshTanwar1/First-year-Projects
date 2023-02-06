/*This is a project to get a specific line of any file */


#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    string file_name;
    int line_number;
    cout<<"Enter the file name :: ";
    cin>>file_name;
    cout<<"Enter the line number :: ";
    cin>>line_number;
    ifstream in;
    in.open(file_name);
    if(in.fail()){
        cout<<"Sorry!!! File is not exist"<<endl;
    }
    string line;
    int present_line = 0;
    while(!in.eof()){
        getline(in,line);
        ++present_line;
        if(present_line == line_number){
            break;
        }
    }
    if(present_line < line_number){
        cout<<"line not found!!!\nfile have only "<<present_line<<" total lines."<<endl;
    }
    else{
        cout<<line<<endl;
    }
    in.close();
    return 0;
}