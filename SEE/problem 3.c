#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    float height,integrity, interest,ability,discipline;
} Fritacole;

typedef struct {
   
    int num_fritacoles;
    int points;
    int fouls;
} Team;

typedef struct {    
    Team team1;
    Team team2;
} Game;

int compare_fritacoles(Fritacole *a,Fritacole *b) {
    int result;
      
      printf("Enter the value of heights");
      scanf("%f",a->height,b->height);
      return result= a->height - b->height;
}
void output(int result)
{
    printf("%d ",result);
}

int compare_teams(Team a, Team b) {
    return a.points - b.points;
}

int verify_win(Game game) {
    if (compare_teams(game.team1, game.team2) > 0) {
        return 1;
    } else if (compare_teams(game.team1, game.team2) < 0) {
        return -1;
    } else {
        return 0;
    }
}

void fritacole_to_string(Fritacole f, char *str) {
    sprintf(str, "Name: %s, Height: %d, Integrity: %d, Interest: %d, Ability: %d, Discipline: %d", f.name, f.height, f.integrity, f.interest, f.ability, f.discipline);
}

Fritacole string_to_fritacole(char *str) {
    Fritacole f;
    sscanf(str, "Name: %s, Height: %d, Integrity: %d, Interest: %d, Ability: %d, Discipline: %d", f.name, &f.height, &f.integrity, &f.interest, &f.ability, &f.discipline);
    return f;
}

int main() {
   Fritacole a,b;
   int result;
   result=compare_fritacoles( &a,&b);
   output(result);
    return 0;
}
