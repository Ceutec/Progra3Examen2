#include "Evaluador.h"



void evaluar()
{
    float nota = 0;

    Lista<int> l0;

    Lista<char> l1;
    l1.agregarAlFinal('a');
    l1.agregarAlFinal('b');
    l1.agregarAlFinal('c');

    Lista<int> l2;
    l2.agregarAlFinal(1);
    l2.agregarAlFinal(2);
    l2.agregarAlFinal(3);
    l2.agregarAlFinal(4);
    l2.agregarAlFinal(5);

    Lista<string> l3;
    l3.agregarAlFinal("test");

    cout<<"contarValores:\t\t";
    if(l0.contarValores()==0 && l1.contarValores()==3
            && l2.contarValores()==5 && l3.contarValores()==1)
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    list<float> la;
    list<float> lb;
    list<float> lc;

    la.push_back(10);
    la.push_back(20);
    la.push_back(30);

    lb.push_back(10);
    lb.push_back(16);
    lb.push_back(13);
    lb.push_back(14);
    lb.push_back(19);
    lb.push_back(14.5);
    lb.push_back(15);

    lc.push_back(60);
    lc.push_back(55);
    lc.push_back(50);
    lc.push_back(55);

    cout<<"contarValores:\t\t";
    if(obtenerPromedio(la)==20 && obtenerPromedio(lb)==14.5 && obtenerPromedio(lc)==55)
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    vector<int> va;
    vector<int> vb;
    vector<int> vc;

    va.push_back(10);
    va.push_back(20);
    va.push_back(30);

    vb.push_back(1);
    vb.push_back(9);
    vb.push_back(3);
    vb.push_back(7);

    vc.push_back(100);
    vc.push_back(200);

    cout<<"obtenerSuma:\t\t";
    if(obtenerSuma(va)==60 && obtenerSuma(vb)==20 && obtenerSuma(vc)==300)
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    ofstream oa("testa");
    oa<<"hola como estas chuck testa";
    oa.close();

    ofstream ob("testb");
    ob<<"roses are red violets are blue";
    ob.close();

    cout<<"existeEnArchivo:\t";
    if(existeEnArchivo("testa","hola")
        && existeEnArchivo("testa","estas")
        && !existeEnArchivo("testa","violets")
        && existeEnArchivo("testb","violets")
        && existeEnArchivo("testb","red")
        && !existeEnArchivo("testa","red")
        )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"obtenerTamanoDeArchivo:\t";
    if(obtenerTamanoDeArchivo("testa") == 27
        && obtenerTamanoDeArchivo("testb") == 30
        )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    NodoTrinario* na1 = new NodoTrinario(1);
    NodoTrinario* na2 = new NodoTrinario(2);
    NodoTrinario* na3 = new NodoTrinario(3);
    NodoTrinario* na4 = new NodoTrinario(4);
    NodoTrinario* na5 = new NodoTrinario(5);
    NodoTrinario* na6 = new NodoTrinario(6);

    na1->izq = na2;
    na1->medio = na3;
    na1->der = na4;

    na1->izq = na5;
    na3->medio = na6;

    cout<<"existeEnArbol (extra):\t";
    if(existeEnArbol(na1,6)
        && !existeEnArbol(na1,10)
        && existeEnArbol(na1,3)
        && existeEnArbol(na1,1)
        && !existeEnArbol(na3,5)
        && existeEnArbol(na1,6)
        )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/15"<<endl;
}
