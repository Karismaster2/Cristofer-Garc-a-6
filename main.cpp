#include <iostream>

using namespace std;
int contador_productos;
int cafe=0;
int hot_cakes=0;
int croassan=0;
int panque=0;
int jugo=0;
int total_pagar;
int productos;

int main()
{
    do{
    cout <<"PRODUCTOS CAFETERIA\n";
    cout<<"1.-CAFE=\t20$\n2-.HOT-CAKES=\t35$\n3-.CROASSAN=\t30$\n4-.PANQUE=\t20$\n5-.JUGO=\t25$\n6-.FIN DE COMPRA\n";
    cin>>productos;

    switch(productos){
    case 1:
        total_pagar+=20;
        cafe++;
    break;
    case 2:
        total_pagar+=35;
        hot_cakes++;
    break;
    case 3:
        total_pagar+=30;
        croassan++;
    break;
    case 4:
        total_pagar+=20;
        panque++;
    break;
    case 5:
        total_pagar+=25;
        jugo++;
    break;

        contador_productos=cafe + hot_cakes + croassan + panque + jugo;
     cout<<"EL TOTAL DE PRODUCTOS ES:"<<contador_productos<<"\n";
        cout<<"cafe:\t"<<cafe<<"\n";
        cout<<"hot_cakes:\t"<<hot_cakes<<"\n";
        cout<<"croassan:\t"<<croassan<<"\n";
        cout<<"panque:\t"<<panque<<"\n";
        cout<<"jugo:\t"<<jugo<<"\n";


    default:

    cout<<"OPCION NO VALIDA\n";
    break;
    }
        cout<<"cafe:\t"<<cafe<<"\n";
        cout<<"hot_cakes:\t"<<hot_cakes<<"\n";
        cout<<"croassan:\t"<<croassan<<"\n";
        cout<<"panque:\t"<<panque<<"\n";
        cout<<"jugo:\t"<<jugo<<"\n";

 cout<<"EL TOTAL ES:"<<total_pagar<<"\n";



    }while(1);
    return 0;
}
