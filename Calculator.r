# R AS CALCULATOR WITH VECTORS

# Create two simple vectors
v1 <- c(2, 4, 6, 8, 10)
v2 <- c(1, 2, 3, 4, 5)

cat("Vector 1:", v1, "\n")
cat("Vector 2:", v2, "\n\n")

# Basic mathematical operations
cat("ADDITION:", v1 + v2, "\n")
cat("SUBTRACTION:", v1 - v2, "\n") 
cat("MULTIPLICATION:", v1 * v2, "\n")
cat("DIVISION:", v1 / v2, "\n")
cat("EXPONENT:", v1 ^ v2, "\n\n")

# Operations with single number
cat("v1 + 5:", v1 + 5, "\n")
cat("v2 * 2:", v2 * 2, "\n\n")

# Useful functions
cat("SUM of v1:", sum(v1), "\n")
cat("MEAN of v2:", mean(v2), "\n")
cat("MAX of v1:", max(v1), "\n")
cat("MIN of v2:", min(v2), "\n")
cat("SQRT of v1:", sqrt(v1), "\n")
