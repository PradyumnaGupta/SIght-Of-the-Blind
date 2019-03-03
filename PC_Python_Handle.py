import numpy as np
import cv2
import serial
import time
cap = cv2.VideoCapture(0)
ardu= serial.Serial(port="COM15",baudrate=9600)
time.sleep(2)
st = ""
while(True):
      # Capture frame-by-frame
    ret, frame = cap.read()

    # Our operations on the frame come here
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    
    # Display the resulting frame
    gray = cv2.resize(gray,(3,3),interpolation = cv2.INTER_AREA)
    
    for i in range(1,3):
        for j in range(1,3):
            st+=str(gray[i][j])
            st+=","
    ardu.write(st.encode('ASCII'))
    cv2.imshow('frame',gray)
    print(gray)
    time.sleep(0.110)
    
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# When everything done, release the capture
cap.release()
cv2.destroyAllWindows()
