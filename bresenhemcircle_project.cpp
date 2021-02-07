void fun_handle_brcir() ;
class bresenhem_circle
{
    int x1 , y1 , r , xpre , ypre ,d , xshift , yshift ;
    public:
    void getdata() ;
    void apply() ;
} ;
void bresenhem_circle::getdata()
{
    cout << "\033[35m Enter the radius = \033[0m\n" ;
    cin >> r ;
    x1 = 0 , y1 = r ;
}
void bresenhem_circle::apply()
{
    xshift = getmaxx()/2 , yshift = getmaxy()/2 ;
    xpre = x1 , ypre = y1 ;
    d = 3 - 2 * r ;
    while(x1 <= y1)
    {
        putpixel(x1 + xshift ,yshift - y1 , 15) ;
		putpixel(y1 + xshift ,yshift - x1 , 15) ;
		putpixel(x1 + xshift ,yshift + y1 , 15) ;
		putpixel(y1 + xshift ,yshift + x1 , 15) ;
		putpixel(-x1 + xshift ,yshift - y1 , 15) ;
		putpixel(-y1 + xshift ,yshift - x1 , 15) ;
		putpixel(-x1 + xshift ,yshift + y1 , 15) ;
		putpixel(-y1 + xshift ,yshift + x1 , 15) ;
		delay(30) ;
        if(d < 0)
        {
            x1 = x1 + 1 ;
			d = d + 4*xpre + 6 ;
        }
        else
        {
            x1 = x1 + 1 ;
			y1 = y1 - 1 ;
			d = d + 4*(xpre - ypre) + 10 ;
        }
        xpre = x1 , ypre = y1 ;
    }
}
void call_brcir_demonstrate()
{
    system("clear") ;
    int gd = DETECT , gm;
    bresenhem_circle bc1 ;
    bc1.getdata() ;
    initgraph(&gd , & gm , NULL) ;
    bc1.apply() ;
    delay(2000) ;
    closegraph() ;
    fun_handle_brcir() ;
}