#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#include <conio2.h>
#include <windows.h>

/* Fontes úteis:
    conio.h:  http://conio.sourceforge.net/docs/html/conio2_8h.html
    beep:     https://www.clubedohardware.com.br/topic/1049844-beep-c/
    menu:     https://www.hardware.com.br/comunidade/menu-include/1462343/
    cores:     https://www.youtube.com/watch?v=wl5lhEMM3Wg
    cores:     https://www.youtube.com/watch?v=fQk9Oazo0Rw
    inimigos: https://www.youtube.com/watch?v=mXy2UuhMHwQ

*/

void jogar() {
    clrscr ();

    cputsxy(30, 14,"Estes são os inimigos: ");

    // Inimigo 4:
    textcolor(RED);
    cputsxy(50, 16,"___/MW\\___");
    cputsxy(50, 17,"qMARCELOWp");
    textcolor(WHITE);
    cputsxy(61, 16,"= ? pts");

    // Inimigo 3:
    cputsxy(53, 19,"{@@}");
    cputsxy(53, 20,"/\"\"\\");
    cputsxy(58, 19,"= 30 pts");

    // Inimigo 1:
    cputsxy(53, 22,"d00b");
    cputsxy(53, 23,"^/\\^");
    cputsxy(58, 22,"= 20 pts");

    // Inimigo 0:
    cputsxy(53, 25,"/MM\\");
    cputsxy(53, 26,"|~~|");
    cputsxy(58, 25,"= 10 pts");

    do {

    } while(1);
}

void ranking() {
}

void creditos() {
}

void sair() {
}

int menu() {
    int i, selecionado=0;
    char op=' ';

    for(i=2; i <= 55; i++) {
        cputsxy(i-1, 13, " ");
        textcolor(WHITE);
        cputsxy(i, 13, "Space");
        cputsxy(i-2, 14, " ");
        textcolor(LIGHTGREEN);
        cputsxy(i-1, 14, "Invaders");
        Sleep(50);
    }
    textcolor(WHITE);


    Beep(750, 100);
    do {
        if(selecionado==0) {
            textbackground(WHITE);
            textcolor(BLACK);
            cputsxy(45, 17, "Jogar");
            textbackground(BLACK);
            textcolor(WHITE);
        } else {
            cputsxy(45, 17, "Jogar");
        }

        if(selecionado==1) {
            textbackground(WHITE);
            textcolor(BLACK);
            cputsxy(45, 18, "Ranking");
            textbackground(BLACK);
            textcolor(WHITE);
        } else {
            cputsxy(45, 18, "Ranking");
        }

        if(selecionado==2) {
            textbackground(WHITE);
            textcolor(BLACK);
            cputsxy(45, 19, "Créditos");
            textbackground(BLACK);
            textcolor(WHITE);
        } else {
            cputsxy(45, 19, "Créditos");
        }

        if(selecionado==3) {
            textbackground(WHITE);
            textcolor(BLACK);
            cputsxy(45, 20, "Sair");
            textbackground(BLACK);
            textcolor(WHITE);
        } else {
            cputsxy(45, 20, "Sair");
        }

        op = getch();
        if(op==72 && selecionado > 0) {
            Beep(750, 100);
            selecionado--;
        } else if (op == 80 && selecionado < 3) {
            Beep(750, 100);
            selecionado++;
        }
    } while(op!=13);

    return selecionado;
}


int main() {
    _setcursortype(0);

    int op;
    op = menu();

    switch(op) {
    case 0:
        jogar();
        break;
    case 1:
        ranking();
        break;
    case 2:
        creditos();
        break;
    case 3:
        sair();
        break;
    }

    return 0;
}
