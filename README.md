I've created a special tool in C++API that makes linear regression easy. It helps you train your model, predict outcomes from your data, and even assess how accurate those predictions are using the R2 score. This tool brings together everything you need to analyze data and make predictions quickly and effectively, all within the familiar C++ programming environment. It's designed to simplify the process of understanding and using linear regression for anyone working with data analysis and modeling.

Working:
•	  Just include the API using traditional way.
EX: 
#include “regression.h”
•	Prepare a 2D dataset using array in c++.

	Note: Always use float or double for a dataset list.
Float x [] = {10.1, 20.2, 40.6, 1.1, 34.5};
Float y [] = {1000.4, 2000.5, 10.5, 70.6, 10.30};
•	Now Initialize an object of regression class 
	
	    Linear_regression linear;

So here Linear_regression is our class and linear is our object to access the functionality
  
•	Now pass dataset using following function for training the model.

linear.data_to_train(x_dataset,y_dataset);
•	Now predict the data.

linear.topredict(data_to_predict);


EX:
linear.topredict(675.42);

So it will predict value based on our model trained and return the value.

•	You even can print the r2 score of prediction using following function.

linear.r2_score (y_dataset)

•	 You even print slope, intercept, mean of x, mean of y and even predicted y list which are processed in training process using direct define the variable.

1.	For slope just use “slope” like std::cout<<slope;
2.	For intercept use “c_intercept” like std::cout<<c_intercept;
3.	For mean of x : std::cout<<mean_x;
4.	For mean of y : std::cout<<mean_y;
5.	For predicted y get a single or whole list using:
(a)	std::cout<<line_y[index];
(b)	Using looping technique while iterating the element in container.

•	 For getting more info related tool you use below function

linear.version(); - for version identification
linear.about(); - for information regarding tool;



Note: This project is just for my research purpose hat how linear regression work and it’s in current development stage and can contain false prediction some time so it’s a prebuild early stage alpha so everybody can use and identify the issue.  

