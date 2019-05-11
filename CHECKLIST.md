# Checklist for Features/Bugs

## SVG Rendering

Need to find and implement a renderer other that QSvgRenderer (only uses SVG Tiny)

Added resvg.h as a start but have not worked on the implementation

## Separate Sport C++ Files

Goal here is to separate time/score keeping for different sports; start with hockey

Almost entirety of current scoreboardmain.cpp is for hockey scorekeeping

## Separate Text and Graphics

Create QLabels in the same hierarchy as the SVG and render specific portions in
those labels. This will allow for separation of the text which will decrease CPU
usage.

The 'style' attribute from the SVG can go directly into 'stylesheet' in Qt and
create the same format, so just parse and transfer.

Perhaps add an option in settings to choose this rendering option over directly
rendering the SVG on every update; SVG Tiny doesn't support animations but 
whatever renderer that is moved to might, so that option needs to be available
for those whose machines can handle the extra power required.

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
