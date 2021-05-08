from pygame import *
from Cross_Zero import *

pygame.init()
clr=Colour()
cz=Cross_Zeros()
def Display_Create():
    length = 800
    heigth = 500
    scr_size = (length, heigth)
    screen = pygame.display.set_mode(scr_size)
    screen_colour = clr.black()
    screen.fill(screen_colour)
    pygame.display.set_caption("Tic-Tac-Toe")
    return screen

def Display_Score(surface,player1,player2,x):
    surface.fill(clr.black())
    title = text36().render("TIC-TAC-TOE", 1, clr.red())
    surface.blit(title, (280, 20))
    dev = text20().render("Developed By ", 1, clr.lime())
    surface.blit(dev, (250, 60))
    signt = sign().render("Sourav Paul", 1, clr.lime())
    surface.blit(signt, (370, 60))
    if x==1:
        plr1 = str(player1[0])
        plr2 = str(player1[1])
        Player1 = text36().render("Player1:", 1, clr.ivory())
        surface.blit(Player1, (250, 220))
        Player1Scr = text36().render(plr1, 1, clr.slateblue())
        surface.blit(Player1Scr, (400, 220))
        Player2 = text36().render("Player2:", 1, clr.red())
        surface.blit(Player2, (250, 290))
        Player2Scr = text36().render(plr2, 1, clr.slateblue())
        surface.blit(Player2Scr, (400, 290))
    if x==0:
        plr1 = str(player2[0])
        plr2 = str(player2[1])
        Player1 = text36().render("You:", 1, clr.ivory())
        surface.blit(Player1, (290, 220))
        Player1Scr = text36().render(plr1, 1, clr.slateblue())
        surface.blit(Player1Scr, (400, 220))
        Player2 = text36().render("Computer:", 1, clr.red())
        surface.blit(Player2, (210, 290))
        Player2Scr = text36().render(plr2, 1, clr.slateblue())
        surface.blit(Player2Scr, (400, 290))
    surface.blit(Back(), (600, 360))
    display.update()

def Display(surface):
    surface.fill(clr.black())
    title = text36().render("TIC-TAC-TOE", 1, clr.red())
    surface.blit(title, (280, 20))
    dev = text20().render("Developed By ", 1, clr.lime())
    surface.blit(dev, (250, 60))
    signt = sign().render("Sourav Paul", 1, clr.lime())
    surface.blit(signt, (370, 60))
    start = text36().render("Single Player", 1, clr.lime())
    surface.blit(start, (300, 150))
    start = text36().render("Double Player", 1, clr.lime())
    surface.blit(start, (290, 200))
    start = text36().render("Credit", 1, clr.lime())
    surface.blit(start, (340, 250))
    start = text36().render("Exit", 1, clr.lime())
    surface.blit(start, (360, 300))
    pygame.display.update()

def Display_Credit(surface):
    surface.fill(clr.black())
    surface.blit(Credit(), (280, 50))
    surface.blit(Email1(), (150, 150))
    surface.blit(Email2(),(150,220))
    surface.blit(Mobile(),(150,290))
    surface.blit(Back(),(600,360))
    pygame.display.update()

def Display_Update(surface,board):
    surface.fill(clr.black())
    pygame.draw.line(surface, clr.blue(), (100, 100), (450, 100), 2)
    pygame.draw.line(surface, clr.blue(), (100, 100), (100, 450), 2)
    pygame.draw.line(surface, clr.blue(), (100, 450), (450, 450), 2)
    pygame.draw.line(surface, clr.blue(), (450, 100), (450, 450), 2)

    pygame.draw.line(surface, clr.blue(), (216, 100), (216, 450), 2)
    pygame.draw.line(surface, clr.blue(), (340, 100), (340, 450), 2)

    pygame.draw.line(surface, clr.blue(), (100, 216), (450, 216), 2)
    pygame.draw.line(surface, clr.blue(), (100, 340), (450, 340), 2)

    title = text36().render("TIC-TAC-TOE", 1, clr.red())
    surface.blit(title, (500, 20))
    dev = text20().render("Developed By ", 1, clr.lime())
    surface.blit(dev, (470, 60))
    signt = sign().render("Sourav Paul", 1, clr.lime())
    surface.blit(signt, (580, 60))
    for i in range(3):
        for j in range(3):
            if board[i][j]=='X':
                cz.Cross(surface,cz.Position(i,j))
            if board[i][j]=='O':
                cz.Zero(surface,cz.Position(i,j))
            display.update()

def Display_after(surface,board):
    surface.fill(clr.black())
    pygame.draw.line(surface, clr.blue(), (100, 100), (450, 100), 2)
    pygame.draw.line(surface, clr.blue(), (100, 100), (100, 450), 2)
    pygame.draw.line(surface, clr.blue(), (100, 450), (450, 450), 2)
    pygame.draw.line(surface, clr.blue(), (450, 100), (450, 450), 2)

    pygame.draw.line(surface, clr.blue(), (216, 100), (216, 450), 2)
    pygame.draw.line(surface, clr.blue(), (340, 100), (340, 450), 2)

    pygame.draw.line(surface, clr.blue(), (100, 216), (450, 216), 2)
    pygame.draw.line(surface, clr.blue(), (100, 340), (450, 340), 2)

    title = text36().render("TIC-TAC-TOE", 1, clr.red())
    surface.blit(title, (500, 20))
    dev = text20().render("Developed By ", 1, clr.lime())
    surface.blit(dev, (470, 60))
    signt = sign().render("Sourav Paul", 1, clr.lime())
    surface.blit(signt, (580, 60))
    start = text36().render("Single Player", 1, clr.lime())
    surface.blit(start, (500, 150))
    start = text36().render("Double Player", 1, clr.lime())
    surface.blit(start, (500, 200))
    start = text36().render("Score", 1, clr.lime())
    surface.blit(start, (500, 250))
    start = text36().render("Exit", 1, clr.lime())
    surface.blit(start, (500, 300))
    for i in range(3):
        for j in range(3):
            if board[i][j]=='X':
                cz.Cross(surface,cz.Position(i,j))
            if board[i][j]=='O':
                cz.Zero(surface,cz.Position(i,j))
            display.update()

def End():
    End = pygame.font.SysFont("Arial", 60,1)
    end = End.render("Game Over", 1, clr.blue())
    return end
def Credit():
    Credit = pygame.font.SysFont("Arial", 55)
    credit = Credit.render("Sourav Paul", 1, clr.chartreuse())
    return credit
def Email1():
    Email = pygame.font.SysFont("Arial", 55)
    email = Email.render("Souraav2paul@gmail.com", 1, clr.peru())
    return email
def Email2():
    Email = pygame.font.SysFont("Arial", 55)
    email = Email.render("Souraav2paul@outlook.com", 1, clr.goldenrod())
    return email
def Mobile():
    Phone = pygame.font.SysFont("Arial", 55)
    phone =Phone.render("8967121565//7001040344", 1, clr.goldenrod())
    return phone
def text36():
    text = pygame.font.SysFont('arial', 36,1,)
    return text
def Back():
    Back=pygame.font.SysFont('Arial',30)
    back=Back.render("Back",1,clr.silver())
    return back
def text20():
    text1 = pygame.font.SysFont("Arial", 20)
    return text1
def sign():
    sign=pygame.font.SysFont("times new roman",25,0,1)
    return sign
def player1():
    player=pygame.font.SysFont("Arial",25)
    player1=player.render("Player1's Turn(X)",1,clr.ivory())
    return player1
def player2():
    player=pygame.font.SysFont("Arial",25)
    player2=player.render("Player2's Turn(O)",1,clr.red())
    return player2
def Computer():
    player=pygame.font.SysFont("Arial",25)
    computer=player.render("My Turn(O)",1,clr.lime())
    return computer
def You():
    player=pygame.font.SysFont("Arial",25)
    you=player.render("Your Turn(X)",1,clr.olivedrab())
    return you
def Playerwin(x):
    if x==1:
        player = pygame.font.SysFont("Arial", 40)
        player1 = player.render("Player1 Win", 1, clr.blue())
        return player1
    if x==2:
        player = pygame.font.SysFont("Arial", 40)
        player1 = player.render("Player2 Win", 1, clr.red())
        return player1
    if x==3:
        player = pygame.font.SysFont("Arial", 40)
        computer = player.render("Computer Win", 1, clr.blue())
        return computer
    if x==0:
        player = pygame.font.SysFont("Arial", 40)
        player1 = player.render("Match Draw", 1, clr.gray())
        return player1