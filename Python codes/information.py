
import cv2 
img = cv2.imread("photos/omar.png")
pixels = img.size
dimensions = img.shape
cv2.imshow ("Rakwan",img)
print("number od pixels: ",pixels)
print("number od dimensions : ",dimensions)
cv2.waitKey(0)