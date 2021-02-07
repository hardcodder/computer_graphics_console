#include"midpointcode_project.cpp"
#include"midpointalgo_project.cpp"
#include"midpointcircle_project.cpp"
void fun_call_algo() ;
void fun_handle_midpoint()
{
    int chosemidpoint , conmidpoint = 0;
    while(!conmidpoint)
    {
        system("clear") ;
        cout << "\033[1;4;34m What do you want in mid point algorithm\033[0m\n" << endl ;
        cout << "\033[36m 1. Algorithm\033[0m\n" << endl ;
        cout << "\033[36m 2. Code\033[0m\n" << endl ;
        cout << "\033[36m 3. Demonstration\033[0m\n" << endl ;
        cout << "\033[36m 4. Go back \033[0m\n" << endl ;
        cout << "\033[1;4;34m Enter the number shown in front of the one you want = \033[0m\n" << endl;
        cin >> chosemidpoint ;
        cout << "\033[1;4;34m Enter 1 to confirm and 0 to again choose =\033[0m\n " << endl ;
        cin >> conmidpoint ;
    }
    if(chosemidpoint == 1)
    {
         midpoint_algo() ;
    }
    else if(chosemidpoint == 2)
    {
        midpoint_code() ;
    }
    else if(chosemidpoint == 3)
    {
        midpoint_demo() ;
    }
    else if(chosemidpoint == 4)
    {
        fun_call_algo() ;
    }
}