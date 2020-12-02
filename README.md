What is in this repository
===
This repository contains Python, Verilog, and VHDL files for testing Xilinx FIR compiler v6.3 and a functional module for the potentiometer and current signal processing on the da Vinci Research Kit. 

Note: This feature will **NOT** show up in the upcoming firmware release [Rev 7.0](https://github.com/jhu-cisst/mechatronics-firmware/wiki/FPGA-Firmware-Release-Notes). Please wait for future firmware releases for a stable implementation.

**Implementation:**
The noisy potentiometer and current signals from the ADC module are processed in the ``FirFilter`` module and sent back to DAC.  Xilinx FIR compiler v6.3 is used for implementing the ``FirFilter`` module. Please refer to this [document](https://www.xilinx.com/support/documentation/ip_documentation/fir_compiler/v6_3/ds795_fir_compiler.pdf) for how to change the settings of this ipcore. MATLAB ``filterdesigner`` is recommended for generating filter coefficients using different window methods.  

- ``Python``: folder contains Python files for generating 16 bits sine wave data and plotting filtered signal in the frequency domain.
- ``Verilog``: folder contains modified Verilog files for enabling filtering on the potentiometer and current signal. Be aware that this is a nightly implementation. 
- ``Fir``: folder contains Xilinx ISE project file, Verilog, and VHDL files for testing FIR compiler v6.3.

How to test filter implementation in ``Fir``
===
**Step one: Navigate to ``Python``**

- ``generate_input_data.py`` generates sinusoidal waves and encodes the integer representations of the amplitude of the test wave into 16 bits signed binary numbers. The results are written to a file named ``raw_unsigned.txt``.
-  ``plot_filtered_data.py`` reads the signed binary representations of the amplitude of filtered output wave from ``filtered_unsigned.txt`` and decodes into integer representations, and plots the waves in the frequency domain.

**Step two:  Generate input wave**
- Open ``generate_input_data.py`` and enter the wave combination of your choice. The ``raw.txt`` will be generated in the same directory after you have run the code.

**Step three: Run simulation**
- Copy ``raw_unsigned.txt`` to ``Fir`` folder.
- Open the ``fir.xise`` Xilinx ISE project file in the ``Fir`` folder.
- In the design panel, select ``Simulation`` and click on ``fir_tb``.
- Double click ``Simulate Behavioral Model`` and iSim GUI will pop up. Click run and the simulation will last around 8 mins. Then ``filtered_unsigned.txt`` will be generated in the same directory.

**Step Five: Plot filtered wave**

- Copy ``filtered_unsigned.txt`` to the ``Python``. 
- Run ``plot_filtered_data.py`` and the graph will be shown in the IDE. 
F. Y. I.: PyCharm is the recommended IDE.