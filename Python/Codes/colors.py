import cv2
image = cv2.imread("photos/omar.png")
gray = cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)
cv2.imshow ("Rakwan",gray) 
cv2.waitKey(0)
