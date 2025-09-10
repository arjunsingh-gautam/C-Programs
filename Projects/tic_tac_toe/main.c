// including essential Libraries and Macros (Preprocessor)
#include<stdio.h>
#include<string.h>
// Define color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

// Declaration of global variables
int current_player=1;
int play_position;
char grid[3][3];
//Declaration of functions
void rules();
void game_engine(int player,int position);
char player_mark(int p);
int * position_dict(int p);
void display(char g[3][3]);
int change_player(int cp);
int check_win(char g[3][3], char mark);



int main()
{
    int i=0;
    rules();
    for(i;i<9;i++){
        printf("Player-%d enter your play position to mark it in grid:",current_player);
        scanf("%d",&play_position);
        game_engine(current_player,play_position);
        if (check_win(grid, player_mark(current_player)))
        {
        printf(GREEN"Player-%d wins the game!\n"RESET, current_player);
        break;
        }
        current_player=change_player(current_player);
    }
    if (i==9){
        printf(YELLOW"It's a draw!\n"RESET);
    }
    return 0;
}

// Defining Rules of the Game:
void rules()
{
    
    printf(RED"Welcome to the Tic Tac Toe Game\n"RESET);
    printf(YELLOW"Rules of the Game are as follow:\n"RESET);
    printf("""1. Player 1 will be marked by 'x'\n""");
    printf("""2. Player 2 will be marked by 'o'\n""");
    printf("3. Enter your position no. between{0,8} to mark your character in grid\n");
    printf("The Position grid is as follows:\n");
    printf(BLUE"| 0 | 1 | 2 |\n"RESET);
    printf(BLUE"| 3 | 4 | 5 |\n"RESET);
    printf(BLUE"| 6 | 7 | 8 |\n"RESET);
    printf(MAGENTA"Lets Start Playing...\n"RESET);
}

//player_mark function definition:
char player_mark(int p)
{
    if (p==1){
        return 'X';
    }
    if (p==2){
        return 'O';
    }
}

//Defining Game Engine
void game_engine(int player,int position)
{
    int *pos; // array that store position index
    char mark; // store mark of Player
    mark=player_mark(player);
    pos=position_dict(position);
    //marking
    grid[pos[0]][pos[1]]=mark;
    display(grid);

    

}

//Defining position dictionary
int * position_dict(int p)
{
    int arr0[2]={0,0};
    int arr1[2]={0,1};
    int arr2[2]={0,2};
    int arr3[2]={1,0};
    int arr4[2]={1,1};
    int arr5[2]={1,2};
    int arr6[2]={2,0};
    int arr7[2]={2,1};
    int arr8[2]={2,2};
    int *arrays[] = {arr0,arr1, arr2, arr3,arr4,arr5,arr6,arr7,arr8};
    return arrays[p];

    
}

//Defining display()
void display(char g[3][3])
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %c ",g[i][j]);
        }
        printf("\n");
    }
}

//Defining change_player(int cp)
int change_player(int cp)
{
    if (cp==1){
        return 2;
    }
    if (cp==2){
        return 1;
    }
}

//Defining check_win()
int check_win(char g[3][3], char mark)
{
    // Check rows
    for (int i = 0; i < 3; i++)
        if (g[i][0] == mark && g[i][1] == mark && g[i][2] == mark)
            return 1;

    // Check columns
    for (int i = 0; i < 3; i++)
        if (g[0][i] == mark && g[1][i] == mark && g[2][i] == mark)
            return 1;

    // Check diagonals
    if (g[0][0] == mark && g[1][1] == mark && g[2][2] == mark)
        return 1;
    if (g[0][2] == mark && g[1][1] == mark && g[2][0] == mark)
        return 1;

    return 0; // No win
}
