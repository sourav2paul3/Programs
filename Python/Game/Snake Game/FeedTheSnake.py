from Colour import *
from Display import *
from GameFun import *

pygame.init()
clr=Colour()

def Main():
    x = 400
    y = 300
    bestscore=0
    score=0
    speed = 10
    left=False
    right=False
    up=True
    down=True
    screen=Displat_create()
    Display_start(screen)
    run=True
    pause = False
    die=pygame.mixer.Sound('sounds\die.wav')
    eat=pygame.mixer.Sound('sounds\jump.wav')
    badge=pygame.image.load('images\medal (1).png')
    badge=pygame.transform.scale(badge,(25,25))
    snake_head = pygame.image.load('images\Snakehead.png')
    snake_head = pygame.transform.scale(snake_head, (30, 30))
    positionsnake = [(390, 300), (380, 300), (370, 300), (360, 300), (350, 300),(340,300),(330,300),(320,300)]
    positionsnake.sort()
    headpos=(x,y)
    pizzapos=(0,0)
    eaten=False
    direction = 'R'
    angle=90
    start=True
    back=False
    gameover=False
    FPS=25
    FPSCLK=pygame.time.Clock()
    while run:
        FPSCLK.tick(FPS)
        for event in pygame.event.get():
            if event.type==pygame.QUIT:
                run=False
            if event.type==pygame.MOUSEBUTTONDOWN:
                mousepos=pygame.mouse.get_pos()
                #Starting Screen
                if mousepos[0]>210 and mousepos[0]<250 and mousepos[1]>=430 and mousepos[1]<=490 and start==True:
                    screen.blit(badge, (10, 0))
                    Display_scoretxt(screen,bestscore,(10,0))
                    Display_scoretxt(screen, score, (620, 0))
                    pizzapos=Display_game(screen,snake_head,headpos,positionsnake,angle)
                    positionsnake.append(headpos)
                    pygame.display.update()
                    start=False
                #Pause Screen
                if mousepos[0] > 340 and mousepos[0] < 360 and mousepos[1] >= 5 and mousepos[1] <= 25 and start == False and gameover==False:
                    pause=True
                    play_button = pygame.image.load(r'images\icons8-circled-play-64.png')
                    play_button=pygame.transform.scale(play_button,(70,70))
                    rect = play_button.get_rect()
                    rect.center=(350,300)
                    screen.blit(play_button,rect)
                    pygame.draw.rect(screen,clr.lavender(),(339,2,25,26))
                    pygame.display.update()
                if mousepos[0] > 325 and mousepos[0] < 375 and mousepos[1] >= 275 and mousepos[1] <= 325 and start == False:
                    pause=False
                    escape=0
                #Credit Screen
                if mousepos[0] > 360 and mousepos[0] < 410 and mousepos[1] >= 430 and mousepos[1] <= 490 and start==True:
                    Display_credit(screen)
                    back=True
                #Credit To Start
                if mousepos[0] > 320 and mousepos[0] < 360 and mousepos[1] >= 460 and mousepos[1] <= 510 and back==True:
                    Display_start(screen)
                    start=True
                    back=False
                #Replay
                if mousepos[0] > 240 and mousepos[0] < 290 and mousepos[1] >= 460 and mousepos[1] <= 510 and gameover==True:
                    screen.fill(clr.lavender())
                    x = 400
                    y = 300
                    positionsnake = [(390, 300), (380, 300), (370, 300), (360, 300), (350, 300), (340, 300), (330, 300),(320, 300)]
                    positionsnake.sort()
                    headpos = (x, y)
                    eaten = False
                    speed = 10
                    left = False
                    right = False
                    up = True
                    down = True
                    positionsnake.append(headpos)
                    direction = 'R'
                    angle = 90
                    start = False
                    back = False
                    pause=False
                    gameover = False
                    score=0
                    screen.blit(badge, (10, 0))
                    Display_score(screen, bestscore, (10, 0))
                    Display_score(screen, score, (600, 0))
                    pizzapos = Display_game(screen, snake_head, headpos, positionsnake,angle)
                #Gameover To Start
                if mousepos[0] >390 and mousepos[0] < 440 and mousepos[1] >= 460 and mousepos[1] <= 500 and gameover==True:
                    screen.fill(clr.lavender())
                    x = 400
                    y = 300
                    positionsnake = [(390, 300), (380, 300), (370, 300), (360, 300), (350, 300), (340, 300), (330, 300),(320, 300)]
                    positionsnake.sort()
                    headpos = (x, y)
                    eaten = False
                    direction = 'R'
                    angle = 90
                    speed = 10
                    left = False
                    right = False
                    up = True
                    down = True
                    back = False
                    pause=False
                    Display_start(screen)
                    start=True
                    bestscore=0
                    score=0
                    gameover=False
                if mousepos[0] > 510 and mousepos[0] < 550 and mousepos[1] >= 430 and mousepos[1] <= 490 and start==True:
                    run = False
        if start==False and gameover==False:
            keys = pygame.key.get_pressed()
            if keys[pygame.K_SPACE] and pause == True:
                pause = False
            if keys[pygame.K_ESCAPE] and pause==False:
                pause = True
                play_button = pygame.image.load(r'images\icons8-circled-play-64.png')
                play_button = pygame.transform.scale(play_button, (70, 70))
                rect = play_button.get_rect()
                rect.center = (350, 300)
                screen.blit(play_button, rect)
                pygame.draw.rect(screen, clr.lavender(), (339, 2, 25, 26))
                pygame.display.update()
            if keys[pygame.K_RIGHT] and left ==True and right == True and pause==False:
                right=False
                left=False
                up=True
                down=True
                direction='R'
                angle=90
            if keys[pygame.K_LEFT] and left==True and right==True and pause==False:
                right =False
                left = False
                up = True
                down = True
                direction = 'L'
                angle=270
            if keys[pygame.K_UP] and up==True and down==True and pause==False:
                right = True
                left = True
                up = False
                down = False
                direction = 'U'
                angle=180
            if keys[pygame.K_DOWN] and up==down==True and pause ==False:
                right = True
                left = True
                up = False
                down = False
                direction = 'D'
                angle=0
            if pause==False:
                if direction=='R':
                    x += speed
                if direction=='L':
                    x -= speed
                if direction=='U':
                    y -= speed
                if direction=='D':
                    y += speed
            headpos=(x,y)
            head_rect=snake_head.get_rect()
            head_rect.center=headpos
            if head_rect.collidepoint(pizzapos[0],pizzapos[1]):
                eat.play()
                score +=5
                pizzapos=generatingpizza(screen,positionsnake)
                eaten=True
            if eaten==False and pause==False:
                positionsnake.pop(0)
            if eaten==True:
                eaten=False
            if headpos[0]<=0 or headpos[0]>=700 or headpos[1]<=30 or headpos[1]>=600 or headpos in positionsnake and pause==False:
                die.play()
                if bestscore<score:
                    bestscore=score
                screen.blit(badge,(300,100))
                Display_gameover(screen)
                Display_score(screen, bestscore, (300, 100))
                Display_score(screen, score, (300, 150))
                gameover=True
            if gameover!=True and pause==False:
                screen.fill(clr.lavender())
                Display_pause(screen,(350,15))
                Display_scoretxt(screen,score,(620,0))
                screen.blit(badge, (10,0))
                Display_scoretxt(screen, bestscore, (50, 0))
                pygame.draw.line(screen,clr.lightgray(),(0,30),(700,30),3)
                Display_snake_body(screen,positionsnake)
                positionsnake.append(headpos)
                Display_snake_head(screen,snake_head,headpos,angle)
                Display_pizza(screen,pizzapos)
            pygame.display.update()

Main()