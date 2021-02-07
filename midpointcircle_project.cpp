class midpoint
{
    int x1 , y1 , r , d , xshift , yshift ;
    public:
    void getdata() ;
    void apply() ;
} ;
void midpoint::getdata()
{
    cout << "\033[32m Enter the radius = \033[0m\n" ;
    cin >> r ;
    x1 = 0 , y1 = r ;
}
void midpoint::apply()
{
    xshift = getmaxx()/2 , yshift = getmaxy()/2 ;
    d = 1.25 - r ;
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
            d = d + 2*x1 + 3 ;
            x1++ ;
        }
        else
        {
            d = d + 2*(x1 - y1) + 5 ;
            x1++ , y1-- ;
        }
        
    }
}
void midpoint_demo()
{
    system("clear") ;
    int gd = DETECT , gm;
    midpoint m1 ;
    m1.getdata() ;
    initgraph(&gd , & gm , NULL) ;
    m1.apply() ;
    delay(2000) ;
    closegraph() ;
    fun_handle_midpoint() ;
}