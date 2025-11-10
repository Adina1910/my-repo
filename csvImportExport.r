#1.  import data from mydata.csv file
mydata<-read.csv("C:/Users/OneDrive/Adina/Desktop/mydata.csv")
view(mydata.csv)

#Export data to dest.csv file
write.csv(mydata."C:/Users/OneDrive/Adina/Desktop/dest.csv", row.name=FALSE)

# operations
view(mydata) #view data
str(mydata) #view structure of mydata

avg_age<-mean(mydata$Age) #calculate the average of mydata
print(avg_age)

max_salary<max(mydata$Salary) # find the highest salary
print(max_Salary)

use_data<-subset(mydata, Country=="USA") #filter data by country
print (use_data) 

country_count<-table(mydata$Country) #count people from each country
print(country_count)

sorted_data<-mydata[order (-mydata$Salary), ]
print (sorted_data)

----------------------------------------------------------------------------
#22. Import data from Excel exceldata.xlsx

install.packages("writexl")
library(writexl)

data <- read_excel("exceldata.xlsx")
