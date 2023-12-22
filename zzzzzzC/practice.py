import cv2
import imutils
import numpy as np

face_detector = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')
eye_detector = cv2.CascadeClassifier('haarcascade_eye.xml')
img = cv2.imread(r"C:\Users\Omar Abdo\OneDrive\Desktop\learn\omar.png")
# grayImg= cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
# thresholdImg = cv2.threshold(grayImg, 190, 255,cv2.THRESH_BINARY)[1]
# gaussianBlurImg=cv2.GaussianBlur(img,(25,25),0)
# resizeImg=imutils.resize(img,width=50)
# img = np.zeros([512,512,3],np.uint8)
# img = cv2.line(img,(0,0),(255,255),(0,0,255),3)
# img = cv2.arrowedLine(img,(0,255),(255,255),(255,0,0),3)
# img = cv2.rectangle(img,(455,400),(255,255),(0,255,0),5)
# font = cv2.FONT_HERSHEY_COMPLEX
# img = cv2.putText(img,"Face_Detection",(40,20),cv2.FONT_HERSHEY_COMPLEX,0.8,(255,255,255),1)
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
results = face_detector.detectMultiScale(gray, 1.3, 5)
for (x,y,w,h) in results:
    img=cv2.rectangle(img,(x,y),(x+w,y+h),(255,0,0),2)
    roi_gray = gray[y:y+h, x:x+w]
    roi_color = img[y:y+h, x:x+w]
    eyes = eye_detector.detectMultiScale(roi_gray)
    for (ex,ey,ew,eh) in eyes:
        cv2.rectangle(roi_color,(ex,ey),(ex+ew,ey+eh),(0,255,0),2)
cv2.imshow("new scale",img)
cv2.waitKey(0)
cv2.destroyAllWindows()