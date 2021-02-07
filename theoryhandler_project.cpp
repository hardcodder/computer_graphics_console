#include"Advantagesofcomputergraphics_project.cpp"
#include"RasterScangraphics_project.cpp"
#include"Vectorscantheory_project.cpp"
#include"computergraphicsdefinaton_project.cpp"
#include"impdefintions_project.cpp"
void fun_call_theory_handler()
{
    int chosetheory , contheory = 0;
    system("clear") ;
    while(!contheory)
    {
        cout << "\033[36m What do you want to learn in theory ?\n \033[0m\n" <<endl;
        cout << "\033[32m 1.What is computer graphics ?\n \033[0m\n" << endl ;
        cout << "\033[32m 2.Applications of computer graphics \n \033[0m\n" << endl ;
        cout << "\033[32m 3.Vector Scan theory \n\033[0m\n " << endl ;
        cout << "\033[32m 4.Raster Scan Display \n \033[0m\n" << endl ;
        cout << "\033[32m 5.Important Definitions \n \033[0m\n"<< endl ;
        cout << "\033[32m 0.Go Back \n \033[0m\n" << endl ;
        cout << "\033[36m Enter the number before the topic you want to study \n \033[0m\n" << endl ;
        cin >> chosetheory ;
        cout << " \033[36mEnter 1 to confirm and 0 to again enter = \n \033[0m\n" << endl ;
        cin >> contheory ;
    }
    if(chosetheory == 0)
    {

    }
    else if(chosetheory == 1)
    {
        whatiscg() ;
    }
    else if(chosetheory == 2)
    {
        graphicsadvantages() ;
    }
    else if(chosetheory == 3)
    {
        vectroescan() ;
    }
    else if(chosetheory == 4)
    {
        rasterscan() ;
    }
    else if(chosetheory == 5)
    {
        impdef() ;
    }

}