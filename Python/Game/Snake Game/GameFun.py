import pygame

import Display
from Colour import *
import random

clr=Colour()
pygame.init()

def generatingpizza(surface,positionArray):
    i=int(random.randrange(5,695))
    j=int(random.randrange(35,595))
    for k in positionArray:
        if i!=k[0] and i!=k[0]+10  and j!=k[1] and j!=k[1]+10:
            Display.Display_pizza(surface, (i, j))
            return ((i,j))

def extractDigits(number):
    if number > -1:
        digits = []
        i = 0
        while(number/10 != 0):
            digits.append(number%10)
            number = int(number/10)

        digits.append(number%10)
        for i in range(len(digits),5):
            digits.append(0)
        digits.reverse()
        return digits