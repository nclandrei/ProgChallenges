#include <iostream>
#include <string>

using namespace std;

char a[10][10];
int posKingWhite[2],posKingBlack[2];

// this converts the table in a matrix of characters
// representing the chess board
void matrixString(const string &str){
    int i,j;
    for(i=1;i<9;i++)
        for(j=1;j<9;j++){
            a[i][j] = str[(i-1)*8 + j-1];
            if(a[i][j] == 'K'){
                posKingWhite[0] = i;
                posKingWhite[1] = j;}
            if(a[i][j] == 'k'){
                posKingBlack[0] = i;
                posKingBlack[1] = j;
            }
    }
    
    // we are framing our chess table for when the king is in check
    // because of a pawn (and we are checking out of boundaries)
    for(j=0;j<10;j++)
        a[0][j] = '.';
    for(i=1;i<10;i++)
        a[i][9] = '.';
    for(j=0;j<9;j++)
        a[9][j] = '.';
    for(i=1;i<9;i++)
        a[i][0] = '.';          
}

     
void is_check(const string &table) {
    
    int i,j;
    matrixString(table);
    
    /*for(i=0;i<10;i++){
        for(j=0;j<10;j++)
            cout << a[i][j] << " ";
    cout << endl;
    }
    */
    //cout << posKingWhite[0] << " " << posKingWhite[1] << endl;
    //cout << posKingBlack[0] << " " << posKingBlack[1] << endl;
    
    
    
    // now we are checking if white is in check from pawns
    int flag = 1;
    if((a[posKingWhite[0]-1][posKingWhite[1]-1] == 'p' || a[posKingWhite[0]-1][posKingWhite[1]+1] == 'p' || a[posKingWhite[0]+1][posKingWhite[1]-1] == 'p' ||               a[posKingWhite[0]+1][posKingWhite[1]+1] == 'p') && flag){
       cout << "White" << endl;
        flag = 0;
    }
    
    // check if white is in check from knights
    
    if((a[posKingWhite[0]-2][posKingWhite[1]-1] == 'n' || a[posKingWhite[0]-2][posKingWhite[1]+1] == 'n' || a[posKingWhite[0]-1][posKingWhite[1]-2] == 'n' ||               a[posKingWhite[0]-1][posKingWhite[1]+2] == 'n' || a[posKingWhite[0]+1][posKingWhite[1]-2] == 'n' || a[posKingWhite[0]+1][posKingWhite[1]+2] == 'n' || a[posKingWhite[0]+2][posKingWhite[1]-1] == 'n' ||  a[posKingWhite[0]+2][posKingWhite[1]+1] == 'n') && flag){
       cout << "White" << endl;
        flag = 0;
    }
    
    // checking on the same row and column for rocks and queen
        j=1;
        while(a[posKingWhite[0]][j] == '.' && j<9)
            j++;
        if(a[posKingWhite[0]][j] == 'r' || a[posKingWhite[0]][j] == 'q'){
            cout << "White" << endl;
            flag = 0;
        }
        i=1;
        while(a[i][posKingWhite[0]] == '.' && j<9)
            i++;
        if(a[i][posKingWhite[1]] == 'r' || a[i][posKingWhite[1]] == 'q'){
            cout << "White" << endl;
            flag = 0;
    }
    
    // checking on diagonals for queen and bishops
        i=posKingWhite[0]+1;j=posKingWhite[1]+1;
        while(i<9 && j<9 && a[i][j]=='.')
            {i++;j++;}
        
        if(a[i][j] == 'q' || a[i][j] == 'b' && flag){
            cout << "White" << endl;
            flag = 0;
        }
        i=posKingWhite[0]-1;j=posKingWhite[1]-1;
        while(i>=1 && j>=1 && a[i][j]=='.')
            {i--;j--;}
        
        if(a[i][j] == 'q' || a[i][j] == 'b' && flag){
            cout << "White" << endl;
            flag = 0;
        }

        i=posKingWhite[0]+1;j=posKingWhite[1]-1;
        while(i<9 && j>=1 && a[i][j]=='.')
            {i++;j--;}
        
        if((a[i][j] == 'q' || a[i][j] == 'b') && flag){
            cout << "White" << endl;
            flag = 0;
        }

        i=posKingWhite[0]-1;j=posKingWhite[1]+1;
        while(i>=1 && j<9 && a[i][j]=='.')
            {i--;j++;}
        
        if((a[i][j] == 'q' || a[i][j] == 'b') && flag){
            cout << "White" << endl;
            flag = 0;
        }

    
    
    // now we are checking if BLACK is in check from pawns
    if((a[posKingBlack[0]-1][posKingBlack[1]-1] == 'P' || a[posKingBlack[0]-1][posKingBlack[1]+1] == 'P' || a[posKingBlack[0]+1][posKingBlack[1]-1] == 'P' ||            a[posKingBlack[0]+1][posKingBlack[1]+1] == 'P') && flag){
       cout << "Black" << endl;
        flag = 0;
    }
    
    // check if black is in check from knights
    
    if((a[posKingBlack[0]-2][posKingBlack[1]-1] == 'N' || a[posKingBlack[0]-2][posKingBlack[1]+1] == 'N' || a[posKingBlack[0]-1][posKingBlack[1]-2] == 'N' ||               a[posKingBlack[0]-1][posKingBlack[1]+2] == 'N' || a[posKingBlack[0]+1][posKingBlack[1]-2] == 'N' || a[posKingBlack[0]+1][posKingBlack[1]+2] == 'N' || a[posKingBlack[0]+2][posKingBlack[1]-1] == 'N' ||  a[posKingBlack[0]+2][posKingBlack[1]+1] == 'N') && flag){
       cout << "Black" << endl;
        flag = 0;
    }
    
    // checking on the same row and column for rocks and queen
        j=1;
        while(a[posKingBlack[0]][j] == '.' && j<9)
            j++;
        if(a[posKingBlack[0]][j] == 'R' || a[posKingBlack[0]][j] == 'Q'){
            cout << "Black" << endl;
            flag = 0;
        }
        i=1;
        while(a[i][posKingBlack[0]] == '.' && j<9)
            i++;
        if(a[i][posKingBlack[1]] == 'R' || a[i][posKingBlack[1]] == 'Q'){
            cout << "Black" << endl;
            flag = 0;
    }
    
    // checking on diagonals for queen and bishops
    i=posKingBlack[0]+1;j=posKingBlack[1]+1;
        while(i<9 && j<9 && a[i][j]=='.')
            {i++;j++;}
        
        if((a[i][j] == 'Q' || a[i][j] == 'B') && flag){
            cout << "Black" << endl;
            flag = 0;
        }
        i=posKingBlack[0]-1;j=posKingBlack[1]-1;
    
        while(i>=1 && j>=1 && a[i][j]=='.')
            {i--;j--;}
        
        if((a[i][j] == 'Q' || a[i][j] == 'B') && flag){
            cout << "Black" << endl;
            flag = 0;
        }
        i=posKingBlack[0]+1;j=posKingBlack[1]-1;
    
        while(i<9 && j>=1 && a[i][j]=='.')
            {i++;j--;}
        
        if((a[i][j] == 'Q' || a[i][j] == 'B') && flag){
            cout << "Black" << endl;
            flag = 0;
        }
        i=posKingBlack[0]-1;j=posKingBlack[1]+1;
    
        while(i>=1 && j<9 && a[i][j]=='.')
            {i--;j++;}
        
        if((a[i][j] == 'Q' || a[i][j] == 'B') && flag){
            cout << "Black" << endl;
            flag = 0;
        }
         if(flag)
             cout << "None" << endl;
}
