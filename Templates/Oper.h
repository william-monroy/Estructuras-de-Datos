#ifndef Oper_h
#define Oper_h

template <class T>
class Oper
{
private:
    T a;
    T b;

public:
    //Oper(); --> Al ser template no podemos definir tipos de datos por default
    Oper(T a, T b);
    T suma();
};
/*
Oper::Oper() {
    a = 0;
    b = 0;
}
*/
template <class T>
Oper<T>::Oper(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Oper<T>::suma()
{
    if (a + b != 1)
    {
        return a + b;
    }
    else
    {
        throw "Error creado para el ejemplo";
    }
}

#endif