from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
from sklearn.neighbors import KNeighborsClassifier
import numpy as np

iris = load_iris()

X_train, X_test, y_train, y_test = train_test_split(iris['data'], iris['target'], random_state=0)
# X is to denote data
# y is to denote target
# upper and lower case is important

knn = KNeighborsClassifier(n_neighbors=1)
# n_ neighbors is how many neighbors to consider

knn.fit(X_train, y_train) #fits nearest neighbors model with respect to training data

#a row is a numpy array
X_new = np.array([[5.0, 2.9, 1.0, 0.2]])
# the array is just a random iris we found in the field and we want to classify it

# print(X_new.shape) # prints out (4,) which shows dimensions

# we want to obtain prediction of the new thing we obtained

# prediction = knn.predict(X_new)
# print(prediction)

#try to quantify how accurate our model is
print(knn.score(X_test, y_test))
