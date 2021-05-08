import pygame
from Colour import *
from GameFun import *

pygame.init()
clr=Colour()
def Displat_create():
    length=600
    height=700
    screen_size=(height,length)
    screen=pygame.display.set_mode(screen_size)
    screen_colour=clr.lavender()
    screen.fill(screen_colour)
    pygame.display.set_caption("Feed The Snake")
    return screen

def Display_start(surface):
    surface.fill(clr.lavender())
    snake_imeage=pygame.image.load("images\Snake.png")
    snake_imeage=pygame.transform.scale(snake_imeage,(250,250))
    surface.blit(snake_imeage,(250,50))
    title = text55().render("Feed The Snake", 1, clr.goldenrod())
    surface.blit(title, (200, 300))
    play=pygame.image.load('images\icons8-circled-play-64.png')
    surface.blit(play, (200, 430))
    credit=pygame.image.load('images\icons8-name-64.png')
    surface.blit(credit, (350, 430))
    quit=pygame.image.load('images\icons8-shutdown-64.png')
    surface.blit(quit, (500, 430))
    pygame.display.update()

def Display_pizza(surface,position):
    pizza = pygame.image.load('images\pizza-png-18.png')
    pizza = pygame.transform.scale(pizza, (25, 25))
    rect=pizza.get_rect()
    rect.center=(position)
    surface.blit(pizza, rect)

def Display_snake_head(surface,image,position,angle):
    image = pygame.transform.rotate(image,angle)
    rect = image.get_rect()
    rect.center = (position)
    surface.blit(image, rect)

def Display_snake_body(surface,positionArray):
    for i in positionArray:
        pygame.draw.circle(surface,clr.green(),i,10)

def Display_pause(surface,position):
    pause = pygame.image.load(r'images\icons8-pause-button-64.png')
    pause = pygame.transform.scale(pause, (25, 25))
    rect = pause.get_rect()
    rect.center = (position)
    surface.blit(pause,rect)

def Display_game(surface,snakeHeadImage,position_head,positioArray,angle):
    Display_snake_body(surface, positioArray)
    Display_snake_head(surface,snakeHeadImage,position_head,angle)
    return generatingpizza(surface,positioArray)

def Display_gameover(surface):
    gameovr = pygame.image.load('images\GameOver.png')
    gameovr=pygame.transform.scale(gameovr,(300,300))
    surface.blit(gameovr, (200, 150))
    replay=pygame.image.load('images\icons8-replay-64.png')
    surface.blit(replay, (240, 450))
    Display_back (surface,(390,450))

def Display_credit(surface):
    surface.fill(clr.lavender())
    name=text55().render('Sourav Paul',1,clr.goldenrod())
    surface.blit(name,(200,100))

    email1 = text55().render("Souraav2paul@gmail.com", 1, clr.goldenrod())
    surface.blit(email1, (80, 190))

    email2 = text55().render("Souraav2paul@outlook.com", 1, clr.goldenrod())
    surface.blit(email2,(60,270))

    phone = text55().render("8967121565//7001040344", 1, clr.goldenrod())
    surface.blit(phone, (100, 350))
    Display_back(surface,(320,450))
    pygame.display.update()

def Display_back(surface,position):
    back=pygame.image.load('images\icons8-logout-rounded-left-64.png')
    surface.blit(back,position)

def Display_score(surface,score,startingpos):
    x=startingpos[0]
    y=startingpos[1]
    score=str(score)
    for s in score:
        x=x+25
        startingpos=(x,y)
        if s=='0':
           surface.blit(Zero(),startingpos)
        if s=='1':
           surface.blit(One(),startingpos)
        if s=='2':
           surface.blit(Two(),startingpos)
        if s=='3':
           surface.blit(Three(),startingpos)
        if s=='4':
           surface.blit(Four(),startingpos)
        if s=='5':
           surface.blit(Five(),startingpos)
        if s=='6':
           surface.blit(Six(),startingpos)
        if s == '7':
            surface.blit(Seven(), startingpos)
        if s=='8':
           surface.blit(Eight(),startingpos)
        if s=='9':
           surface.blit(Nine(),startingpos)

def Zero():
    zero = pygame.image.load(r'images\0-Number-PNG-Royalty-Free-High-Quality.png')
    zero = pygame.transform.scale(zero, (15, 15))
    return zero

def One():
    one = pygame.image.load(r'images\1-Number-PNG-Royalty-Free-High-Quality.png')
    one = pygame.transform.scale(one, (15, 15))
    return one

def Two():
    two = pygame.image.load(r'images\2-Number-PNG-Royalty-Free-High-Quality.png')
    two = pygame.transform.scale(two, (15, 15))
    return two

def Three():
    three = pygame.image.load(r'images\3-Number-PNG-Royalty-Free-Image.png')
    three = pygame.transform.scale(three, (15, 15))
    return three

def Four():
    four = pygame.image.load(r'images\4-Number-PNG-Royalty-Free-High-Quality.png')
    four = pygame.transform.scale(four, (15, 15))
    return four

def Five():
    five = pygame.image.load(r'images\5-Number-PNG-Royalty-Free-High-Quality.png')
    five = pygame.transform.scale(five, (15, 15))
    return five

def Six():
    six = pygame.image.load(r'images\6-Number-PNG-Royalty-Free-High-Quality.png')
    six = pygame.transform.scale(six, (15, 15))
    return six

def Seven():
    seven = pygame.image.load(r'images\7-Number-PNG-Royalty-Free-High-Quality.png')
    seven = pygame.transform.scale(seven, (15, 15))
    return seven

def Eight():
    eight = pygame.image.load(r'images\8-Number-PNG-Royalty-Free-High-Quality.png')
    eight = pygame.transform.scale(eight, (15, 15))
    return eight

def Nine():
    nine = pygame.image.load(r'images\9-Number-PNG-Royalty-Free-Image.png')
    nine = pygame.transform.scale(nine, (15, 15))
    return nine

def Display_scoretxt(surface,score,pos):
    scr = score
    scr=str(scr)
    name=Digitaltext36().render(scr,1,clr.black())
    surface.blit(name,pos)

def Digitaltext36():
    digit = pygame.font.Font(r'Fonts\digital-7 mono.ttf',25)
    return digit

def text36():
    text = pygame.font.SysFont('arial', 36, 1, )
    return text
def text55():
    text = pygame.font.SysFont('arial', 55, 1,1)
    return text
def text20():
    text = pygame.font.SysFont('arial', 20, 1, )
    return text