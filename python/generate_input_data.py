from matplotlib import pyplot as plt
import numpy as np

# sample number
N = 119300

# sampling period
T = 1 / N

# create sine wave
x = np.linspace(0, 1, N)
y1 = np.sin(2*np.pi*1000*x)*100+100 # more waves with different frequencies can be added
y2 = np.sin(2*np.pi*6000*x)*100+100 # i.e. yi = np.sin(2*np.pi*fi*x)*30_00  (fi is the desired frequency)
y_sum = y1 + y2

# fast fourier transformation
yf_fft = np.fft.fft(y_sum)
xf = np.linspace(0, N//2, N//2)

# plot graph
fig2, ax2 = plt.subplots()
ax2.plot(xf, np.abs(yf_fft[0:N//2])/N)
plt.show()

# write raw data
f = open("raw_unsigned.txt", "w")

for value in y_sum:
    f.write(np.binary_repr(int(value), width=16))
    f.write("\n")
f.close()
