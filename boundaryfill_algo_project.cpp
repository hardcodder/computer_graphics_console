void fun_handle_bfill() ;
void bfill_algo()
{
	system("clear") ;
	char chosebfill ;
	cout<<"\033[33m Boundary Fill is another seed fill algorithm in which edges of the polygon are drawn. Then starting with some seed any point inside the polygon we examine the neighboring pixels to check whether the boundary pixel is reached.\033[0m "<<endl;
	cout<<"\033[33m If boundary pixels are not reached, pixels are highlighted and process is continued until boundary pixels are reached.\033[0m "<<endl;
	cout<<"\033[33m Following is the algorithm for filling a region in a recursive manner with color specified fill color (f_color) up to a boundary color specified boundary color (b_color)\033[0m "<<endl;
     cout<<"\033[1;4;35m                            \n\nAlgorithm\033[0m "<<endl;
	cout<<"\033[33m \n\n1. Create a function named as boundaryfill with 4 parameters (x,y,f_color,b_color).\033[0m "<<endl;
	cout<<"\033[35m \nvoid boundaryfill(int x,int y,int f_color,int b_color)\033[0m "<<endl;
cout<<"\033[35m {\033[0m "<<endl;
	cout<<"\033[35m if(getpixel(x,y)!=b_color && getpixel(x,y)!=f_color)\033[0m "<<endl;
	cout<<"\033[35m {\033[0m "<<endl;
		cout<<"\033[35m putpixel(x,y,f_color);"<<endl;
		cout<<"\033[35m boundaryfill(x+1,y,f_color,b_color);\033[0m "<<endl;
		cout<<"\033[35m boundaryfill(x,y+1,f_color,b_color);\033[0m "<<endl;
		cout<<"\033[35m boundaryfill(x-1,y,f_color,b_color);\033[0m "<<endl;
		cout<<"\033[35m boundaryfill(x,y-1,f_color,b_color);\033[0m "<<endl;
	cout<<"\033[35m }\033[0m "<<endl;
cout<<"\033[35m }\033[0m "<<endl;
cout<<"\033[33m \n2. Call it recursively until the boundary pixels are reached.\033[0m "<<endl;

cout<<"\033[33m3. Stop.\033[0m "<<endl;

cout << endl << endl << endl << "press any key to go back \033[0m " << endl ;
       cin.get(chosebfill) ;
       cin.get(chosebfill) ;
       fun_handle_bfill() ;
}	
