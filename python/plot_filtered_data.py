from matplotlib import pyplot as plt
import numpy as np
from scipy import fftpack as sci_fft
from bitstring import Bits

# sample number
N = 119300

# sampling period
T = 1 / N

# read filtered data
with open("filtered_unsigned.txt") as f:   # change "filtered.txt" to "raw.txt" to plot input wave frequency response
    content = f.readlines()

content = [x.strip() for x in content]  # remove space between each 23 bits data

# convert bit data to decimal
y_sum = list()
for value in content:
    b = Bits(bin=value)
    y_sum.append(b.int)

# fast fourier transformation
yf_fft = sci_fft.fft(y_sum)

# creat x axis
xf = np.linspace(0, 1.0/(2.0*T), N/2)

# plot frequency vs magnitude graph
fig, ax = plt.subplots()
ax.plot(xf, 2.0/N*np.abs(yf_fft[:N//2]))
plt.show()

f.close()
