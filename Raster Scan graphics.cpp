

void rasterscan()
{
  cout<<"                                        RASTER SCAN GRAPHICS                                       "<<endl;
cout<<"#Architecture of Raster display consists of display controller, CPU, video controller, refresh buffer, keyboard, mouse and CRT."<<endl;
cout<<"#The display image is stored in the form of 1’s and 0’s in the refresh buffer."<<endl;
cout<<"#The video controller reads this refresh buffer and produces the actual image on screen."<<endl;
cout<<"#It will scan one line at a time from top to bottom & then back to the top."<<endl;
cout<<"#In this method the horizontal and vertical deflection signals are generated to move the beam all over the screen in a pattern."<<endl;
cout<<"#Beam is swept back & forth from left to the right."<<endl;
cout<<"#When beam is moved from left to right it is ON."<<endl;
cout<<"#When beam is moved from right to left it is OFF and process of moving beam from right to left after completion of row is known as Horizontal Retrace."<<endl;
cout<<"#When beam is reach at the bottom of the screen. It is made OFF and rapidly retraced back to the top left to start again."<<endl;
cout<<"#This process of moving back to top is known as Vertical Retrace."<<endl;
cout<<"#The screen image is maintained by repeatedly scanning the same image. This process is known as Refreshing of Screen."<<endl;
cout<<"#In raster scan displays a special area of memory is dedicated to graphics only. This memory is called Frame Buffer."<<endl;
cout<<"#Frame buffer holds set of intensity values for all the screen points."<<endl;
cout<<"#That intensity is retrieved from frame buffer and display on screen one row at a time."<<endl;
cout<<"#Each screen point referred as pixel or Pel (Picture Element)."<<endl;
cout<<"#Each pixel can be specified by its row and column numbers."<<endl;
cout<<"#It can be simply black and white system or color system."<<endl;
cout<<"#In simple black and white system each pixel is either ON or OFF, so only one bit per pixel is needed."<<endl;
cout<<"#Additional bits are required when color and intensity variations can be displayed up to 24-bits per pixel are included in high quality display systems."<<endl;
cout<<"#On a black and white system with one bit per pixel the frame buffer is commonly called a Bitmap."<<endl;
cout<<"#Multiple bits per pixel, the frame buffer is often referred as a Pixmap."<<endl;
}
