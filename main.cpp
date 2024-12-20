#include <iostream>
#include "Grafo.cpp" // Assicurati che il file della classe sia incluso

int main() {
    Grafo<std::string> grafo;

    // Aggiunta dei nodi
    grafo.aggiungiNodo("Taranto");
    grafo.aggiungiNodo("Heraklion");
    grafo.aggiungiNodo("Istanbul");
    grafo.aggiungiNodo("Alessandria");
    grafo.aggiungiNodo("Malta");

    // Aggiunta degli archi
    grafo.aggiungiArco("Taranto", "Heraklion", 1050);
    grafo.aggiungiArco("Heraklion", "Istanbul", 1400);
    grafo.aggiungiArco("Istanbul", "Alessandria", 2700);
    grafo.aggiungiArco("Alessandria", "Malta", 3300);
    grafo.aggiungiArco("Malta", "Taranto", 750);
    grafo.aggiungiArco("Taranto", "Alessandria", 3600);

    // Visualizzazione del grafo
    grafo.stampa();

    // Ricerca di un nodo
    if (grafo.verificaNodo("Taranto")) {
        std::cout << "Il nodo Taranto esiste.\n";
    }

    // Ricerca dei nodi adiacenti
    grafo.nodiAdiacenti("Istanbul");

    // Rimozione di un arco
    grafo.rimuoviArco("Istanbul", "Alessandria");

    // Rimozione di un nodo
    grafo.rimuoviNodo("Heraklion");

    // Aggiunta di nuovi nodi e archi
    grafo.aggiungiNodo("Limassol");
    grafo.aggiungiArco("Limassol", "Malta", 1900);

    std::string nodo1 = "Istanbul";
    std::string nodo2 = "Alessandria";
    if (grafo.connessi(nodo1, nodo2)) {
        std::cout << nodo1 << " e " << nodo2 << " sono connessi.\n";
    } else {
        std::cout << nodo1 << " e " << nodo2 << " non sono connessi.\n";
    }

    return 0;
}
