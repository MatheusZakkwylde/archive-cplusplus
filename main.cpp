#include <iostream>
#include<fstream>
using namespace std;

int main()
{

    //trabalhando modo leitura e escrita ao mesmo tempo.
    fstream arquivo;
    //entrando no arquivo saindo do programa os dados
    arquivo.open("archive.txt",ios::out|ios::app);
    //inserindo dados no arquivo
    arquivo <<"qualquer coisa inserida";
    arquivo.close();

    //agora o arquivo esta modo leitura do arquivo entrada,
    arquivo.open("archive.txt",ios::in);
    string linha;
    if(arquivo.is_open()){
        while(getline(arquivo,linha)){
            cout<<linha<<endl;
        }
          arquivo.close();
    }else{
        cout<<"Error, caminho de arquivo não encontrado"<<endl;
    }

    ofstream arquivoS;
    //caminho do arquivo (o ios::app é para que o arquivo não sobreescreve o texto já inserido
    //se tira ele sobreescreve)
    arquivoS.open("archive.txt",ios::app);
    arquivoS <<"Matheus Pinheiro Pereira"<<endl;

    arquivoS.close();


    ifstream arquivoE;
    arquivoE.open("archive.txt");

    if(arquivoE.is_open()){
        while(getline(arquivoE,linha)){
            cout<<linha<<endl;
        }
          arquivoE.close();
    }else{
        cout<<"Error, caminho de arquivo não encontrado"<<endl;
    }

    return 0;
}

