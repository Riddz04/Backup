import matplotlib.pyplot as plt

# Data
age_intervals = ['20-30', '30-40', '40-50', '50-60']
diabetes_count = [10, 22, 64, 70]

# Plotting the histogram
plt.bar(age_intervals, diabetes_count, color='skyblue')

# Adding labels and title
plt.xlabel('Age Intervals')
plt.ylabel('Number of People with Diabetes')
plt.title('Histogram of People with Diabetes by Age Intervals')

# Display the plot
plt.show()

    