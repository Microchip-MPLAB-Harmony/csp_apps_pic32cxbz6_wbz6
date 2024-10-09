---
parent: Harmony 3 peripheral library application examples for PIC32CX-BZ3 and WBZ653 family
title: Systick periodic interrupt
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# Systick periodic interrupt

This example shows how to use the SysTick to generate periodic interrupts.

## Description

This example application configures the SysTick Peripheral Library to generate periodic ticks. The application registers a periodic timeout callback. It toggles an LED every time the callback is triggered.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cxbz6_wbz6) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/systick/systick_periodic_timeout** .

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
Connect the Debug USB port on the board to the computer using a micro USB cable


## Running the Application

Build and Program the application using its IDE
The LED blinks continuously

Refer below table for LED name

| Board | LED Name |
|-----|-----|
|[PIC32CX WBZ653 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)| Red LED|

