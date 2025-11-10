# Draw simple graph using plot( ) function for a Vector.
# Create a vector
my_vector <- c(3, 7, 2, 9, 5, 8)

# Save plot to file
png(file="line_chart_label_colored.jpg")

# Draw simple plot (corrected)
plot(my_vector, 
     type = "o", 
     col = "red",
     main = "Simple Vector Plot", 
     xlab = "Index", 
     ylab = "Values")

# Close the device
dev.off()
---------------------------------------------------------------------------------------------------
# Use different parameters of plot( ) to add elements in graph.
# Create a vector
my_vector <- c(3, 7, 2, 9, 5, 8)

# Enhanced plot with different parameters
plot(my_vector, 
     type = "o",                    # Line type: points and lines
     col = "blue",                  # Color
     main = "Enhanced Vector Plot", # Main title
     xlab = "Index Position",       # X-axis label
     ylab = "Vector Values",        # Y-axis label
     pch = 16,                      # Point shape (filled circles)
     lwd = 2,                       # Line width
     cex = 1.5,                     # Point size
     las = 1,                       # Axis labels orientation
     bty = "l",                     # Box type (L-shaped)
     xlim = c(1, 6),                # X-axis limits
     ylim = c(0, 10),               # Y-axis limits
     col.main = "darkred",          # Title color
     col.lab = "darkgreen",         # Axis labels color
     font.main = 2,                 # Title font (bold)
     font.lab = 3)                  # Axis labels font (italic)

# Add grid lines
grid()

# Add a horizontal reference line
abline(h = mean(my_vector), col = "red", lty = 2, lwd = 2)

# Add text annotation
text(3, 8, paste("Mean:", mean(my_vector)), col = "red", font = 2)
