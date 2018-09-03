#include "Arraylist.h"

template <class T>
void Arraylist<T>::Agrandar()
{
    T *aux = new T[Largo_T +1];
    for(int i = 0; i<Largo_T; i++){
        aux[i] = Datos[i];
    }
    Datos = aux;
    Largo_T ++;
}

template <class T>
bool Arraylist<T>::Necesita_Agrandar()
{
    return Largo_T==Largo_A;
}

template<class T>
void Arraylist<T>::add(T obj)
{
    if(Necesita_Agrandar()){ // Agranda el arraylist
        Agrandar();}
    Datos[Largo_A] = obj;
    Largo_A++;
}

template<class T>
void Arraylist<T>::add(int n,T obj)
{
    if(Necesita_Agrandar()){
        Agrandar();}
    for(int i = Largo_A; i>=n; i--){
        Datos[Largo_A +1] = Datos[Largo_A];
    }
    Datos[n] = obj;
    Largo_A++;
}
