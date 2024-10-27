class Wektor2D
{
    public:
    Wektor2D(double x=0, double y=0){
        _x = x;
        _y = y;
    }

    ~Wektor2D(){}

    void setX(double x){
        _x = x;
    }

    void setY(double y){
        _y = y;
    }

    double getX(){
        return _x;
    }

    double getY(){
        return _y;
    }

    private:
    double _x;
    double _y;
};

Wektor2D operator+(Wektor2D v1, Wektor2D v2){
    Wektor2D sum;
    sum.setX(v1.getX() + v2.getX());
    sum.setY(v1.getY() + v2.getY());
    return sum;
}

double operator*(Wektor2D v1, Wektor2D v2){
    double prod;
    prod = (v1.getY() * v2.getY()) + (v1.getX() * v2.getX());
    return prod;
}