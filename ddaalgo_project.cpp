void fun_handle_dda();
void fun_call_ddaalgo()
{
       char choseddaalgo ;
       char cdda ;
       system("clear") ;
       cout<<"\033[1;33m DDA stands for \033[0m";
       cout<<"\033[1;4;95m Digital Differential Analyzer." << endl;
       cout<<" \033[1;33m It is an incremental method of scan conversion of line.\033[0m" << endl;
       cout<<"\033[1;33m In this method calculation is performed at each step but by using results of previous steps.\033[0m\n"<<endl<<endl<<endl;
       cin.get(cdda);       
       cin.get(cdda) ;
       cout<<"\033[95m Suppose at step i, the pixels is (xi,yi)\033[0m\n"<<endl;
       cout<<"\033[95mThe line of equation for step i\033[0m\n"<<endl;
       cout<<"\033[95m              yi=mxi+b\033[0m";
       cout<<"\033[33m......................equation 1\033[0m\n"<<endl;
       cout<<"\033[95mNext value will be\033[0m\n"<<endl;
       cout<<"\033[95m              yi+1=mxi+1+b\033[0m";
       cout<<"\033[33m.................equation 2\033[0m\n"<<endl;
       cout<<" \033[95m             m =DDA Algorithm\033[0m\n"<<endl;
       cout<<" \033[95m             yi+1-yi=∆y\033[0m";
       cout<<"\033[33m.......................equation 3\033[0m\n"<<endl;
        cout<<"\033[95m             yi+1-xi=∆x\033[0m";
        cout<<"\033[33m......................equation 4\033[0m\n"<<endl;
        cout<<" \033[95m            yi+1=yi+∆y\033[0m\n"<<endl;
        cout<<" \033[95m            ∆y=m∆x\033[0m\n"<<endl;
        cin.get(cdda) ;
        cout<<" \033[95m            yi+1=yi+m∆x\033[0m\n"<<endl;
        cout<<" \033[95m            ∆x=∆y/m\033[0m\n"<<endl;
        cout<<" \033[95m            xi+1=xi+∆x\033[0m\n"<<endl;
       cout<<"  \033[95m            xi+1=xi+∆y/m\033[0m\n"<<endl;
        cin.get(cdda) ;
       cout<<"\033[33mCase1: When |M|<1 then (assume that x12)\033[0m\n"<<endl;
       cout<<" \033[95m             x= x1,y=y1 set ∆x=1\033[0m\n"<<endl;
       cout<<"  \033[95m            yi+1=y1+m,     x=x+1\033[0m\n"<<endl;
       cout<<"  \033[95m            Until x = x2\033[0m\n"<<endl;
        cin.get(cdda) ;
       cout<<"\033[33mCase2: When |M|<1 then (assume that y12)\033[0m\n"<<endl;
       cout<<"  \033[95m            x= x1,y=y1 set ∆y=1\033[0m\n"<<endl;
       cout<<"  \033[95m            xi+1=DDA Algorithm,     y=y+1\033[0m\n"<<endl;
       cout<<"  \033[95m            Until y → y2\033[0m\n"<<endl;

       cout << endl << endl << endl << "press any key to go back " << endl ;
       cin.get(choseddaalgo) ;
       cin.get(choseddaalgo) ;
       fun_handle_dda() ;
}






              


              
             


              


             