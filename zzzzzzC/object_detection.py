import cv2
import time
import imutils

cam = cv2.VideoCapture(0)
time.sleep(1)
firstFrame = None
area = 500

while True :
    _, img = cam.read() #read Frame from the camera
    text = "Normal"
    img = imutils.resize(img, width=500)

    grayImg = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    gaussionBlurImg = cv2.GaussianBlur(grayImg, (21, 21),0) #Smoothened
    if firstFrame is None :
        firstFrame = gaussionBlurImg #capturing 1st frame on 1st iteration continue
    imgDiff = cv2.absdiff(firstFrame , gaussionBlurImg)
    thresholdImg = cv2.threshold (imgDiff, 25, 255, cv2.THRESH_BINARY)[1]
    thresholdImg = cv2.dilate(thresholdImg, None, iterations=2)
    cnts = cv2.findContours(thresholdImg.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    
    cv2.imshow("Frame", img)
    key = cv2.waitKey(10) & 0xff
    if key == ord('q') :
        break
cam.release()
cv2.destroyAllWindows()