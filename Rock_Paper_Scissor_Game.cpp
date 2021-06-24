#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

void results(char comp,char yturn){
    if(comp==yturn){
        cout<<"It's a Tie\n";
    }
    else if(comp=='r'){
        if(yturn=='p'){
            cout<<"You loose\n";
        }
        if(yturn=='s'){
            cout<<"You win\n";
        }
    }

    else if(comp=='p'){
        if(yturn=='r'){
            cout<<"You loose\n";
        }
        if(yturn=='s'){
            cout<<"You win\n";
        }
    }
    else if(comp=='s'){
        if(yturn=='p'){
            cout<<"You loose\n";
        }
        if(yturn=='r'){
            cout<<"You win\n";
        }
    }

}

int main(){
    cout<<"Welocme to Rock,Paper and Scissor Gamne \n";
    char comp;
    srand((unsigned) time(0));
    printf("Computer has rolled it's dice! Your Turn \n ");
    int result = 1 + (rand() % 3);
    switch (result)
    {
    case 1:
        comp='r';
        break;
    case 2:
        comp='p';
        break; 
    case 3:
        comp='s';
        break;   

    }
    cout<<"Your Turn, Choose Rock(r),Paper(p) or Scissor(s): \n";
    char yturn;
    cin>>yturn;
    cout<<"Computer choosed: "<<comp<<endl;
    results(comp,yturn);

    return 0;

}