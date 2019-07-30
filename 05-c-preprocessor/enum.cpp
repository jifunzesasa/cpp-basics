// enum.cpp
#include <iostream>
using namespace std;

enum card_suit { SPD, HRT, DIA, CLB };
enum card_rank { ACE = 1, JACK = 11, QUEEN, KING };

const string aceString = "Ace";
const string jckString = "Jack";
const string queString = "Queen";
const string kngString = "King";
const string spdString = "Spades";
const string hrtString = "Hearts";
const string diaString = "Diamonds";
const string clbString = "Clubs";

struct card {
	unsigned char r;
	unsigned char s;
};

card deck[52] = {
		{ ACE, SPD }, { 2, SPD }, { 3, SPD }, { 4, SPD }, { 5, SPD }, { 6, SPD }, { 7, SPD },
		{ 8, SPD }, { 9, SPD }, { 10, SPD }, { JACK, SPD }, { QUEEN, SPD }, { KING, SPD },
		{ 1, HRT }, { 2, HRT }, { 3, HRT }, { 4, HRT }, { 5, HRT }, { 6, HRT }, { 7, HRT },
		{ 8, HRT }, { 9, HRT }, { 10, HRT }, { JACK, HRT }, { QUEEN, HRT }, { KING, HRT },
		{ 1, DIA }, { 2, DIA }, { 3, DIA }, { 4, DIA }, { 5, DIA }, { 6, DIA }, { 7, DIA },
		{ 8, DIA }, { 9, DIA }, { 10, DIA }, { JACK, DIA }, { QUEEN, DIA }, { KING, DIA },
		{ 1, CLB }, { 2, CLB }, { 3, CLB }, { 4, CLB }, { 5, CLB }, { 6, CLB }, { 7, CLB },
		{ 8, CLB }, { 9, CLB }, { 10, CLB }, { JACK, CLB }, { QUEEN, CLB }, { KING, CLB }
};

void print_card( const card & c );

int main( int argc, char ** argv ) {

	for( int i = 0; i < 52 ; i++ ) {
		print_card(deck[i]);
	}

	return 0;
}

void print_card( const card & c ) {
	if(c.r >= 2 && c.r <= 10) {
		printf("%d", c.r);
	} else {
		switch(c.r) {
		case ACE:
			cout << aceString;
			break;
		case JACK:
			cout << jckString;
			break;
		case QUEEN:
			cout << queString;
			break;
		case KING:
			cout << kngString;
			break;
		}
	}
	cout << " of ";
	switch(c.s) {
	case SPD:
		cout << spdString;
		break;
	case HRT:
		cout << hrtString;
		break;
	case DIA:
		cout << diaString;
		break;
	case CLB:
		cout << clbString;
		break;
	}
	cout << endl;
}
