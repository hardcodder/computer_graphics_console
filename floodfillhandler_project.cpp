#include"floodfill_algo_project.cpp"
#include"floodfill_code_project.cpp"
#include"floodfill_project.cpp"
void fun_call_algo() ;
void fun_handle_ffill()
{
    int choseffill , conffill = 0;
    while(!conffill)
    {
        system("clear") ;
        cout << "\033[36m What do you want in flood fill algorithm\033[0m\n" << endl ;
        cout << "\033[32m 1. Algorithm\033[0m\n" << endl ;
        cout << "\033[32m 2. Code\033[0m\n" << endl ;
        cout << "\033[32m 3. Demonstration\033[0m\n" << endl ;
        cout << "\033[32m 4. Go back " << endl ;
        cout << "\033[36m Enter the number shown in front of the one you want = \033[0m\n" << endl;
        cin >> choseffill ;
        cout << "\033[36m Enter 1 to confirm and 0 to again choose = \033[0m\n" << endl ;
        cin >> conffill ;
    }
    if(choseffill == 1)
    {
        ffill_algo() ;
    }
    else if(choseffill == 2)
    {
        ffill_code() ;
    }
    else if(choseffill == 3)
    {
        floodfill_demo() ;
    }
    else if(choseffill == 4)
    {
        fun_call_algo() ;
    }
}