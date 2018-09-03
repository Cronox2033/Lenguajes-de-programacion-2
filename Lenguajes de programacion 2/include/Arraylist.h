#ifndef ARRAYLIST_H
#define ARRAYLIST_H

template <class T>
class Arraylist
{
    public:
        Arraylist(){
        Datos = new T[1];
        Largo_T = 1;
        Largo_A = 0;
        }
        void add(T obj);
        void add(int n,T obj);
        void remove(int n);
        void remove(T obj);
        void clear();
        int size();
        T get(int n);
        bool isEmpty();
        int	indexOf(T obj);
        int	lastindexOf(T obj);
        void set(int n, T obj);
        bool contains(T obj);

    protected:

    private:
        T *Datos;
        int Largo_T;
        int Largo_A;
        void Agrandar();
        bool Necesita_Agrandar();


};

#endif // ARRAYLIST_H
