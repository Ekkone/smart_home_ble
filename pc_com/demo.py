#!/usr/bin/python3
 
import curses
import os
import time

import serial

#运行检查设备是否连接

while os.path.exists("/dev/ttyUSB0") == False:
	screen = curses.initscr()
	screen.clear()
	screen.border(0)
	screen.addstr(2, 2, "搜索不到设备,请检查连接情况")
	time.sleep(1)
#设备已连接
ser = serial.Serial("/dev/ttyUSB0",115200,timeout=0.5)
flag_1 = False
flag_2 = False
flag_3 = False
flag_4 = False
flag_5 = False
flag_6 = False
flag_7 = False
flag_8 = False
while True:
	data = ser.readlines()
	screen = curses.initscr()
	
	screen.clear()
	screen.border(0)
	screen.addstr(2, 2, "智能家居系统")
	
	screen.addstr(4, 2, "1 - 客厅灯")
	if flag_1 == False:
		screen.addstr(4,15,"关闭")
	else:
		screen.addstr(4,15,"开启")
	screen.addstr(5, 2, "2 - 厨房灯")
	if flag_2 == False:
		screen.addstr(5,15,"关闭")
	else:
		screen.addstr(5,15,"开启")
	screen.addstr(6, 2, "3 - 卧室灯")
	if flag_3 == False:
		screen.addstr(6,15,"关闭")
	else:
		screen.addstr(6,15,"开启")
	screen.addstr(7, 2, "3 - 卫生间灯")
	if flag_4 ==False:
		screen.addstr(7,15,"关闭")
	else:
		screen.addstr(7,15,"开启")
	screen.addstr(10,2,"按下对应编号控制：")
	screen.refresh()

	tx =  (0xf00 | flag_1 <<7 | flag_2 << 6 | flag_3 << 5 | flag_4 << 4 | flag_5 << 3 | flag_6 << 2 | flag_7 << 1 |flag_8) & 0xfff
	ser.write(tx)
	time.sleep(1)
	ser.write(tx)
	x = screen.getch()

	if x == ord('1'):
		flag_1 = ~flag_1
	elif x == ord('2'):
		flag_2 = ~flag_2	
	elif x == ord('3'):
		flag_3 = ~flag_3
	elif x == ord('4'):
		flag_4 = ~flag_4
	elif x == ord('5'):
		flag_5 = ~flag_5
	elif x == ord('6'):
		flag_6 = ~flag_6
	elif x == ord('7'):
		flag_7 = ~flag_7
	elif x == ord('8'):
		flag_8 = ~flag_8


curses.endwin()
