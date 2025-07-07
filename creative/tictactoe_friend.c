#include<stdio.h>
#include<conio.h>

char board[3][3];
int gameOver = 0;
int tm=0;
int mxtm=9;

int check_win(int i,int j,int player){
    if(tm==mxtm){
        printf("Out of moves!\n");
        gameOver=1;
        // return 0;
    }
    //0 0 0
    //0 0 0
    //0 0 0
    i=i-1;
    j=j-1;
    char p = '2';
    if(player==1) p='1';
    char turn = 'O';
    if(player==1) turn='X';

    if(board[i][0]==turn && board[i][1]==turn && board[i][2]==turn){
        printf("Player %c Won with %c!!!\n",p,turn);
        gameOver=1;
    }
    if(board[0][j]==turn && board[1][j]==turn && board[2][j]==turn){
        printf("Player %c Won with %c!!!\n",p,turn);
        gameOver=1;
    }
    if(i==j){
        // printf("%c\n",turn);
        if(board[0][0]==turn && board[1][1]==turn && board[2][2]==turn){
        printf("Player %c Won with %c!!!\n",p,turn);
        gameOver=1;
        }
    }
    if(i+1+j+1==4){
        // printf("%c\n",turn);
        if(board[0][2]==turn && board[1][1]==turn && board[2][0]==turn){
        printf("Player %c Won with %c!!!\n",p,turn);
        gameOver=1;}
    }

}

void initialize_board(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            board[i][j]='-';
        }
    }
}
void print_board(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }

}
void add_turn(int i,int j,int player){
    int turn = 'O';
    if(player==1) turn ='X';
    board[i-1][j-1]=turn;
    tm++;
    
}
int parse_inp(int i,int j){
    if(i>3 || j>3 || i<=0 || j<=0){
        printf("### Out of bounds! ###\n");
        return 0;
    }else{
    char now = board[i-1][j-1];
    if(now=='-'){
        //pass
    }else{
        printf("### Already Played! ###\n");
        return 0;
    }

        
    }
    
}

int main(){

    printf("Basic Tic Tac Toe Game!\nPlayer 1 -> X\nPlayer 2 -> O\n");
    initialize_board();
    print_board();
    int player1=1;
    char turn = 'X';
    
    while(!gameOver){
        if(player1){

            printf("[%c] Player 1 (row col): ",turn);
            int i=0,j=0;
            scanf("%d %d",&i,&j);
            int ok = parse_inp(i,j);
            if(ok) {
                add_turn(i,j,player1);
                print_board();
                check_win(i,j,player1);
                player1=0;
                turn='O';
            }else{
                // printf("Game detected a bug\n");
                //return 0;
                print_board();
            }
            

        }else{
            printf("[%c] Player 2 (row col): ",turn);
            int i=0,j=0;
            scanf("%d %d",&i,&j);
            int ok = parse_inp(i,j);
            if(ok) {
                add_turn(i,j,player1);
                print_board();
                check_win(i,j,player1);
                player1=1;
                turn='X';
            }else{
                // printf("# Game detected a bug\n");
                //return 0;
                print_board();
            }

        }
    }
    
    

    getch();
    return 0;

}