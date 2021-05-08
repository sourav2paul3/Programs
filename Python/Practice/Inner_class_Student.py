class Student:

    def __init__(self):
        self.name="NULL"
        self.std=0
        self.sec='NULL'
        self.roll=0
        self.marks=self.Mark()

    def Set_Data(self):
        self.name=input('Enter name:')
        self.std=int(input('Enter Class:'))
        self.sec=input('Enter Sec:')
        self.roll = int(input('Enter Roll:'))
        self.marks.Set_Marks()

    def Get_Data(self):
        print('Name:',self.name)
        print('Class:',self.std,'Section:',self.sec)
        print('Roll:',self.roll)
        self.marks.Get_Mark()

    class Mark:
        def __init__(self):
            self.m1=0
            self.m2=0
            self.total=self.m1+self.m2
        def Set_Marks(self):
            self.m1=int(input('Enter marks1:'))
            self.m2=int(input('Enter marks2:'))
            self.total=self.m1+self.m2
        def Get_Mark(self):
            print("MARK1=",self.m1)
            print('MARK2=',self.m2)
            print("TOTAL=",self.total)

s1=Student()
s1.Set_Data()
s1.Get_Data()