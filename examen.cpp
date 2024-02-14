#include <iostream>
#include <string>
using namespace std;

class Rectangulo
{
    int ancho;
    int altura;
    public :
    int esquinaX;
    int esquinaY;




    

int getAncho();
void setAncho(int w);
int getAltura();
void setAltura(int h);
int getArea();
void intersecta(Rectangulo rect);

int area;


Rectangulo();
    Rectangulo(int x, int y);
    Rectangulo(int x, int y, int w, int h);
}


int main(int area)
{
    int esquinaX1;
    int esquinaY1;
    int esquinax1;
    int esquinay1;
    int esquinaX2;
    int esquinaX2;

   Rectangulo rect1;
   Rectangulo::rect1.ancho = 6;
   Rectangulo::rect1.altura = 8;
   Rectangulo::rect1.esquinaX1 = w+ancho;
   Rectangulo::rect1.esquinaY1=   h + ancho;
Rectangulo rect2;
   Rectangulo::rect2.ancho = 10
   Rectangulo::rect2.altura = 9
   Rectangulo::rect2.esquinaX2 = w+ancho;
   Rectangulo::rect2.esquinaY2 = h + ancho;
  Rectangulo rect3;
   Rectangulo::rect3.ancho = 25
   Rectangulo::rect3.altura = 15
   Rectangulo::rect3.esquinax1 = w+ancho;
   Rectangulo::rect3.esquinay1 = h + ancho;

for (int i = 0; i < 3; i++) 
{
    getArea();
    cout << area[i] << endl;
}

   rect1.intersecta(rect2);
   rect1.intersecta(rect3);
   rect2.intersecta(rect3);
}


Rectangulo::rectangulo() 
{
ancho=0;
altura = 0;
}

Rectangulo::rectangulo(int x, int y) 
{
    esquinaX=x; esquinaY=y;
    }

Rectangulo::rectangulo(int x, int y,int w, int h){
    esquinaX=x, esquinaY=y, w=ancho, h=altura;
}

Rectangulo::getAncho()
{
    return ancho;
}

Rectangulo::setAncho(int w)
{
    if(w < 0)
    {
        w= 0;
    }else{
        w=ancho;
    }
}
Rectangulo::getAltura()
{
    return altura;
}

Rectangulo::setAltura(int h)
{
if(h < 0)
    {
        h= 0;
    }else{
        h=altura;
    }
}

Rectangulo::getArea()
{
    
    area = altura * ancho;
    return area; 
}

Rectangulo::intersecta(Rectangulo rect)
{
if (esquinaX1 <= esquinaX2 + w || esquinaX1 + ancho >= esquinaX2)
{
    if (esquinaY1 <= esquinaY2 + h || esquinaY1 + altura >= esquinaY2)
    {
        cout << "Los triangulos intersectan" << endl;
    }
}else
{
    cout << "No intersectan" << endl;
}
}
