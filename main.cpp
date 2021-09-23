#include<iostream>

class Figura{
private:
    int altura = 0;
    int base = 0;
    int radius = 0;
public:
    Figura(){};
    Figura(int altura, int base){
        setAltura(altura);
        setBase(base);
    }
    //Modificadores
    void setAltura(int n){ altura = n; }
    void setBase(int n){ base = n; }
    void setRadius(int n){ radius = n;}
    void setDatosT(){
        int l;
        std::cout<<"Ingrese medida de la altura: ";
        std::cin>>l;
        setAltura(l);
        std::cout<<"Ingrese la medida de la base: ";
        std::cin>>l;
        setBase(l);
    }
    void setDatosC(){
        int l;
        std::cout<<"Ingrese la medida del radio: ";
        std::cin>>l;
        setRadius(l);
    }
    //Accesos
    int getAltura(){ return altura; }
    int getBase(){ return base; }
    int getRadius(){ return radius; }
};

class Trapecio : public Figura{
    public:
        //Trapecio(){}
        void area(){ 
            int altura = getAltura();
            int base = getBase();
            std::cout<< altura*base<<std::endl;
            system("pause");
        }     
};

class Square : public Trapecio{
    public:
        void area(){
            std::cout<<"El area del cuadrado es: ";
            Trapecio::area();
        }
};

class Rectangle : public Trapecio{
    public:
        void area(){
            std::cout<<"El area del Rectangulo es: ";
            Trapecio::area();
    }
};
class Triangle : public Figura{
    public:
        void area(){
            int altura = getAltura();
            int base = getBase();
            std::cout<<"El area del triangulo es: "<<(base * altura)/2<<std::endl;
            system("pause");
        }
};

class Circle : public Figura{
    public:
        void area(){
            int radius = getRadius();
            std::cout<<"El area del circulo es: "<<(3.14 * radius * radius)<<std::endl;
            system("pause");
    }
};

int main(void){
    int n = 0;
    Square square;
    Rectangle rectangle;
    Circle circle;
    Triangle triangle;
    do{
        system("cls");
        std::cout<<"\t\tSeleccione una figura\n\n";
        std::cout<<"\t1. Circulo\n";
        std::cout<<"\t2. Cuadrado\n";
        std::cout<<"\t3. Triangulo\n";
        std::cout<<"\t4. Rectangulo\n";
        std::cout<<"\t5. Salir\n";
        std::cout<<"opcion: ";
        std::cin>>n;
        switch (n){
            case 1:
                circle.setDatosC();
                circle.area();
                n = 0;
                break;
            case 2:
                square.setDatosT();
                square.area();
                n = 0;
                break;
            case 3:
                triangle.setDatosT();
                triangle.area();
                n = 0;
                break;
            case 4:
                rectangle.setDatosT();
                rectangle.area();
                n = 0;
                break;
        }
    }while( n != 1 && n != 2 && n != 3 && n != 4 && n != 5);
}
