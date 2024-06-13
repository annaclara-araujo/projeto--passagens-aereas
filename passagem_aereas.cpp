// Anna Clara Araujo e Caio Pereira Silva

#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

void desenhaBoasVindas()
{

    cout << "--------------------------------" << endl;
    cout << "|                              |" << endl;
    cout << "|    Bem Vindo ao Programa     |" << endl;
    cout << "|             de               |" << endl;
    cout << "|       Passagens Aereas       |" << endl;
    cout << "|                              |" << endl;
    cout << "--------------------------------" << endl;
}

void Desenhomenu()
{

    cout << "------------MENU--------------" << endl;
    cout << "|                             |" << endl;
    cout << "| Escolha uma opcao:          |" << endl;
    cout << "|      1) Cadastras Passagem  |" << endl;
    cout << "|      2) Listar Passagens    |" << endl;
    cout << "|      0) Sair                |" << endl;
    cout << "|                             |" << endl;
    cout << "------------MENU--------------" << endl;
    cout << "opcao: ";
}

void LimparBufferDoCin()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

vector<string> passageiros;
vector<string> origens;
vector<string> destinos;
vector<string> datas;

void Cadastrarpassagem()
{
    string nome, origem, destino, data;
    LimparBufferDoCin();

    cout << "Digite o nome do passageiro: ";
    getline(cin, nome);
    cout << "\n";
    passageiros.push_back(nome);

    cout << "Digite a origem: ";
    getline(cin, nome);
    cout << "\n";
    origens.push_back(origem);

    cout << "Digite o destino: ";
    getline(cin, destino);
    cout << "\n";
    destinos.push_back(destino);

    cout << "Digite a data: ";
    getline(cin, data);
    cout << "\n";
    datas.push_back(data);
}

void listaPassagem()
{

    cout << "--------------------------------" << endl;
    cout << "|                              |" << endl;
    cout << "|    Bem Vindo ao Programa     |" << endl;
    cout << "|             de               |" << endl;
    cout << "|     Lista de Passageiros     |" << endl;
    cout << "|                              |" << endl;
    cout << "--------------------------------" << endl;
    cout << "\n";
    cout << "\n";

    cout << "Quantidade de passageiros: " << passageiros.size ()<< endl <<endl;

    for (int i = 0; i < passageiros.size(); i++)
    {
       cout << "Passageiros "<< i << ": "<< passageiros[i] << endl;
       cout << "Origem " << i << ": "<<origens[i] << endl;
       cout << "Destino " << i << ": "<<destinos[i] << endl;
       cout << "Data " << i << ": "<<datas[i] << endl <<endl;
       
    }
      
      
}

int main()
{

    int opcao = -1;
    string continua;
    desenhaBoasVindas();

    do
    {
        Desenhomenu();
        cin >> opcao;
        cout << endl;

        switch (opcao)
        {
        case 0:
            cout << "Voce escolheu a opcao sair do Programa" << endl;
            break;
        case 1:
            cout << " Voce escolheu a opcao cadastrar passagem" << endl;
            Cadastrarpassagem();
            break;
        case 2:
            cout << "Voce escolheu a opcao listar passagem" << endl;
            listaPassagem();
        
            break;

        default:
            cout << "Opcao Invalida" << endl;
            break;
        }
    } while (opcao != 0);

    cout << "Obrigado por utlizar o programa :)" << endl;

    return 0;