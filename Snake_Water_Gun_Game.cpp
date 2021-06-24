#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

void results(char comp,char yturn){
    if(comp==yturn){
        cout<<"It's a Tie\n";
    }
    else if(comp=='s'){
        if(yturn=='w'){
            cout<<"You loose\n";
        }
        if(yturn=='g'){
            cout<<"You win\n";
        }
    }

    else if(comp=='w'){
        if(yturn=='g'){
            cout<<"You loose\n";
        }
        if(yturn=='s'){
            cout<<"You win\n";
        }
    }
    else if(comp=='g'){
        if(yturn=='s'){
            cout<<"You loose\n";
        }
        if(yturn=='w'){
            cout<<"You win\n";
        }
    }

}

int main(){
    cout<<"Welocme to Snake,Water and Gun Gamne \n";
    char comp;
    srand((unsigned) time(0));
    printf("Computer has rolled it's dice! Your Turn \n ");
    int result = 1 + (rand() % 3);
    switch (result)
    {
    case 1:
        comp='s';
        break;
    case 2:
        comp='w';
        break; 
    case 3:
        comp='g';
        break;   

    }
    cout<<"Your Turn, Choose Snake(s),Water(w) or Gun(g): \n";
    char yturn;
    cin>>yturn;
    cout<<"Computer choosed: "<<comp<<endl;
    results(comp,yturn);

    return 0;

}
