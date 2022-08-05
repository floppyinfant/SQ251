SQ251

Sequencer and Music Theory Tool

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

Setup Reaper as the Plugin-Host...
Projucer: add new file...
PluginProcessor.h: add private member MidiProcessor midiProcessor; #include "MidiProcessor.h"
...in processBlock(): buffer.clear(); midiProcessor.process(midiMessages);

App Ideas:
@ChordieApp, @MidiChordAnalyzer, @Scaler2, @mDecks, 'Mars'
Midi-Processing: @Ableton Midi-Effects
Drag and Drop
GUI: Score for Scales, Piano-Keyboard as display
=> Visual Display: colored notes / keys, Chord Naming, Jazz Chords Construction, Progressions / Cadences / Mapping Tonal Harmony, ...
=> Voice-Leading (Display Two or more Chords with different colors and show motion in half-steps etc.)
=> Diatonic vs. chromatic: Transpose, Scales, Arpeggiator, Harmonizer, ...
=> Pitchbends (Blues Guitar, Analog-CV-Experience, 432Hz Temperament / just intonation, microtonality, polychromatic music == more colors in vertical direction), Glissando, Portamento, Slide, Riser, FM, Voice (@Melodyne, @iZotope Nectar)
   https://www.youtube.com/watch?v=q1XOnIk2ai8&list=PLssH_Otzm89CfmtGHalvy5yjluduCM43F&index=2
   @Ribbon-Trautonium, @Animoog, @LFO-Tool (Xfer, ShaperBox, Vital Synth), Bezier-Curves
=> Velocity Curves / ~Rhythms, Aftertouch, CC, ...
=> Timing (Quantization, Grooves, Microtiming, 'incontainment?'-rhythm)
Step-Sequencer, Arpeggiator with Modulation (over Timeline || Measures "every 2..."), Variations, Song Mode
@QY-100, @SQ-1, @SQ-64, @BeatStepPro, @KeyStep, Visual | DAW | M4L-Devices

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

