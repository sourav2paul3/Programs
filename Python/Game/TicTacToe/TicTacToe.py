from Display import *
from pygame import *
from  Colour import *
from Game_Fun import *
from Cross_Zero import *
from Square import  *

def Main():
    screen = Display_Create()
    Display(screen)
    plr1=plr2=0
    PLR=(plr1,plr2)
    plr1s=plr2s=0
    PLRS = (plr1s, plr2s)
    x=0
    single = 0
    double = 0
    board = []
    Board_Create(board)
    cz = Cross_Zeros()
    flag = 0
    rnd = 0
    start = False
    run = True
    win = False
    scr=0
    doublecnt=0
    Menu=True
    while run:
        for event in pygame.event.get():
            cnt = 0
            if event.type == pygame.QUIT:
                run = False
            if event.type == pygame.MOUSEBUTTONDOWN:
                pos = pygame.mouse.get_pos()
                #Singleplayer Menu
                if pos[0]>300 and pos[0]<480 and pos[1]>160 and pos[1]<200 and Menu==True:
                    pos=(600,175)
                    Menu=False
                #Double Player Menu
                if pos[0]>290 and pos[0]<490 and pos[1]>200 and pos[1]<240 and Menu==True:
                    pos=(600,220)
                    Menu=False
                #Exit Menu
                if pos[0]>360 and pos[0]<420 and pos[1]>310 and pos[1]<340 and Menu==True:
                    pos=(520,320)
                #Exit Display
                if pos[0] >= 500 and pos[0] <= 550 and pos[1] >= 300 and pos[1] <= 340 and start == False:
                    screen.fill(clr.black())
                    screen.blit(End(), (280, 220))
                    display.update()
                    pygame.time.delay(1500)
                    run = False
                #Credit Display
                if pos[0] >= 340and pos[0] <= 430 and pos[1] >= 260 and pos[1] <= 290:
                    Display_Credit(screen)
                    Menu=True
                if pos[0] > 600 and pos[0] < 630 and pos[1] > 360 and pos[1] < 390 and Menu == True:
                    screen.fill(clr.black())
                    Display(screen)
                #Score Display
                if pos[0] >= 500 and pos[0] <= 580 and pos[1] >= 260 and pos[1] <= 290 and scr==0:
                    Display_Score(screen,PLR,PLRS,x)
                    scr=1
                if pos[0] > 600 and pos[0] < 630 and pos[1] > 360 and pos[1] < 390 and scr==1:
                    scr=0
                    screen.fill(clr.black())
                    Display_after(screen,board)

                #Single Player
                if pos[0] >= 500 and pos[0] <= 680 and pos[1] >= 160 and pos[1] <= 190 and start == False:
                    plr1 = plr2 = 0
                    PLR = (plr1, plr2)
                    x=0
                    Board_Reset(board)
                    rnd = 0
                    Display_Update(screen, board)
                    screen.blit(You(), (500, 200))
                    display.update()
                    start = True
                    single=1
                    double=0
                    flag = 0
                if pos[0] >= 100 and pos[0] <= 450 and pos[1] >= 100 and pos[1] <= 450 and single==1:
                    if rnd <= 9 and start == True and flag==0:
                        if Human_Cross(board, screen, pos):
                            Display_Update(screen, board)
                            screen.blit(Computer(), (500, 200))
                            display.update()
                            flag = cz.putCross(screen, pos)
                            rnd += 1
                        win = Check_win(board)
                        if win == True:
                            Display_after(screen, board)
                            screen.blit(Playerwin(1), (500, 350))
                            display.update()
                            start = False
                            single=0
                            plr1s += 1
                            PLRS = (plr1s, plr2s)
                        display.update()
                    if rnd < 9 and start == True and flag==1:
                        flag=0
                        win=Computer_Zero(board, screen)
                        Display_Update(screen, board)
                        screen.blit(You(), (500, 200))
                        rnd += 1
                        display.update()
                        if win== True:
                            Display_after(screen, board)
                            screen.blit(Playerwin(3), (500, 350))
                            start = False
                            single=0
                            plr2s +=1
                            PLRS=(plr1s,plr2s)
                    display.update()
                    if rnd == 9 and single==1 and double==0 and win == False:
                        Display_after(screen, board)
                        screen.blit(Playerwin(0), (500, 350))
                        start = False
                        single = 0
                    display.update()

                    #Double PLayer
                if pos[0] >= 500 and pos[0] <= 680 and pos[1] >= 200 and pos[1] <= 240 and start == False:
                    plr1s=plr2s=0
                    PLRS=(plr1s,plr2s)
                    x=1
                    Board_Reset(board)
                    rnd=0
                    Display_Update(screen, board)
                    if doublecnt==0 and start==False:
                        screen.blit(player1(), (500, 200))
                        doublecnt=1
                        start = True
                        flag=0
                    if doublecnt==1 and start==False:
                        screen.blit(player2(), (500, 200))
                        doublecnt=0
                        start = True
                        flag=1
                    display.update()
                    double=1
                    single=0
                    cnt=0
                if pos[0] >= 100 and pos[0] <= 450 and pos[1] >= 100 and pos[1] <= 450 and double==1:
                    if cnt == 0 and flag == 0 and rnd <= 9 and start == True:
                        if Human_Cross(board, screen, pos):
                            Display_Update(screen, board)
                            screen.blit(player2(), (500, 200))
                            display.update()
                            flag = cz.putCross(screen, pos)
                            rnd += 1
                            cnt = 1
                        win = Check_win(board)
                        if win == True:
                            Display_after(screen, board)
                            screen.blit(Playerwin(1), (500, 350))
                            display.update()
                            start = False
                            double=0
                            plr1 +=1
                            PLR=(plr1,plr2)
                    display.update()
                    if cnt == 0 and flag == 1 and rnd <= 9 and start == True:
                        if Human_Zero(board, screen, pos):
                            Display_Update(screen, board)
                            screen.blit(player1(), (500, 200))
                            display.update()
                            flag = cz.putZero(screen, pos)
                            rnd += 1
                        win = Check_win(board)
                        if win == True:
                            Display_after(screen, board)
                            screen.blit(Playerwin(2), (500, 350))
                            start = False
                            double=0
                            plr2 +=1
                            PLR =(plr1,plr2)
                    display.update()
                if rnd == 9 and single==0 and double==1 and win == False:
                    Display_after(screen, board)
                    screen.blit(Playerwin(0), (500, 350))
                    start = False
                    display.update()
                    double=0

Main()