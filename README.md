# DroneSim

## Intro
Progetto di Programmazione a Oggetti svolto a settembre 2018.  La descrizione dettagliata si trova nella [relazione](https://github.com/nevepura/drone-simulator/blob/master/relazione%20DroneSim.pdf).

## Obiettivi
Lo scopo principale è di applicare quanto imparato nel corso di PaO. In particolare si tratta di: 
* applicare le conoscenze di OOP in C++ e Java costruendo un modello;
* nel modello, porre particolare attenzione ai concetti di incapsulamento, ereditarietà, polimorfismo;
* usare il framework Qt per fornire un'interfaccia grafica.

## Tecnologie
* Linguaggi: C++, Java;
* Compilatore: gcc v. 5.4.0;
* Framework: Qt v. 5.5.1.

## Uso delle tecnologie
Il progetto segue il pattern model-view, semplificazione di MVC. Il modello è implementato sia in C++ che in Java. L'interfaccia per il modello C++ è scritta in Qt. 

## Simulatore di drone
Il progetto richiede la progettazione e codifica di una calcolatrice che utilizzi una gerarchia di tipi di dato a piacere. Il tipo di dato scelto è il drone: il progetto consiste quindi in un simulatore di guida di un drone.
Il simulatore offre varie e semplici funzionalità: accensione, spegnimento, utilizzo della batteria, movimento in due dimensioni lungo gli assi x e y, e cambio della modalità di guida.

## Modalità di guida
La modalità Plus consente spostamenti verso i quattro punti cardinali (N,S,E,W), mentre la Ex consente di spostarsi di 45° rispetto a essi (NW, NE, SW, SE). Si può cambiare da una modalità all’altra e, a seconda della destinazione da raggiungere, una modalità può essere più vantaggiosa di un’altra. 
