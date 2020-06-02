from selenium import webdriver
import time


'''from selenium.webdriver.common.keys import Keys
from time import gmtime, strftime
import time

driver = webdriver.Firefox(executable_path=r'C:\\Users\\garga\\Desktop\\geckodriver.exe')
driver.maximize_window()
url ="http://localhost:8080/jsTest/testFile.jsp"
driver.get(url)
time.sleep(3)
print('Hello')
a=driver.page_source
print(a)
'''

chromedriver="C:\\Users\\garga\\Desktop\\chromedriver.exe"
driver=webdriver.Chrome(chromedriver)
driver.get("http://localhost:8080/jsTest/testFile.jsp") 
time.sleep(3)

myval=driver.execute_script("return n;")
print(myval)
#a=driver.page_source
#print(a)



########################################## Client-Code #############################################
'''
import socket
s=socket.socket()
hostname='WIN8'   #Server Hostname
port=8000
s.connect((hostname,port))
while(True):
    #x=input("Enter message:")
    s.send(myval.encode())
    break
    
    
'''
import serial
import time
arduino=serial.Serial('COM8',9600)
mainstr='b'+myval
time.sleep(5)
for i in mainstr:
    arduino.write(i.encode())
    time.sleep(2)


