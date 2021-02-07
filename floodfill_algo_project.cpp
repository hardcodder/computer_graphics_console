void fun_handle_ffill() ; 
void ffill_algo()
{
	char ffillalgo ;
	system("clear") ;
	cout<<"\033[33m Flood Fill is a seed fill algorithm similar to Boundary Fill algorithm but sometimes when it is required to fill in an area that is not defined within a single color boundary we use flood fill instead of boundary fill.\033[0m "<<endl;
	cout<<"\033[33m \nFor this purpose we can create a function or we can use a predefined function in the graphics.h header file which takes 3 arguments:-\033[0m "<<endl;
	cout<<"\033[35m \nfloodfill(x,y,color)\033[0m "<<endl;
	cout<<"\033[33m \nIn Flood Fill algorithm we start with some seed and examine the neighboring pixels, however pixels are checked for a specified interior color instead of boundary color and is replaced by a new color.\033[0m ";
	cout<<"\033[33m  It can be done using 4 connected or 8 connected region method.\033[0m "<<endl;
	cout<<"\033[1;4;35m                            \n\nAlgorithm\033[0m "<<endl;
	cout<<"\033[33m \n\n1. Create a function called as floodFill (x,y,oldcolor,newcolor)\033[0m "<<endl;
	cout<<"\033[35m \nvoid floodFill(int x,int y,int oldcolor,int newcolor)\033[0m "<<endl;
cout<<"\033[35m {\033[0m "<<endl;
	cout<<"\033[35m if(getpixel(x,y) == oldcolor)\033[0m "<<endl;
	cout<<"\033[35m {\033[0m "<<endl;
		cout<<"\033[35m putpixel(x,y,newcolor);\033[0m "<<endl;
		cout<<"\033[35m floodFill(x+1,y,oldcolor,newcolor);\033[0m "<<endl;
		cout<<"\033[35m floodFill(x,y+1,oldcolor,newcolor);\033[0m "<<endl;
		cout<<"\033[35m floodFill(x-1,y,oldcolor,newcolor);\033[0m "<<endl;
		cout<<"\033[35m floodFill(x,y-1,oldcolor,newcolor);\033[0m "<<endl;
	cout<<"\033[35m }\033[0m "<<endl;
cout<<"\033[35m }\033[0m "<<endl;
cout<<"\033[33m \n2. Repeat until the polygon is completely filled.\033[0m "<<endl;

cout<<"\033[33m 3. Stop.\033[0m "<<endl;
	cout << endl << endl << endl << "\033[36m press any key to go back \033[0m " << endl ;
       cin.get(ffillalgo) ;
       cin.get(ffillalgo) ;
       fun_handle_ffill() ;
}	
