This project add support for hardware stream of pooling layers to MASE Library

The project used a forked version of MASE: https://github.com/YUQIJunW/mase

Use instruction:
- git clone forked version MASE 
- Put all of the folders under the mase/src/mase_components

Run the test file in the test folder can test the functionality of layers

Run the test.py file can test the auto emiting 

Currently following layers are added:
- adaptive_avg_pool1d.sv

- adaptive_avg_pool2d.sv

- adaptive_max_pool1d.sv

- adaptive_max_pool2d.sv

- avg_pool1d.sv

- avg_pool2d.sv

- lp_pool1d.sv

- lp_pool2d.sv

- max_pool1d.sv

- max_pool2d.sv
