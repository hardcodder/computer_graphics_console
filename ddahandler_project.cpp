#include"ddaalgo_project.cpp"
#include"dda_project.cpp"
#include"ddacode_project.cpp"
void fun_call_algo() ;
void fun_handle_dda()
{
    int chosedda , condda = 0;
    while(!condda)
    {
        system("clear") ;
        cout << "\033[1;4;34m What do you want in DDA\033[0m\n" << endl ;
        cout << "\033[36m 1. Algorithm\033[0m\n" << endl ;
        cout << "\033[36m 2. Code\033[0m\n" << endl ;
        cout << "\033[36m 3. Demonstration\033[0m\n" << endl ;
        cout << "\033[36m 4. Go back \033[0m\n" << endl ;
        cout << "\033[1;4;34m Enter the number shown in front of the one you want =\033[0m\n " << endl;
        cin >> chosedda ;
        cout << "\033[1;4;34m Enter 1 to confirm and 0 to again choose = \033[0m\n" << endl ;
        cin >> condda ;
    }
    if(chosedda == 1)
    {
        fun_call_ddaalgo() ;
    }
    else if(chosedda == 2)
    {
        call_dda_code() ;
    }
    else if(chosedda == 3)
    {
        call_dda_demonstrate() ;
    }
    else if(chosedda == 4)
    {
        fun_call_algo() ;
    }
}