---
parent: Harmony 3 peripheral library application examples for PIC32CX-BZ3 and WBZ653 family
title: SERCOM SPI EEPROM read write
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# SERCOM SPI EEPROM read write

This example application demonstrates how to use the SERCOM SPI peripheral to write and read from the SPI serial EEPROM memory.

## Description

This example uses the SERCOM SPI peripheral library to write an array of values to the SPI Serial EEPROM and verify the value written by reading the values back and comparing it to the value written.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cxbz6_wbz6) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/sercom/spi/spi_eeprom_write_read** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
|WBZ653_curiosity.X| MPLABX project for [PIC32CX WBZ653 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)|


## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
|WBZ653_curiosity.X|[PIC32CX WBZ653 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)|


### Setting up [PIC32CX WBZ653 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)
- Plug an [EEPROM 4 Click board](https://www.mikroe.com/eeprom-4-click) into the MikroBus socket of the [PIC32CX WBZ653 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)
- Connect the Debug USB port on the board to the computer using micro USB cable


## Running the Application

1. Build and Program the application project using its IDE
2. LED indicates the success or failure:
    - LED is turned ON when the value read from the EEPROM matched with the written value
    - LED is turned OFF when the value read from the EEPROM did not match with the written value

Refer below table for LED name

| Board | LED Name |
|-----|-----|
|[PIC32CX WBZ653 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)| Red LED|

