void fun_handle_bfill() ;
class boundary_fill
{
    int bclr , fclr ;
    public:
    void setdata() ;
    void apply(int , int);
} ;
void boundary_fill::setdata()
{
    cout << "\033[36m Enter the boundary colour = \033[0m \n" ;
    cin >> bclr ;
    cout << "\033[36m Enter the fill colour = \033[0m \n" ;
    cin >> fclr ;
}
void boundary_fill::apply(int x , int y)
{
    int clr ;
    clr = getpixel(x , y) ;
    if(clr!= fclr && clr != bclr)
    {
        putpixel(x , y , fclr) ;
        this->apply(x , y + 1 ) ;
        this->apply(x , y - 1 ) ;
        this->apply(x + 1 , y ) ;
        this->apply(x - 1 , y ) ;
    }
}
void bfill_demo()
{
    system("clear") ;
    int gd = DETECT , gm;
    boundary_fill b1;
    b1.setdata() ;
    initgraph(&gd , & gm , NULL) ;
    circle(getmaxx()/2 , getmaxy()/2 , 150) ;
    b1.apply(getmaxx()/2 , getmaxy()/2) ;
    delay(2000) ;
    closegraph() ;
    fun_handle_bfill() ;
}