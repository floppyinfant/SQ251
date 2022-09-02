/*
  ==============================================================================

    SynthComponent.h
    Created: 1 Sep 2022 7:17:40pm
    Author:  thorsten

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

class SynthComponent : public juce::GroupComponent  // Component || Editor ???
    , public juce::Slider::Listener
    , public juce::Button::Listener
    , public juce::ComboBox::Listener
{
public:

    SynthComponent();  //SQ251AudioProcessor& p

    void resized() override;

    //--------------------------------------------------------------------------
    // Listener Callbacks
    void sliderValueChanged(juce::Slider* slider) override;
    void buttonClicked(juce::Button* btn) override;
    void comboBoxChanged(juce::ComboBox* cb) override;

//private:

    //--------------------------------------------------------------------------
    // Groups
    juce::GroupComponent generators;
    juce::GroupComponent modifiers;

    juce::GroupComponent vco;
    juce::GroupComponent mix;
    juce::GroupComponent vcf;
    juce::GroupComponent vca;

    //--------------------------------------------------------------------------
    // Components
    juce::Slider slider;
    juce::Label label;
    // Attachements connect the Component to the Parameter via the APVTS
    std::unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment> sliderAttachment;

};
