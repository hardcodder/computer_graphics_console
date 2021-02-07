
void midpoint_algo(){
    char midpointalgo ;
    char midalgo ;
    system("clear") ;
     cout<<"\033[34m We need to plot the perimeter points of a circle whose center co-ordinates\033[0m\n";
     cout<<"\033[34m and radius are given using the Mid-Point Circle Drawing Algorithm.\033[0m\n"<<endl;
     cout<<"\033[34m We use the above algorithm to calculate all the perimeter points of the circle in the first octant\033[0m\n";
     cout<<"\033[34m and then print them along with their mirror points in the other octants.\033[0m\n";
     cout<<"\033[34m  This will work only because a circle is symmetric about it’s centre.\033[0m\n"<<endl;
     cout<<"\033[32m Circle octants\033[0m\n"<<endl<<endl;
     cout<<"\033[34m The algorithm is very similar to the Mid-Point Line Generation Algorithm.\033[0m\n ";
     cout<<"\033[34m Here, only the boundary condition is different.\033[0m\n"<<endl<<endl;
     cout<<"\033[34m For any given pixel (x, y), the next pixel to be plotted is either (x, y+1) or (x-1, y+1).\033[0m\n";
     cout<<"\033[34m This can be decided by following the steps below.\033[0m\n"<<endl;
     cout<<"\033[34m Find the mid-point p of the two possible pixels i.e (x-0.5, y+1)\033[0m\n"<<endl;
     cin.get(midalgo) ;
     cin.get(midalgo) ;
     cout<<"\033[34m If p lies inside or on the circle perimeter, we plot the pixel (x, y+1), otherwise if it’s outside we plot the pixel (x-1, y+1)\033[0m\n"<<endl<<endl;
   cout<<"\033[32m Boundary Condition : Whether the mid-point lies inside or outside the circle can be decided by using the formula:-\033[0m\n"<<endl;
   cout<<"     \033[34m Given a circle centered at (0,0) and radius r and a point p(x,y)\033[0m\n"<<endl;
   cout<<"     \033[34m F(p) = x2 + y2 – r2\033[0m\n"<<endl;
   cout<<"     \033[34m if F(p)<0, the point is inside the circle\033[0m\n"<<endl<<endl;
   cout<<"     \033[34m F(p)=0, the point is on the perimeter\033[0m\n"<<endl<<endl;
   cout<<"     \033[34m F(p)>0, the point is outside the circle\033[0m\n"<<endl;
   cin.get(midalgo) ;
   cout<<"\033[32m example\033[0m\n"<<endl;
   cout<<"\033[32m In our program we denote F(p) with P. The value of P is calculated at the mid-point of the two contending pixels i.e. (x-0.5, y+1).\033[0m\n";
   cout<<"\033[32m Each pixel is described with a subscript k.\033[0m\n"<<endl;
   cout<<"  \033[34m    Pk = (Xk — 0.5)2 + (yk + 1)2 – r2\033[0m\n"<<endl<<endl;
   cout<<" \033[34m Now,\033[0m\n"<<endl;
   cout<<"  \033[34m    xk+1 = xk or xk-1 , yk+1= yk +1\033[0m\n"<<endl;
   cout<<"    \033[34m ∴ Pk+1 = (xk+1 – 0.5)2 + (yk+1 +1)2 – r2\033[0m\n"<<endl;
   cout<<"  \033[34m    = (xk+1 – 0.5)2 + [(yk +1) + 1]2 – r2\033[0m\n"<<endl;
   cout<<"  \033[34m    = (xk+1 – 0.5)2 + (yk +1)2 + 2(yk + 1) + 1 – r2\033[0m\n"<<endl;
   cout<<"  \033[34m    = (xk+1 – 0.5)2 + [ – (xk – 0.5)2 +(xk – 0.5)2 ] + (yk + 1)2 – r2 + (yk + 1) + 1\033[0m\n"<<endl;
   cin.get(midalgo) ;
   cout<<"  \033[34m    = Pk + (xk+1 – 0.5)2 – (xk – 0.5)2 + 2(yk + 1) + 1\033[0m\n"<<endl;
   cout<<"  \033[34m    = Pk + (x2k+1 – x2k)2 + (xk+1 – xk)2 + 2(yk + 1) + 1\033[0m\n"<<endl;
   cout<<"  \033[34m    = Pk + 2(yk +1) + 1, when Pk <=0 i.e the midpoint is inside the circle\033[0m\n"<<endl;
   cout<<"  \033[34m     (xk+1 = xk)\033[0m\n"<<endl;
   cout<<"  \033[34m     Pk + 2(yk +1) – 2(xk – 1) + 1, when Pk>0 I.e the mid point is outside the circle(xk+1 = xk-1)\033[0m\n"<<endl;
   cout<<"\033[32m The first point to be plotted is (r, 0) on the x-axis. The initial value of P is calculated as follows:-\033[0m\n"<<endl;
   cout<<" \033[34m     P1 = (r – 0.5)2 + (0+1)2 – r2\033[0m\n"<<endl;
   cout<<"  \033[34m    = 1.25 – r\033[0m\n"<<endl;
   cout<<"  \033[34m    = 1 -r (When rounded off)\033[0m\n"<<endl;

   cout << endl << endl << "\033[32m press any key to go back \033[0m\n" << endl ;
       cin.get(midpointalgo) ;
       cin.get(midpointalgo) ;
       fun_handle_midpoint() ;
}



    
   


   