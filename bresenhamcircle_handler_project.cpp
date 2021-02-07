#include"bresenhamcircle_algo_project.cpp"
#include"bresenhamcircle_code_project.cpp"
#include"bresenhemcircle_project.cpp"
void fun_call_algo() ;
void fun_handle_brcir()
{
    int chosebrcir , conbrcir = 0;
    while(!conbrcir)
    {
        system("clear") ;
        cout << "\033[1;4;34m What do you want in Bresenham circle algorithm \033[0m\n" << endl ;
        cout << "\033[36m 1. Algorithm\033[0m\n" << endl ;
        cout << "\033[36m 2. Code\033[0m\n" << endl ;
        cout << "\033[36m 3. Demonstration\033[0m\n" << endl ;
        cout << "\033[36m 4. Go back \033[0m\n" << endl ;
        cout << "\033[1;4;34m Enter the number shown in front of the one you want = \033[0m\n" << endl;
        cin >> chosebrcir ;
        cout << "\033[1;4;34m Enter 1 to confirm and 0 to again choose = \033[0m\n" << endl ;
        cin >> conbrcir ;
    }
    if(chosebrcir == 1)
    {
        call_bresenham_algo() ;
    }
    else if(chosebrcir == 2)
    {
        call_brcir_code() ;
    }
    else if(chosebrcir == 3)
    {
        call_brcir_demonstrate() ;
    }
    else if(chosebrcir == 4)
    {
        fun_call_algo() ;
    }
}