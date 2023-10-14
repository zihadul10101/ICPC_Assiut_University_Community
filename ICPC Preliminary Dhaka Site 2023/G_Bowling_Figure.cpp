#include<bits/stdc++.h>

using namespace std;

void Bowling_figuar(string first){
    double overs;
    int run,wicket,ball;
    run=0;
    wicket=0;
    ball=0;

   for(int i=0;i<first.size();i++){
     
       
     //  cout<<first[i]<<endl;
       if(first[i]== 'W'){
        wicket++;
        ball++;
       }else{
      run+=first[i]-'0';
      ball++;
       }
   }
   overs=ball/6+(ball%6)*0.1;
//    1.3 Overs 12 Runs 0 Wicket.
   if(first[0]=='W'){
 cout<<overs<<" "<<"overs"<<" "<<run<<" "<<"Run"<<" "<<wicket<<" "<<"Wickets"<<"."<<endl;
   }else{
     cout<<overs<<" "<<"overs"<<" "<<run<<" "<<"Runs"<<" "<<wicket<<" "<<"Wicket"<<"."<<endl;
   }
  
   



}
int main(){
    int size;
    cin>>size;
    while(size--){
        string ch;
        cin>>ch;
        Bowling_figuar(ch);
        cout<<endl;
    }
}

