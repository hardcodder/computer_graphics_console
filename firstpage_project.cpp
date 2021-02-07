#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std ;
#include"algorithmfirstpage_project.cpp"
#include"theoryhandler_project.cpp"
int main()
{   first :
    system("clear") ;
    int chosefirst , confirst = 1 ;
    while(confirst == 1)
    {
    system("clear") ;
    cout << "\033[1;4;5;20;45m\t\t\tWELCOME TO THE TUTOR\033[0m\n" << endl ;
    cout << "\033[1;33mSo , What do you want to learn \033[0m\n" << endl ;
    cout << "\033[1;95m1. Theory \033[0m\n" << endl ;
    cout << "\033[1;95m2. Algorithms \033[0m\n" <<endl ;
        cout << "\033[1;33mEnter the number shown in front of the one you want = \033[0m\n";
        cin >> chosefirst ;
        if(chosefirst != 1 && chosefirst != 2)
        {
            cout << "\033[1;33mYou have entered wrong number \033[0m\n" << endl ;
        }
        else
        {
            confirst = 0 ;
        }
        system("clear") ;
    }
    if(chosefirst == 1)
    {
        fun_call_theory_handler() ;
        goto first ;
    }
    if(chosefirst == 2)
    {
        fun_call_algo() ;
        goto first ;
    }

}
