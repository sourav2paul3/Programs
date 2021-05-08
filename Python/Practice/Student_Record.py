#Program for student record

class Student:
    #Constructor
    def __init__(self):
        self.marks1 = 0
        self.marks2 = 0
        self.total = self.marks1 + self.marks2
        self.name ='NULL'

    #methods:
    def input(self):
        self.name=input('Enter Student name:')
        self.marks1,self.marks2=input('Enter marsk1 and marks2:').split(" ")
        self.marks1=int(self.marks1)
        self.marks2=int(self.marks2)
        self.total=self.marks1+self.marks2

    def output(self):
        print('NAME         MARKS1     MARKS2    TOTAL')
        print(self.name,'      ',self.marks1,'      ',self.marks2,'      ',self.total)

std1=Student()
std1.input()
std1.output()
