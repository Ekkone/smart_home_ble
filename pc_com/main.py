#!/usr/bin/python3
import serial
import os

if os.path.exists("/dev/ttyUSB0") == False:
	print("搜索不到设备,请检查连接情况")
	os._exit(0)
ser = serial.Serial("/dev/ttyUSB0",115200,timeout=0.5)
print(ser.name)
print(ser.is_open)
while True:
	data = ser.readlines()
	print(data)