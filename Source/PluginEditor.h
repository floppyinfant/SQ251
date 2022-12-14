/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

#include "fi/gui/SynthComponent.h"

//==============================================================================
/**
*/
class SQ251AudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    SQ251AudioProcessorEditor (SQ251AudioProcessor&);
    ~SQ251AudioProcessorEditor() override;

    //--------------------------------------------------------------------------
    
    void paint (juce::Graphics&) override;
    void resized() override;


private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    SQ251AudioProcessor& audioProcessor;

    //--------------------------------------------------------------------------
    // My Components
    SynthComponent synthComponent;

    //==========================================================================
    // Components
    juce::Slider slider;
    juce::Label label;

    //==========================================================================

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SQ251AudioProcessorEditor)
};
