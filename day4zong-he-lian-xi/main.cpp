/******************************************************************************
break continue
while switch綜合練習

*******************************************************************************/
#include <iostream>
#include <string>


using namespace std;
void continue_();
void break_();

void continue_(){
    for(int i = 1; i < 10; i++) {
        if(i == 5) {
            continue;
        }
        cout << "i = " << i << endl;
    }
}


void break_(){
    for(int i = 1; i < 10; i++) {
        if(i == 5) {
            break;
        }

        cout << "i = " << i << endl;
    }
}


int main()
{

    int choose;
    int  end=1;
    while(end)
    {
        cout<<"1.continue展示"<<endl;
        cout<<"2.break展示"<<endl;
        cin>>choose;
        
        switch(choose){
            case 1:
                continue_();
                break;
            case 2:
                break_();
                break;
            default:
                break;
        }
        cout<<"Do you want continue test?1 or 0"<<endl;
        cin>>end;
        if(end==0){cout<<"thanks for using!";}
    }
    
    return 0;
}
