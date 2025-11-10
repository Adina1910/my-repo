# linear regression
demo<- data.frame(
age=1:10,
height=c(10.2,10.4,10.7,11.7,111.1,101,102,100.17,170,15.1)
)
predictHeight=lm(height ~ age, data=demo)
x<- data.frame(age=c(11,12,13))
print(predict(predictHeight,x))
# multiple regression
dataframe <-data.frame(
  x=c(10,20,30,40),
  y=c(10,20,30,40),
  sum=c(20,40,60,80)
  )
sum <-lm(sum ~ x+y, data=dataframe)
z<-data.frame(
  x=c(50,60,70),
  y=c(50,60,70)
  )
print(predict(sum,z)
