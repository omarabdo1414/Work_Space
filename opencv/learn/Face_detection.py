import cv2
import numpy as np

alg="haarcascade_frontalface_default.xml"
eye_alg = 'haarcascade_eye.xml'

haar_cascade=cv2.CascadeClassifier(alg)
haar_cascade_eye=cv2.CascadeClassifier(eye_alg)

cam = cv2.VideoCapture(0)

while True:
    _,img = cam.read()
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    results = haar_cascade.detectMultiScale(gray, 1.3, 5)
    for (x,y,w,h) in results:
        img=cv2.rectangle(img,(x,y),(x+w,y+h),(255,0,0),2)
        roi_gray = gray[y:y+h, x:x+w]
        roi_color = img[y:y+h, x:x+w]
        eyes = haar_cascade_eye.detectMultiScale(roi_gray)
        for (ex,ey,ew,eh) in eyes:
            cv2.rectangle(roi_color,(ex,ey),(ex+ew,ey+eh),(0,255,0),2)
        cv2.imshow("Face_Detection",img)
    key=cv2.waitKey(1) & 0xff
    if key == ord('q'):
        break

cam.release()
cv2.destroyAllWindows()
