import pygame
from Colour import *
from Square import *
from Display import *


clr=Colour()
class Cross_Zeros:
    def Zero(self,surface, position,):
        dot = pygame.font.SysFont("Arial", 50,True)
        dt = dot.render('O', 1, clr.red())
        surface.blit(dt, position)

    def Cross(self,surface, position):
        dot = pygame.font.SysFont("Arial", 50,True,)
        dt = dot.render('X', 1, clr.ivory())
        surface.blit(dt, position)

    def Position(selfi,i,j):
        if i==0:
            if j==0:
                return fsqr()
            if j==1:
                return ssqr()
            if j==2:
                return tsqr()
        if i==1:
            if j==0:
                return ffsqr()
            if j==1:
                return fftsqr()
            if j==2:
                return stsqr()
        if i==2:
            if j==0:
                return sssqr()
            if j==1:
                return esqr()
            if j==2:
                return nsqr()

    def putZero(self,surface,position):
        if position[0]>120 and position[0]<190 and position[1]>120 and position[1]<190:
            self.Zero(surface, fsqr())
            return 0
        if position[0]>220 and position[0]<320 and position[1]>140 and position[1]<190:
            self.Zero(surface, ssqr())
            return 0
        if position[0]>330 and position[0]<430 and position[1]>140 and position[1]<190:
            self.Zero(surface, tsqr())
            return 0
        if position[0]>120 and position[0]<190 and position[1]>250and position[1]<320:
            self.Zero(surface, ffsqr())
            return 0
        if position[0]>220 and position[0]<320 and position[1]>220 and position[1]<320:
            self.Zero(surface, fftsqr())
            return 0
        if position[0]>320 and position[0]<430 and position[1]>220 and position[1]<320:
            self.Zero(surface, stsqr())
            return 0
        if position[0]>120 and position[0]<190 and position[1]>320 and position[1]<430:
            self.Zero(surface, sssqr())
            return 0
        if position[0]>220 and position[0]<320 and position[1]>320 and position[1]<430:
            self.Zero(surface, esqr())
            return 0
        if position[0]>320 and position[0]<430 and position[1]>320 and position[1]<430:
            self.Zero(surface, nsqr())
            return 0
        else:
            return 1

    def putCross(self,surface,position):
        if position[0]>120 and position[0]<190 and position[1]>120 and position[1]<190:
            self.Cross(surface, fsqr())
            return 1
        if position[0]>220 and position[0]<320 and position[1]>140 and position[1]<190:
            self.Cross(surface, ssqr())
            return 1
        if position[0]>330 and position[0]<430 and position[1]>140 and position[1]<190:
            self.Cross(surface, tsqr())
            return 1
        if position[0]>120 and position[0]<190 and position[1]>250and position[1]<320:
            self.Cross(surface, ffsqr())
            return 1
        if position[0]>220 and position[0]<320 and position[1]>220 and position[1]<320:
            self.Cross(surface, fftsqr())
            return 1
        if position[0]>320 and position[0]<430 and position[1]>220 and position[1]<320:
            self.Cross(surface, stsqr())
            return 1
        if position[0]>120 and position[0]<190 and position[1]>320 and position[1]<430:
            self.Cross(surface, sssqr())
            return 1
        if position[0]>220 and position[0]<320 and position[1]>320 and position[1]<430:
            self.Cross(surface, esqr())
            return 1
        if position[0]>320 and position[0]<430 and position[1]>320 and position[1]<430:
            self.Cross(surface, nsqr())
            return 1
        else:
            return 0