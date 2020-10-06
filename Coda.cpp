#include <iostream>
#include "Coda.h"

using namespace std;

int inserisci(coda &c, int e)
/*
 * Inserisce in coda l'elemento e
 * Implementare anche il controllo di coda piena.
 * restituisce 0 se l'inserimento è avvenuto
 * restituisce -1 se non è stato possibile inserire il nuovo 
 * elemento
 */
{
	int temp = -1;
	//Di seguito il codice
	if(c.fine<N){
		c.queue[c.fine]=e;
		c.fine++;
		temp=0;
	};
	
	return temp;
}

int estrai(coda &c)
/*
 * Estrae e restituisce il primo elemento in coda
 * Restituisce 0 se la coda è vuota
 */
{
	int temp = 0;
	//Di seguito il codice
	if(c.testa<c.fine){
		testa=c.queue[c.testa];
		c.testa++;
		scorri(c);
	}
	return temp;
}

void stampa (coda c)
/*
 * Stampa tutti gli elementi presenti in coda oppure 
 * un messaggio di coda vuota nel caso in cui non ci
 * siano elementi in coda.
 */
{
	for(i=t;i<F;i++)
		cout<<coda[i]<<"";
}

void scorri(coda &c)
/*
 * Scorre gli elementi dell'array per 
 * liberare posti in coda
 */
{
	int i;
	for(i=1;i<c.fine;i++)
	   c.queue[i-1]=c.queue[i];
	c.fine--;
	c.testa=0;
}
