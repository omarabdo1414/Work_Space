import cv2, numpy as np, os

size = 4
haar_file = "haarcascade_frontalface_default.xml"
datasets = 'datasets'
print('Training...')
(images, labels, names, id) = ([], [], {}, 0)
for (subdirs, dirs, files) in os.walk(datasets) :
    for subdir in dirs :
        names[id] = subdir
        subjectPath = os.path.join(datasets, subdir)
        for fileName in os.listdir(subjectPath) :
            path = subjectPath + '/' + fileName
            label = id
            images.append(cv2.imread(path, 0))
            labels.append(int(label))
            #print(labels)
        id += 1
(width, height) = (330, 200)
(images, labels) = [np.array(lis) for lis in [images, labels]]
# print(images, labels)
model = cv2.face.LBPHFaceRecognizer_create()
# model = cv2.face.FisherFaceRecognizer_create()
model.train(images, labels)

face_cascade = cv2.CascadeClassifier(haar_file)
webcam = cv2.VideoCapture(0)
cnt = 0

while True :
    (_,img) = webcam.read()
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    faces = face_cascade.detectMultiScale(gray, 1.3, 4)
    for (x,y,w,h) in faces :
        cv2.rectangle(img, (x,y), (x+w, y+h), (255,255,0),3)
        face = gray[y:y + h, x:x + w]
        face_resize = cv2.resize(face, (width, height))
        prediction = model.predict(face_resize)
        cv2.rectangle(img, (x,y), (x+w, y+h), (0,255,0),3)
        if prediction[1] < 800 :
            cv2.putText(img, '%s - %.0f' % (names[prediction[0]], prediction[1]), (x-10, y-10), cv2.FONT_HERSHEY_COMPLEX, 1, (0, 255, 0), 2)
            print(names[prediction[0]])
            cnt = 0
        else :
            cnt += 1
            # cv2.putText(img, 'UnKnown',(x-10, y-10), cv2.FONT_HERSHEY_PLAIN, 1, (0,255,0), 3)
            cv2.putText(img, "UnKnown", (x-10, y-10), cv2.FONT_HERSHEY_COMPLEX, 1,(0, 255, 0), 2)
            if (cnt > 100) :
                print ("UnKnown Person")
                cv2.imwrite("input.jpg", img)
                cnt = 0
    cv2.imshow('OpenCV', img)
    key = cv2.waitKey(10) & 0xff
    if key == ord('q') :
        break

webcam.release()
cv2.destroyAllWindows()