#include"bresenhamline_code_project.cpp"
#include"bresenhamlinealgo_project.cpp"
#include"bresenhem_project.cpp"
void fun_call_algo() ;
void fun_handle_brline()
{
    int chosebrline , conbrline = 0;
    while(!conbrline)
    {
        system("clear") ;
        cout << "\033[33m What do you want in Bresenham line algo \033[0m\n" << endl ;
        cout << "\033[35m 1. Algorithm\033[0m\n" << endl ;
        cout << "\033[35m 2. Code\033[0m\n" << endl ;
        cout << "\033[35m 3. Demonstration\033[0m\n" << endl ;
        cout << "\033[35m 4. Go back \033[0m\n" << endl ;
        cout << "\033[33m Enter the number shown in front of the one you want = \033[0m\n" << endl;
        cin >> chosebrline ;
        cout << "\033[33m Enter 1 to confirm and 0 to again choose = \033[0m\n" << endl ;
        cin >> conbrline ;
    }
    if(chosebrline == 1)
    {
       brline_algo() ;
    }
    else if(chosebrline == 2)
    {
        brline_code() ;
    }
    else if(chosebrline == 3)
    {
        brline_demo() ;
    }
    else if(chosebrline == 4)
    {
        fun_call_algo() ;
    }
}