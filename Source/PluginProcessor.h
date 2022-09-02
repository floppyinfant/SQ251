/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin processor.

    https://juce.com/learn/tutorials

    https://docs.juce.com/master/classes.html

    https://docs.juce.com/master/modules.html

    https://forum.juce.com/

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

#include "fi/midi/MidiProcessor.h"

//==============================================================================
/**
*/
class SQ251AudioProcessor  : public juce::AudioProcessor
{
public:
    //==============================================================================
    SQ251AudioProcessor();
    ~SQ251AudioProcessor() override;

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

   #ifndef JucePlugin_PreferredChannelConfigurations
    bool isBusesLayoutSupported (const BusesLayout& layouts) const override;
   #endif

    void processBlock (juce::AudioBuffer<float>&, juce::MidiBuffer&) override;

    //==============================================================================
    juce::AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const juce::String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool isMidiEffect() const override;
    double getTailLengthSeconds() const override;

    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const juce::String getProgramName (int index) override;
    void changeProgramName (int index, const juce::String& newName) override;

    //==============================================================================
    void getStateInformation (juce::MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;

    //==============================================================================
    juce::AudioProcessorValueTreeState::ParameterLayout createParameterLayout();
    juce::AudioProcessorValueTreeState& getState();

private:
    //==============================================================================
    // Members (Instance Variables)
    juce::AudioProcessorValueTreeState apvts;

    MidiProcessor midiProcessor;
    
    //------------------------------------------------------------------------------
    // Parameter Pointers
    juce::AudioParameterFloat* testSlider;  // Test

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SQ251AudioProcessor)
};
