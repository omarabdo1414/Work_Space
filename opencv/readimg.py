import cv2 as cv

# Reading Image

# img = cv.imread('learn/omar.jpg')

# cv.imshow('Human', img)

# Reading Video

capture = cv.VideoCapture('learn/videos/Osama.mp4')
# capture = cv.VideoCapture(0)

while True :
    isTrue, frame = capture.read()
    cv.imshow('Video', frame)

    if cv.waitKey(20) & 0xFF == ord('d'):
        break

capture.release()
cv.destroyAllWindows()