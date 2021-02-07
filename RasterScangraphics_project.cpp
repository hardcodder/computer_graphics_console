void fun_call_theory_handler();
void rasterscan()
{
char chosers ;
char crs ;
system("clear") ;
cout<<" \033[1;4;95m                                        RASTER SCAN GRAPHICS             \033[0m "<<endl<<endl;
cout<<" \033[36m * Architecture of Raster display consists of :-\n  1. display controller\n  2. CPU\n  3. Video controller\n  4. Refresh buffer\n  5. keyboard\n  6. mouse \n  7. CRT. \033[0m\n"<<endl;
cin.get(crs) ;
cin.get(crs) ;
cout<<" \033[36m * The display image is stored in the form of 1’s and 0’s in the refresh buffer.\033[0m\n "<<endl;
cout<<" \033[36m * The video controller reads this refresh buffer and produces the actual image on screen. \033[0m\n"<<endl;
cout<<" \033[36m * It will scan one line at a time from top to bottom & then back to the top. \033[0m\n"<<endl;
cout<<"\033[36m  * In this method the horizontal and vertical deflection signals are generated to move the beam\n all over the screen in a pattern. \033[0m\n"<<endl;
cout<<"\033[36m  * Beam is swept back & forth from left to the right. \033[0m\n"<<endl;
cout<<"\033[36m  * When beam is moved from left to right it is ON. \033[0m\n"<<endl;
cout<<"\033[36m  * When beam is moved from right to left it is OFF and process of moving beam from right to left\n  after completion of row is known as Horizontal Retrace. \033[0m\n"<<endl;
cin.get(crs) ;
cout<<"\033[36m  * When beam is reach at the bottom of the screen. It is made OFF and rapidly retraced back to the\n  top left to start again. \033[0m\n"<<endl;
cout<<"\033[36m  * This process of moving back to top is known as Vertical Retrace. \033[0m\n"<<endl;
cout<<"\033[36m  * The screen image is maintained by repeatedly scanning the same image.\n  This process is known as Refreshing of Screen.\033[0m\n "<<endl;
cout<<"\033[36m  * In raster scan displays a special area of memory is dedicated to graphics only.\n  This memory is called Frame Buffer. \033[0m\n"<<endl;
cout<<"\033[36m  * Frame buffer holds set of intensity values for all the screen points.\033[0m\n "<<endl;
cout<<" \033[36m * That intensity is retrieved from frame buffer and display on screen one row at a time. \033[0m\n"<<endl;
cout<<"\033[36m  * Each screen point referred as pixel or Pel (Picture Element).\033[0m\n "<<endl;
cout<<"\033[36m  * Each pixel can be specified by its row and column numbers. \033[0m\n"<<endl;
cin.get(crs) ;
cout<<"\033[36m  * It can be simply black and white system or color system.\033[0m\n "<<endl;
cout<<"\033[36m  * In simple black and white system each pixel is either ON or OFF, so only one\n  bit per pixel is needed. \033[0m\n"<<endl;
cout<<"\033[36m  * Additional bits are required when color and intensity variations can be displayed\n  up to 24-bits per pixel are included in high quality display systems. \033[0m\n"<<endl;
cout<<"\033[36m  * On a black and white system with one bit per pixel the frame buffer is commonly\n called a Bitmap. \033[0m\n"<<endl;
cout<<" \033[36m * Multiple bits per pixel, the frame buffer is often referred as a Pixmap. \033[0m\n"<<endl;
cout << endl << endl << "\033[1;95m Press any key to go back\033[0m\n " << endl ;
cin.get(chosers) ;
cin.get(chosers) ;
fun_call_theory_handler() ;
}
