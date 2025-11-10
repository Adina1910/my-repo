#Create Vectors using different functions.
# 1. Using c() - Combine Function
cat("1. c() - Combine Function:\n")
vector1 <- c(10, 20, 30, 40, 50)
print(vector1)

# 2. Using : - Sequence Operator
cat("\n2. : - Sequence Operator:\n")
vector2 <- 1:8
print(vector2)

# 3. Using seq() - Sequence Function
cat("\n3. seq() - Sequence Function:\n")
vector3 <- seq(2, 10, by = 2)
print(vector3)

# 4. Using rep() - Replicate Function
cat("\4. rep() - Replicate Function:\n")
vector4 <- rep(c("A", "B"), times = 3)
print(vector4)

# 5. Using paste() - Character Vectors
cat("\n5. paste() - Character Vectors:\n")
vector5 <- paste("Student", 1:4, sep = "_")
print(vector5)
