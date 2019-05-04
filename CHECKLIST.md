# Checklist for Features/Bugs

## SVG Rendering

Need to find and implement a renderer other that QSvgRenderer (only uses SVG Tiny)

Added resvg.h as a start but have not worked on the implementation

## Separate Sport C++ Files

Goal here is to separate time/score keeping for different sports; start with hockey

Almost entirety of current scoreboardmain.cpp is for hockey scorekeeping

## SVG Parsing and Updating

Implemented very rudimentary solution right now in updatesvg.cpp; need recursive
solution or preimplemented library to reduce code and improve efficiency

## Add Control Panels for Different Sports

Self-explanatory, any implementation would be fine

## Rename UI Variables to be Sport Specific

For example - HClockText vs SClockText for hockey vs soccer clocktext

## Simplify Theme Conf Files

Current config files are relatively complicated, but it's based on the SVG parser;
solve the parser problem and then the conf files can be simplified
