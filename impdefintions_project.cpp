void fun_call_theory_handler() ;
void impdef()
{
    char chosedef ;
    char cdef ;
    
    system("clear") ;
	cout<<"\n\n                                   \033[4;36;47m IMPORTANT DEFINTIONS \033[0m\n "<<endl;
    cin.get(cdef) ;
    cout<<" \n \033[4;35;47m *PIXEL: \033[0m\n "<<endl<<endl;
    cout<<" \033[33m Short for Picture Element, a pixel is a single point in a graphic image. \033[0m\n "<<endl;
    cout<<" \033[33m Graphics monitors display pictures by dividing the display screen into thousands\n (or millions) of pixels, arranged in rows and columns. \033[0m\n "<<endl;
    cout<<" \033[33m The pixels are so close together that they appear connected.\033[0m\n "<<endl;
cout<<"\033[33m  The number of bits used to represent each pixel determines how many colors or shades\n of gray can be displayed. \033[0m\n "<<endl;
cout<<" \033[33m For example, in 8-bit color mode, the color monitor uses 8 bits for each pixel, making\n it possible to display 2 to the 8th power (256) different colors or shades of gray. \033[0m\n "<<endl;
    cin.get(cdef) ;
cout<<" \n \033[4;35;47m *RESOLUTION: \033[0m\n "<<endl<<endl;
cout<<"  \033[33m Resolution is the number of pixels (individual points of color) contained on a display\n monitor, expressed in terms of the number of pixels on the horizontal axis and the number on\n the vertical axis. \033[0m\n "<<endl;
cout<<" \033[33m The sharpness of the image on a display depends on the resolution and the size of the monitor. \033[0m\n "<<endl;
cout<<" \033[33m The same pixel resolution will be sharper on a smaller monitor and gradually lose sharpness\n on larger monitors because the same number of pixels are being spread out over a larger number of inches. \033[0m\n "<<endl;
    cin.get(cdef) ;

cout<<" \n \033[4;35;47m *ASPECT RATIO: \033[0m\n "<<endl<<endl;
cout<<" \033[33m An aspect ratio is an attribute that describes the relationship between the width and height\n of an image. \033[0m\n "<<endl;
cout<<" \033[33m Aspect ratio is expressed by the symbolic notation: X:Y. \033[0m\n "<<endl;
cout<<" \033[33m The values of X and Y are not the actual width and height of the image, but describe the\n relationship between them. \033[0m\n "<<endl;
    cin.get(cdef) ;

cout<<" \n \033[4;35;47m *FRAME BUFFER: \033[0m\n "<<endl<<endl;
cout<<" \033[33m A framebuffer (frame buffer, or sometimes framestore) is a portion of random-access memory\n (RAM) containing a bitmap that drives a video display. \033[0m\n "<<endl;
cout<<" \033[33m It is a memory buffer containing a complete frame of data.\033[0m\n "<<endl;
 cout<<"\033[33m  Modern video cards contain framebuffer circuitry in their cores.\033[0m\n "<<endl;
 cout<<" \033[33m This circuitry converts an in-memory bitmap into a video signal that can be displayed on\n a computer monitor.\033[0m\n "<<endl;
    cin.get(cdef) ;

 cout<<" \n \033[4;35;47m *BITMAP: \033[0m\n "<<endl<<endl;
 cout<< " \033[33m A bitmap (or raster graphic) is a digital image composed of a matrix of dots.\033[0m\n "<<endl;
 cout<<"\033[33m  When viewed at 100%, each dot corresponds to an individual pixel on a display.\033[0m\n "<<endl;
 cout<<" \033[33m In a standard bitmap image, each dot can be assigned a different color.\033[0m\n "<<endl;
 cout<<" \033[33m Together, these dots can be used to represent any type of rectangular picture.\033[0m\n "<<endl;
    cin.get(cdef) ;

 cout<< " \n \033[4;35;47m *SCAN CONVERSION: \033[0m\n "<<endl<<endl;
 cout<<" \033[33m It is a process of representing graphics objects a collection of pixels. \033[0m\n "<<endl;
 cout<<" \033[33m The graphics objects are continuous. \033[0m\n "<<endl;
 cout<<"\033[33m  The pixels used are discrete. \033[0m\n "<<endl;
 cout<<" \033[33m Each pixel can have either on or off state. \033[0m\n "<<endl;
    cin.get(cdef) ;

cout<<"\033[33m The circuitry of the video display device of the computer is capable of converting binary\n values (0, 1) into a pixel on and pixel off information.\033[0m\n "<<endl;
cout<<" \033[33m 0 is represented by pixel off. 1 is represented using pixel on.\033[0m\n "<<endl; 
cout<<"\033[33m Using this ability graphics computer represent picture having discrete dots.\033[0m\n "<<endl;
    cin.get(cdef) ;

cout<<" \n \033[4;35;47m *INTERLACING: \033[0m\n "<<endl<<endl;
cout<<" \033[33m Interlacing refers to an interlaced graphic image, such as an interlaced GIF or progressive JPEG. \033[0m\n "<<endl;
cout<<" \033[33m These are images that are displayed by loading either odd or even lines first, and then\n loading the other lines on the next cycle. \033[0m\n "<<endl;
cout<<" \033[33m For users with slow Internet connections (e.g., dial-up modem), a very large, progressive\n image appears faded as it loads. \033[0m\n "<<endl;
cout << endl << endl << " \033[36m Press any key to go back \033[0m\n " << endl ;
cin.get(chosedef) ;
cin.get(chosedef) ;
fun_call_theory_handler() ;
}