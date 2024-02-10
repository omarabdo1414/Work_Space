from facial_emotion_recognition import EmotionRecognition
import cv2

er = EmotionRecognition(device = 'cpu')
camera = cv2.VideoCapture(0)

while True :
    (suc, frame) = camera.read()
    frame = er.recognise_emotion(frame, return_type='BGR')

    cv2.imshow("Frame", frame)
    key = cv2.waitKey(1) & 0xff
    if key == ord('q') :
        break

camera.release()
cv2.destroyAllWindows()