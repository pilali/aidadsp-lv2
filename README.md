# Aida DSP lv2 plugin bundle #

[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://www.paypal.com/donate/?hosted_button_id=UZWHH6HKJTHFJ)

### What is this repository for? ###

* A bundle of audio plugins from [Aida DSP](http://aidadsp.cc)
* Bundle version: 1.0
* This bundle is intended to be used with MOD Audio's products and derivatives

### Plugin list ###

* rt-neural-x10.lv2 (formerly rt-neural-generic.lv2)

#### rt-neural-x10.lv2 ####

This plugin (display name "AIDA-X10", formerly "AIDA-X" for the `rt-neural-generic` version) is an LV2 plugin that uses the [RTNeural](https://github.com/jatinchowdhury18/RTNeural.git) library to load and run neural network models for real-time audio processing. This plugin is designed to be generic, allowing users to load different models trained for various audio effects, primarily focused on amp and pedal simulations. This version has been updated to support up to 10 conditioned parameters.

Key Features:
- **Dynamic Model Loading:** Supports loading different neural network models at runtime via JSON files.
- **Parametric Models:** Can handle models with conditioning parameters (e.g., gain, tone stack) allowing real-time control over the model's response. Now supports up to 10 conditioned parameters.
- **Built-in EQ and Filters:** Includes pre/post EQ, anti-aliasing filter, and DC blocker.
- **MOD GUI Support:** Comes with a graphical user interface for MOD Devices.

Developers:

- This plugin supports json model files loading via specific atom messages

##### Generate json models #####

This implies neural network training. Please follow:

- [AIDA-X Model Trainer.ipynb](https://colab.research.google.com/github/AidaDSP/Automated-GuitarAmpModelling/blob/aidadsp_devel/AIDA_X_Model_Trainer.ipynb)

### Build ###

#### MOD Audio ####

We're proudly part of the amazing MOD Audio platform and community. Our plugin is already integrated
in their build system [MPB](https://github.com/moddevices/mod-plugin-builder/blob/master/plugins/package/aidadsp-lv2/aidadsp-lv2.mk), so please just follow their instructions.

#### Aida DSP OS ####

Below a guide on how to cross compile this bundle with [aidadsp sdk](https://drive.google.com/drive/folders/1-AAfAP-FAddCw0LJuvzsW8m_1lWHKXaV?usp=sharing).
You can extract cmake commands to fit your build system.

- RTNEURAL_ENABLE_AARCH64 specific option for aarch64 builds
- RTNEURAL_XSIMD=ON or RTNEURAL_EIGEN=ON to select an available backend for RTNeural library

for other options see [RTNeural](https://github.com/jatinchowdhury18/RTNeural.git) project.

```
1. install sdk with ./poky-glibc-x86_64-aidadsp-sdk-image-aarch64-nanopi-neo2-toolchain-2.1.15.sh
3. source environment-setup-aarch64-poky-linux
4. git clone https://github.com/AidaDSP/aidadsp-lv2.git && cd aidadsp-lv2
5. mkdir build && cd build
6. cmake -DCMAKE_BUILD_TYPE=Release -DGENERIC_AARCH64=ON -DRTNEURAL_XSIMD=ON -DCMAKE_VERBOSE_MAKEFILE:BOOL=ON ../
7. cmake --build .
8. make install DESTDIR="/tmp/"

bundle will be placed in /tmp/ ready to be copied on your device
```

[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://www.paypal.com/donate/?hosted_button_id=UZWHH6HKJTHFJ)
