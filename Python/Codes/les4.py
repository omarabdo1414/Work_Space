#change the size of the image
import cv2
image = cv2.imread("photos/omar.png")
new_size = cv2.resize(image,(600,600))
cv2.imshow("size",new_size)
pixels = new_size.size
dimensions = new_size.shape
print("number od pixels: ",pixels)
print("number od dimensions : ",dimensions)
cv2.waitKey(0)