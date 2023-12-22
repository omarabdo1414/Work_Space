import cv2
img = cv2.imread(r"C:\Users\Omar Abdo\OneDrive\Desktop\learn\omar.png")
gray_img=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
thresholdImg=cv2.threshold(gray_img,100,255,cv2.THRESH_BINARY)[1]
# cv2.imwrite("Gray Omar",gray_img)
# cv2.imwrite("omarabdo.png", img)
cv2.imwrite("thresholdImg.jpg", thresholdImg)
cv2.imshow("thresholdImg.jpg", thresholdImg)
cv2.imshow("omar.png",img)
cv2.imshow("omarabdo.png",gray_img)
cv2.waitKey(0)
cv2.destroyAllWindows()