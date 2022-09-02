/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
SQ251AudioProcessorEditor::SQ251AudioProcessorEditor (SQ251AudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)//, synthComponent(p)
{
    //--------------------------------------------------------------------------
    // addAndMakeVisible + MUST setBounds in resized()
    addAndMakeVisible(synthComponent);

    //--------------------------------------------------------------------------
    // addListeners


    //--------------------------------------------------------------------------
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
}

SQ251AudioProcessorEditor::~SQ251AudioProcessorEditor()
{
}

//==============================================================================
void SQ251AudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
}

/*
* https://docs.juce.com/master/tutorial_rectangle_advanced.html
* https://docs.juce.com/master/tutorial_flex_box_grid.html
* https://docs.juce.com/master/tutorial_slider_values.html
*/
void SQ251AudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    auto bounds = getLocalBounds();

    //--------------------------------------------------------------------------
    // LayoutManagers: Grid, FlexBox, Header/Footer/Sidebars (removeFrom___)
    
    //--------------------------------------------------------------------------
    // setBounds
    synthComponent.setBounds(bounds);
}
