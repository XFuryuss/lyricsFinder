/*
Il programma chiede all'utente di selezionare il numero di una canzone da una lista di canzoni disponibili.
Dopo che l'utente ha selezionato il numero della canzone, il programma mostra il testo della canzone selezionata.
Il programma continua a chiedere all'utente di selezionare un numero di canzone finché l'utente non seleziona il numero 0.
Il programma gestisce anche gli errori di input dell'utente, come l'inserimento di un numero non valido o la selezione di un numero di canzone non disponibile.
Il programma utilizza una struttura dati per memorizzare le canzoni e i loro testi.
*/
#include <stdio.h>

void UI(){
    printf("===========================================================================\n");
    printf("                            Lyrics Finder\n");
    printf("        Inserisci la canzone di cui vuoi visualizzarne il testo\n");
    printf("===========================================================================\n");
}
void canzoniDisponibili(){
    printf("1. Alan Walker - Faded\n");
    printf("2. Arctic Monkeys - Do I Wanna Know?\n");
    printf("3. Frank Sinatra - Fly me to the moon\n");
    printf("4. Imagine Dragons - Cutthroat\n");
    printf("5. Imagine Dragons - Follow You\n");
    printf("0. Exit\n");
}
void InputError(){
    printf("Comando non riconosciuto. Riprova.\n");
}
void Exit(){
    printf("Esco dal programma...\n");
}
void faded(){
    printf("Testo di Alan Walker - Faded:\n\n");
    printf("You were the shadow to my light\nDid you feel us?\nAnother star, you fade away\nAfraid our aim is out of sight\nWanna see us alive\n\nWhere are you now?\nWhere are you now?\nWhere are you now?\nWas it all in my fantasy?\nWhere are you now?\nWere you only imaginary?\n\nWhere are you now?\nAtlantis, under the sea, under the sea\nWhere are you now? Another dream\nThe monster's running wild inside of me\n\nI'm faded, I'm faded\nSo lost, I'm faded, I'm faded\nSo lost, I'm faded\n\nThese shallow waters never met what I needed\nI'm letting go, a deeper dive\nEternal silence of the sea\nI'm breathing, alive\n\nWhere are you now?\nWhere are you now?\nUnder the bright but faded lights\nYou set my heart on fire\nWhere are you now?\nWhere are you now?\n\nWhere are you now?\nAtlantis, under the sea, under the sea\nWhere are you now? Another dream\nThe monster's running wild inside of me\n\nI'm faded, I'm faded\nSo lost, I'm faded, I'm faded\nSo lost, I'm faded\n");
}
void doiwannaknow(){
    printf("Testo di Arctic Monkeys - Do I Wanna Know?:\n\n");
    printf("Have you got colour in your cheeks?\n Do you ever get that fear that you can't shift\n The type that sticks around like summat in your teeth?\n Are there some aces up your sleeve?\n Have you no idea that you're in deep?\n I dreamt about you nearly every night this week\n \n How many secrets can you keep?\n 'Cause there's this tune I found\n That makes me think of you somehow\n And I play it on repeat\n Until I fall asleep\n Spilling drinks on my settee\n \n (Do I wanna know)\n If this feeling flows both ways?\n (Sad to see you go)\n Was sorta hoping that you'd stay\n (Baby, we both know)\n That the nights were mainly made\n For saying things that you can't say tomorrow day\n \n Crawling back to you\n Ever thought of calling when you've had a few?\n 'Cause I always do\ Maybe I'm too busy being yours to fall for somebody new\n Now, I've thought it through\n Crawling back to you\n \n So, have you got the guts?\n Been wondering if your heart's still open\n And if so, I wanna know what time it shuts\n Simmer down and pucker up\n I'm sorry to interrupt, it's just I'm constantly on the cusp\n Of trying to kiss you\n I don't know if you feel the same as I do\n But we could be together if you wanted to\n \n (Do I wanna know)\n If this feeling flows both ways?\n (Sad to see you go)\n Was sorta hoping that you'd stay\n (Baby, we both know)\n That the nights were mainly made\n For saying things that you can't say tomorrow day\n \n Crawling back to you (crawling back to you)\n Ever thought of calling when you've had a few? (You've had a few?)\n 'Cause I always do ('cause I always do)\n Maybe I'm too (maybe I'm too busy)\n Busy being yours (being yours)\n To fall for somebody new\n Now, I've thought it through\n Crawling back to you\n \n (Do I wanna know)\n If this feeling flows both ways?\n (Sad to see you go)\n Was sorta hoping that you'd stay\n (Baby, we both know)\n That the nights were mainly made\n For saying things that you can't say tomorrow day\n\n(Do I wanna know?)\n Too busy being yours to fall\n(Sad to see you go)\n Ever thought of calling, darling?\n(Do I wanna know?)\nDo you want me crawling back to you?\n");
}
void flymetothemoon(){
    printf("Testo di Frank Sinatra - Fly me to the moon:\n\n");
    printf("Fly me to the moon\n Let me play among the stars\n Let me see what spring is like\n On a, Jupiter and Mars\n In other words, hold my hand\n In other words, baby, kiss me\n Fill my heart with song\n And let me sing for ever more\n You are all I long for\n All I worship and adore\n In other words, please be true\n In other words, I love you\n Fill my heart with song\n Let me sing for ever more\n You are all I long for\n All I worship and adore\n In other words, please be true\n In other words, in other words\n I love you.\n");
}
void cutthroat(){
    printf("Testo di Imagine Dragons - Cutthroat:\n\n");
    printf("I've been waiting patiently\n I built this tower quietly\n And when my well of Wellbutrin is\n Running dry of serotonin\n I can say things I don't mean\n Or maybe it's the truth in me\n I feel it building, bubbling up\n My t-t-time is up\n \n I'm so (Mis-) misunderstood (-un) But I live for this (-der), my money's good (-stood)\n And I came to win (Mis-), so step on up (-un)\n And I promise you—\n Only one of us gon' make it out alive and it's not you (Cutthroat)\n Only one of us\n Only one of us gon' make it out alive and it's not you (Cutthroat)\n Only one of us\n Only one of us gon' make it out alive\n \n I've been making my Gethsemane\n Since I was young, my ancestry (Cutthroat)\n Was marching martyrdom across the\n Radadada dumbla plains of Utah (Cutthroat)\n I can't lie, I've been played\n By powerful pеople who get their way\n But I, in timе, will climb my mountain\n I, in time, will rise\n \n I'm so (Mis-) misunderstood (-un)\n But I live for this (-der), my money's good (-stood)\n");
}
void followyou(){
    printf("Testo di Imagine Dragons - Follow You:\n\n");
    printf("You know I got your number, number all night\n I'm always on your team, I got your back alright\n Taking those, taking those losses if it treats you right\n I want to put you into the spotlight\n If the world would only know what you've been holding back\n Heart attacks every night\n Oh, you know it's not right\n I will follow you way down wherever you may go\n I'll follow you way down to your deepest low\n I'll always be around wherever life takes you\n You know I'll follow you\n Call you up, you've been cryin', cryin' all night\n You're only disappointed in yourself, alright\n Taking those, taking those losses if it treats you right\n I wanna take you into the sunlight\n If the world would only know what you've been holding back\n Heart attacks every night\n Oh, you know it's not right\n I will follow you way down wherever you may go\n I'll follow you way down to your deepest low\n I'll always be around wherever life takes you\n You know I'll follow you\n Ba-da-da-da-da\n Da-da-da-da-da\n Ba-da-da-da-da\n You know I'll follow you\n La-da-da-da-da\n Wherever life takes you, you know I'll follow you\n You're not the type to give yourself enough love\n She live her life, hand in a tight glove\n I wish that I could fix it, I could fix it for you\n But instead I'll be right here comin' through\n (Right here, comin' through)\n I will follow you way down wherever you may go\n I'll follow you way down to your deepest low\n I'll always be around wherever life takes you\n You know I'll follow you\n Ba-da-da-da-da\n Da-da-da-da-da\n Ba-da-da-da-da\n You know I'll follow you\n La-da-da-da-da\n Wherever life takes you, you know I'll follow you\n");
}

int main(){

    UI();
    canzoniDisponibili();
    int user_input;
    printf("-> ");
    scanf("%d", &user_input);
    printf("\n");

        switch (user_input)
        {
        case 0:
            Exit();
            break;
        case 1:
            faded();
            break;
        case 2:
            doiwannaknow();
            break;
        case 3:
            flymetothemoon();
            break;
        case 4:
            cutthroat();
            break;
        case 5:
            followyou();
            break;
        default:
            InputError();
            break;
        }

    return 0;
}