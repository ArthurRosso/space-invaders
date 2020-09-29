#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#include <conio2.h>
#include <windows.h>

/* Fontes úteis:
    conio.h: http://conio.sourceforge.net/docs/html/conio2_8h.html#a4fba076b219f45fb4e28c15f86678ec3
    beep:    https://www.clubedohardware.com.br/topic/1049844-beep-c/
    menu:    https://www.hardware.com.br/comunidade/menu-include/1462343/
    cores:    https://www.youtube.com/watch?v=wl5lhEMM3Wg
    cores:    https://www.youtube.com/watch?v=fQk9Oazo0Rw
*/

void jogar() {
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
        if(selecionado==0){
        textbackground(WHITE);
        textcolor(BLACK);
        cputsxy(45, 17, "Jogar");
        textbackground(BLACK);
        textcolor(WHITE);
        } else {
        cputsxy(45, 17, "Jogar");
        }

        if(selecionado==1){
        textbackground(WHITE);
        textcolor(BLACK);
        cputsxy(45, 18, "Ranking");
        textbackground(BLACK);
        textcolor(WHITE);
        } else {
        cputsxy(45, 18, "Ranking");
        }

        if(selecionado==2){
        textbackground(WHITE);
        textcolor(BLACK);
        cputsxy(45, 19, "Créditos");
        textbackground(BLACK);
        textcolor(WHITE);
        } else{
        cputsxy(45, 19, "Créditos");
        }

        if(selecionado==3){
        textbackground(WHITE);
        textcolor(BLACK);
        cputsxy(45, 20, "Sair");
        textbackground(BLACK);
        textcolor(WHITE);
        } else {
        cputsxy(45, 20, "Sair");
        }

        op = getch();
        if(op==72 && selecionado > 0){
            Beep(750, 100);
            selecionado--;
        } else if (op == 80 && selecionado < 3){
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
    case 1:
        jogar();
        break;
    case 2:
        ranking();
        break;
    case 3:
        creditos();
        break;
    case 4:
        sair();
        break;
    }

    return 0;
}
