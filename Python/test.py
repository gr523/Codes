#!/bin/python3
from sys import argv
from os import system

known={
    "db" : "DBMS - CSE 4307",
    "ds" : "DS - CSE 4303"    
}


def root(path):
    path = path.split('/')
    if path[0] not in known:return 0
    return known[path[0]]+'/'+"".join(path[1:])

def main():
    alen = len(argv)
    remote = 'edu:"2-1'
    if alen==1:
        x = f'rclone lsf {remote}"'
        system(x)
        return
    elif alen==2:
        x = root(str(argv[1]))
        if not x:return
        x = f'rclone lsf {remote}/{x}"'
        system(x)
        return
    elif alen==3:
        x = root(str(argv[2]))
        if not x:return
        x = f'rclone {str(argv[1])} {remote}/{x}"'
        print(x)
        return

    src=str(argv[-2])
    des=str(argv[-1])

    x = root(src)
    comm = " ".join(argv[1:alen-2])
    if x:
        comm=f'rclone {comm} {remote}/{x}" "{des}"'
        print(comm)
    else:
        x = root(des)
        if not x:return
        comm = f'rclone {comm} "{src}" {remote}/{x}"'
        print(comm)


main()



