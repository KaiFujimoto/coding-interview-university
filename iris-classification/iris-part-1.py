import matplotlib.pyplot as plt

from sklearn.datasets import load_iris

iris = load_iris()

# print(iris.keys())

# print(iris["DESCR"]) # describes the data
# print(iris.data)

features = iris.data.T
# ^ takes transpose (matrix operation) list of lists and contains different features
# print(features)

sepal_length = features[0]
sepal_width = features[1]
petal_length = features[2]
petal_width = features[3]

#store the feature name of a given dataset
#we want to use it for plotting

# print(iris.feature_names)
sepal_length_label = iris.feature_names[0]
sepal_width_label = iris.feature_names[1]
petal_length_label = iris.feature_names[2]
petal_width_label = iris.feature_names[3]

# print(sepal_length_label)

#we have what we need to plot

# we use a scatter plot

plt.scatter(sepal_length, sepal_width, c=iris.target)
plt.xlabel(sepal_length_label)
plt.ylabel(sepal_width_label)
plt.show()
