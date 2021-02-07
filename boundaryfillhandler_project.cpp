#include"boundaryfill_algo_project.cpp"
#include"boundaryfill_code_project.cpp"
#include"boundaryfill_project.cpp"
void fun_call_algo() ;
void fun_handle_bfill()
{
    int chosebfill , conbfill = 0;
    while(!conbfill)
    {
        system("clear") ;
        cout << "\033[36m What do you want in boundary fill algorithm\033[0m\n" << endl ;
        cout << "\033[32m 1. Algorithm\033[0m\n" << endl ;
        cout << "\033[32m 2. Code\033[0m\n" << endl ;
        cout << "\033[32m 3. Demonstration\033[0m\n" << endl ;
        cout << "\033[32m 4. Go back\033[0m\n " << endl ;
        cout << "\033[36m Enter the number shown in front of the one you want = \033[0m\n" << endl;
        cin >> chosebfill ;
        cout << "\033[36m Enter 1 to confirm and 0 to again choose = \033[0m\n" << endl ;
        cin >> conbfill ;
    }
    if(chosebfill == 1)
    {
        bfill_algo() ;
    }
    else if(chosebfill == 2)
    {
       bfill_code() ;
    }
    else if(chosebfill == 3)
    {
        bfill_demo() ;
    }
    else if(chosebfill == 4)
    {
        fun_call_algo() ;
    }
}