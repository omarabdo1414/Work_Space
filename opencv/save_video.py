import cv2
cap = cv2.VideoCapture(0)
fourcc = cv2.VideoWriter_fourcc(*'XVID')
out = cv2.VideoWriter('output.avi', fourcc, 25.0,(640,480))
print(cap.isOpened())
while True:
    _,img=cap.read()
    if _ == True:
        print(cap.get(cv2.CAP_PROP_FRAME_WIDTH))
        print(cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
        # grayImg=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
        out.write(img)
        cv2.imshow("video Stream", img)
        key = cv2.waitKey(1) & 0xFF
        if key == ord('q'):
            break
    else :
        break

cap.release()
cv2.destroyAllWindows()