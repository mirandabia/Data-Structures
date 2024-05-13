#include <iostream>

using std::cin;
using std::cout;
using std:: endl;
using std::string;


//Fila: FIFO: primeiro a entrar, primeiro a sair
//FCFS: First Come, First Served - Primeiro a chegar, primeiro a ser atendido

//Pilha: LIFO: Last In, First Out - Último a entrar, primeiro a sair
//LCFS: Last Come, First Served - Último a chegar, primeiro a ser atendido

//Livro: Estrutura de Dados e Algoritmos em C++ - Adam Drozdek

//Algoritmo best fit: aloca o menor espaço que atende a demanda
//worst fit: aloca o maior espaço que atende a demanda

// A1: Fila e pilha


typedef struct Node
{
    int iData; 
    Node* next;
} Node;


typedef struct Queue
{
    Node* front; //frente
    Node* rear; //traseira
} Queue;

Node* newNode(int iValue)
{
    Node* temp = (Node*) malloc(sizeof(Node));
    temp -> iData = iValue;
    temp -> next = nullptr;

    return temp;
}

//ponteiro pode ser zero, diferente da referência
Queue* newQueue()
{
    Queue* temp = (Queue*) malloc(sizeof(Queue));
    temp -> front = nullptr;
    temp -> rear = nullptr;
    return temp;
}


void Enqueue(Queue* const queue, int iValue)
{
    Node* temp = newNode(iValue);

    if (queue -> front == nullptr)
    {
        queue -> front = temp;
        queue -> rear = temp;
    }
    else
    {
        queue -> rear -> next = temp;
        queue -> rear = temp;
    }
}

void showFirstElement(Queue* const queue)
{
    cout << "Primeiro elemento: " << ((queue -> front != NULL) ? (queue-> front) -> iData : -1) << endl;
    //cout << "Primeiro elemento: " << queue -> front -> iData << endl;
}

void showLastElement(Queue* const queue)
{
    cout << "Último elemento: " << ((queue -> rear != NULL) ? (queue-> rear) -> iData : -1) << endl;
    //cout << "Último elemento: " << queue -> rear -> iData << endl;
}

void showElements(Queue* const queue)
{
    if (queue -> front == nullptr)
    {
        cout << "Fila vazia" << endl;
        return;
    }
    Node* current = queue -> front;

    while (current != nullptr)
    {
        cout << "Elemento: " << current -> iData << " ";
        Node* past = current;
        current = current -> next;
        past -> next = nullptr;
    }
}


int main()
{
    //1. Estrutura de um nó
    //2. Estrutura de uma fila
    //3. Função que cria uma fila
    //4. Função que cria um nó
    //5. Função que enfileira um nó
    //6. Função que exibe o primeiro elemento
    //7. Função que exibe o último elemento
    //8. Função que exibe os n elementos


    Queue* queue = new Queue();
    showFirstElement(queue);
    showLastElement(queue);
    cout << "===================================================================" << endl;

    Enqueue(queue, 0);
    Queue* queue = new Queue();
    showFirstElement(queue);
    showLastElement(queue);
    cout << "===================================================================" << endl;

    Enqueue(queue, 3);
    Enqueue(queue, 7);
    Enqueue(queue, 13);
    Enqueue(queue, 42);
    Queue* queue = new Queue();
    showFirstElement(queue);
    showLastElement(queue);
    cout << "===================================================================" << endl;


    return 0;
}