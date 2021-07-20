import maya.cmds as cmds
cmds.polySphere(r=6,n='center')#Create a circular base
cmds.scale(1,0.25,1)#Squeeze the base to a flat circle
cmds.polySphere(r=4,n='center')#Create a circle above
cmds.scale(1,0.25,1)#Squeeze the base to a flat circle
cmds.move(0,16,0)#Put it high y=16
obj = cmds.polySphere(r=1,n='center')#Create a circle put it on top
cmds.move(0,22,0, obj[0])#Put it high y=22
cmds.select(obj[0]+'.rotatePivot')#ทำให้ไม่หมุนรอบตัวเองเปลียนจุดหมุน
cmds.move(0,0,0)#ทำให้ไม่หมุนรอบตัวเองเปลียนจุดหมุน
cmds.setKeyframe(obj[0],at='ry',v=0,t=1)
cmds.setKeyframe(obj[0],at='ry',v=-45,t=13)
cmds.setKeyframe(obj[0],at='ry',v=-90,t=26)
cmds.setKeyframe(obj[0],at='ry',v=-135,t=39)
cmds.setKeyframe(obj[0],at='ry',v=-180,t=52)
cmds.setKeyframe(obj[0],at='ry',v=-225,t=65)
cmds.setKeyframe(obj[0],at='ry',v=-270,t=78)
cmds.setKeyframe(obj[0],at='ry',v=-315,t=91)
cmds.setKeyframe(obj[0],at='ry',v=-360,t=125)
for i in range(36):#Create a cylindrical loop around the circular base.
    cmds.polyCylinder(r=0.5,h=2, n='myCylinder#')#Create a cylinder
    cmds.move(5,0,0)#Placed in the position x=5
    cmds.rotate(0,10*i,0,p=[0,0,0])#To make the angle y = 10 degrees
for i in range(30):#Loops create a rectangle like a ladder
    cmds.polyCube(w=5, h=0.25, d=1, n='myCube#')#Create a polyCube
    cmds.move(2.5,i*0.5,0)#Placed in the position x=2.5 And distance between y=0.5
    cmds.rotate(0,i*12,0,p=[0,0,0])#To make the angle y = 10 degrees

obj = cmds.polyUnite(['myCube#%d'%(i+1) for i in range(30)],n='result')
cmds.select(obj[0]+'.rotatePivot')#ทำให้ไม่หมุนรอบตัวเองเปลียนจุดหมุน
cmds.move(0,0,0)#ทำให้ไม่หมุนรอบตัวเองเปลียนจุดหมุน
cmds.setKeyframe(obj[0],at='ry',v=0,t=1)
cmds.setKeyframe(obj[0],at='ry',v=-45,t=13)
cmds.setKeyframe(obj[0],at='ry',v=-90,t=26)
cmds.setKeyframe(obj[0],at='ry',v=-135,t=39)
cmds.setKeyframe(obj[0],at='ry',v=-180,t=52)
cmds.setKeyframe(obj[0],at='ry',v=-225,t=65)
cmds.setKeyframe(obj[0],at='ry',v=-270,t=78)
cmds.setKeyframe(obj[0],at='ry',v=-315,t=91)
cmds.setKeyframe(obj[0],at='ry',v=-360,t=125)
for i in range(12):#Loops create triangular flower petals
    cmds.polyCone(r=2,h=6,n='nCone#')#Create a polyCone
    cmds.move(0,7,-15)#Hight=15 and Have a distance 7
    cmds.rotate(90,30*i,0,p=[0,0,0])#Let the petals make a 90 degree angle
    cmds.scale(1,1,0.2)#Squeeze the base to a flat triangular
for i in range(12):#Loops create triangular flower petals
    cmds.polyCone(r=2,h=6,n='nCone#')#Create a polyCone
    cmds.move(0,10,-15)#Hight=15 and Have a distance 10
    cmds.rotate(55,30*i,0,p=[0,0,0])#Let the petals make a 55 degree angle
    cmds.scale(1,1,0.2)#Squeeze the base to a flat triangular
for i in range(12):#Loops create triangular flower petals
    cmds.polyCone(r=2,h=6,n='nCone#')#Create a polyCone
    cmds.move(0,15,-10)#Hight=10 and Have a distance 15
    cmds.rotate(70,30*i,0,p=[0,0,0])#Let the petals make a 70 degree angle
    cmds.scale(1,1,0.2)#Squeeze the base to a flat triangular