from pygame import *
from Display import *
from Cross_Zero import *
from Square import *
import random

cz=Cross_Zeros()

def Board_Create(board):
    j=0
    for i in range(3):
        j=j+10
        x=[j+1,j+2,j+3]
        board.append(x)

def Board_Reset(board):
    k=0
    for i in range(3):
        for j in range(3):
            k=k+10
            board[i][j]=k

def Check_win(board):
    if board[0][0]==board[0][1] and board[0][1]==board[0][2]:
        return True
    if board[1][0]==board[1][1] and board[1][1]==board[1][2]:
        return True
    if board[2][0]==board[2][1] and board[2][1]==board[2][2]:
        return True
    if board[0][0]==board[1][0] and board[1][0]==board[2][0]:
        return True
    if board[0][1]==board[1][1] and board[1][1]==board[2][1]:
        return True
    if board[0][2]==board[1][2] and board[1][2]==board[2][2]:
        return True
    if board[0][0]==board[1][1] and board[1][1]==board[2][2]:
        return True
    if board[2][0]==board[1][1] and board[1][1]==board[0][2]:
        return True
    else:
        return False

def Human_Zero(board,surface,position):
    if position[0] > 120 and position[0] < 190 and position[1] > 120 and position[1] < 190:
        if board[0][0] != 'O' and board[0][0]!='X':
            board[0][0]='O'
            cz.Zero(surface,fsqr())
            return True
    if position[0] > 220 and position[0] < 320 and position[1] > 140 and position[1] < 190:
        if board[0][1] != 'O' and board[0][1] != 'X':
            board[0][1]='O'
            cz.Zero(surface, ssqr())
            return True
    if position[0] > 330 and position[0] < 430 and position[1] > 140 and position[1] < 190:
        if board[0][2] != 'O' and board[0][2] != 'X':
            board[0][2]='O'
            cz.Zero(surface, tsqr())
            return True
    if position[0] > 120 and position[0] < 190 and position[1] > 250 and position[1] < 320:
        if board[1][0] != 'O' and board[1][0] !='X':
            board[1][0]='O'
            cz.Zero(surface, ffsqr())
            return True
    if position[0] > 220 and position[0] < 320 and position[1] > 220 and position[1] < 320:
        if board[1][1] != 'O' and board[1][1] != 'X':
            board[1][1] = 'O'
            cz.Zero(surface, fftsqr())
            return True
    if position[0] > 320 and position[0] < 430 and position[1] > 220 and position[1] < 320:
        if board[1][2] != 'O' and board[1][2] != 'X':
            board[1][2] = 'O'
            cz.Zero(surface, stsqr())
            return True
    if position[0] > 120 and position[0] < 190 and position[1] > 320 and position[1] < 430:
        if board[2][0] != 'O' and board[2][0] != 'X':
            board[2][0]='O'
            cz.Zero(surface, sssqr())
            return True
    if position[0] > 220 and position[0] < 320 and position[1] > 320 and position[1] < 430:
        if board[2][1] != 'O' and board[2][1] != 'X':
            board[2][1] = 'O'
            cz.Zero(surface, esqr())
            return True
    if position[0] > 320 and position[0] < 430 and position[1] > 320 and position[1] < 430:
        if board[2][2] != 'O' and board[2][2] != 'X':
            board[2][2]='O'
            cz.Zero(surface, nsqr())
            return True
    else:
        return False
def Human_Cross(board,surface,position):
    if position[0] > 120 and position[0] < 190 and position[1] > 120 and position[1] < 190:
        if board[0][0]!='O' and board[0][0]!= 'X':
            board[0][0]='X'
            cz.Cross(surface, fsqr())
            return True
    if position[0] > 220 and position[0] < 320 and position[1] > 140 and position[1] < 190:
        if board[0][1] != 'O' and board[0][1] !='X':
            board[0][1]='X'
            cz.Cross(surface, ssqr())
            return True
    if position[0] > 330 and position[0] < 430 and position[1] > 140 and position[1] < 190:
        if board[0][2] != 'O' and board[0][2] != 'X':
            board[0][2]='X'
            cz.Cross(surface, tsqr())
            return True
    if position[0] > 120 and position[0] < 190 and position[1] > 250 and position[1] < 320:
        if board[1][0] != 'O' and board[1][0] != 'X':
            board[1][0]='X'
            cz.Cross(surface, ffsqr())
            return True
    if position[0] > 220 and position[0] < 320 and position[1] > 220 and position[1] < 320:
        if board[1][1] != 'O' and board[1][1] != 'X':
            board[1][1] = 'X'
            cz.Cross(surface, fftsqr())
            return True
    if position[0] > 320 and position[0] < 430 and position[1] > 220 and position[1] < 320:
        if board[1][2] != 'O' and board[1][2] != 'X':
            board[1][2] = 'X'
            cz.Cross(surface, stsqr())
            return True
    if position[0] > 120 and position[0] < 190 and position[1] > 320 and position[1] < 430:
        if board[2][0] != 'O' and board[2][0] != 'X':
            board[2][0]='X'
            cz.Cross(surface, sssqr())
            return True
    if position[0] > 220 and position[0] < 320 and position[1] > 320 and position[1] < 430:
        if board[2][1] != 'O' and board[2][1] != 'X':
            board[2][1] = 'X'
            cz.Cross(surface, esqr())
            return True
    if position[0] > 320 and position[0] < 430 and position[1] > 320 and position[1] < 430:
        if board[2][2] != 'O' and board[2][2] !='X':
            board[2][2]='X'
            cz.Cross(surface, nsqr())
            return True
    else:
        return False

def Computer_Zero(board,surface):
    random.seed()
    for i in range(3):
        for j in range(3):
            temp=board[i][j]
            if board[i][j]!='O' and board[i][j]!='X':
                board[i][j]='O'
                if Check_win(board)==True:
                    board[i][j]='O'
                    cz.Zero(surface,cz.Position(i,j))
                    return True
                else:
                    board[i][j]=temp
    for i in range(3):
        for j in range(3):
            temp = board[i][j]
            if board[i][j]!='O' and board[i][j]!='X':
                board[i][j]='X'
                if Check_win(board):
                    board[i][j]='O'
                    cz.Zero(surface,cz.Position(i,j))
                    return False
                else:
                    board[i][j]=temp
    put=True
    while put:
        i=random.randint(0,2)
        j=random.randint(0,2)
        if board[i][j]!='O' and board[i][j]!='X':
            board[i][j]='O'
            cz.Zero(surface,cz.Position(i,j))
            put=False
            return False