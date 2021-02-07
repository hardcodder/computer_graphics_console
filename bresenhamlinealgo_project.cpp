void fun_handle_brline() ;
void brline_algo()
{
    system("clear") ;
	char brlinealgo ;
	char cbr ;
	cout<<"\033[34m \n\nThe Bresenham algorithm is another incremental scan conversion algorithm.\033[0m"<<endl;
	cout<<"\033[34m *The big advantage of this algorithm is that, it uses only integer calculations.\033[0m "<<endl;
	cout<<"\033[34m Moving across the x axis in unit intervals and at each step choose between two different y coordinates.\033[0m"<<endl;
	cout<<"\033[35m Step 1 − Input the two end-points of line, storing the left end-point in (x0,y0)\033[0m"<<endl<<endl;
	cout<<"\033[35m Step 2 − Plot the point (x0,y0)\033[0m"<<endl<<endl;
	cout<<"\033[35m Step 3 − Calculate the constants dx, dy, 2dy, and 2dy–2dx\033[0m"<<endl;
	cout<<"\033[35m and get the first value for the decision parameter as −\033[0m"<<endl;
	cout<<"\033[34m p0=2dy−dx\033[0m"<<endl<<endl;
	cout<<"\033[35m Step 4 − At each Xk along the line, starting at k = 0, perform the following test −\033[0m"<<endl<<endl;
	cin.get(cbr) ;
	cin.get(cbr) ;
	cout<<"\033[35m If pk<0, the next point to plot is (xk+1,yk)\033[0m"<<endl<<"\033[35m and\033[0m"<<endl;
	cout<<"\033[34m pk+1=pk+2dy\033[0m"<<endl;
	cout<<"\033[35m Otherwise,\033[0m"<<endl<<endl;
	cout<<"\033[35m (xk,yk+1)\033[0m"<<endl;
	cout<<"\033[34m pk+1=pk+2dy−2dx\033[0m"<<endl<<endl;
	cout<<"\033[35m Step 5 − Repeat step 4 dx–1 times\033[0m"<<endl;
	cout<<"\033[35m For m > 1, find out whether you need to increment x while incrementing y each time.\033[0m"<<endl<<endl;
    cout<<"\033[35m After solving, the equation for decision parameter Pk will be very similar, just the x and y in the equation gets interchanged.\033[0m"<<endl;
	cout << endl << endl << endl << "\033[32m press any key to go back \033[0m" << endl ;
	cin.get(brlinealgo) ;
    cin.get(brlinealgo) ;
	fun_handle_brline() ;
}






