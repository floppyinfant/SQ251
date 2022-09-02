/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.1.4

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "GuiEditorComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
GuiEditorComponent::GuiEditorComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    juce__textButton.reset (new juce::TextButton ("new button"));
    addAndMakeVisible (juce__textButton.get());
    juce__textButton->addListener (this);

    juce__textButton->setBounds (280, 680, 150, 24);

    juce__toggleButton.reset (new juce::ToggleButton ("new toggle button"));
    addAndMakeVisible (juce__toggleButton.get());
    juce__toggleButton->addListener (this);

    juce__toggleButton->setBounds (280, 640, 150, 24);

    juce__slider.reset (new juce::Slider ("new slider"));
    addAndMakeVisible (juce__slider.get());
    juce__slider->setRange (0, 10, 0);
    juce__slider->setSliderStyle (juce::Slider::LinearHorizontal);
    juce__slider->setTextBoxStyle (juce::Slider::TextBoxLeft, false, 80, 20);
    juce__slider->addListener (this);

    juce__slider->setBounds (288, 576, 150, 24);

    juce__label.reset (new juce::Label ("new label",
                                        TRANS("label text")));
    addAndMakeVisible (juce__label.get());
    juce__label->setFont (juce::Font (15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label->setJustificationType (juce::Justification::centredLeft);
    juce__label->setEditable (false, false, false);
    juce__label->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label->setBounds (288, 600, 150, 24);

    juce__textEditor.reset (new juce::TextEditor ("new text editor"));
    addAndMakeVisible (juce__textEditor.get());
    juce__textEditor->setMultiLine (false);
    juce__textEditor->setReturnKeyStartsNewLine (false);
    juce__textEditor->setReadOnly (false);
    juce__textEditor->setScrollbarsShown (true);
    juce__textEditor->setCaretVisible (true);
    juce__textEditor->setPopupMenuEnabled (true);
    juce__textEditor->setText (juce::String());

    juce__textEditor->setBounds (456, 560, 223, 96);

    juce__comboBox.reset (new juce::ComboBox ("new combo box"));
    addAndMakeVisible (juce__comboBox.get());
    juce__comboBox->setEditableText (false);
    juce__comboBox->setJustificationType (juce::Justification::centredLeft);
    juce__comboBox->setTextWhenNothingSelected (juce::String());
    juce__comboBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    juce__comboBox->addListener (this);

    juce__comboBox->setBounds (464, 520, 150, 24);

    juce__groupComponent.reset (new juce::GroupComponent ("new group",
                                                          TRANS("group")));
    addAndMakeVisible (juce__groupComponent.get());

    juce__groupComponent->setBounds (56, 72, 560, 150);

    juce__groupComponent2.reset (new juce::GroupComponent ("new group",
                                                           TRANS("group")));
    addAndMakeVisible (juce__groupComponent2.get());

    juce__groupComponent2->setBounds (56, 232, 560, 152);

    juce__tabbedComponent.reset (new juce::TabbedComponent (juce::TabbedButtonBar::TabsAtTop));
    addAndMakeVisible (juce__tabbedComponent.get());
    juce__tabbedComponent->setTabBarDepth (30);
    juce__tabbedComponent->addTab (TRANS("Tab 0"), juce::Colours::lightgrey, 0, false);
    juce__tabbedComponent->addTab (TRANS("Tab 1"), juce::Colours::lightgrey, 0, false);
    juce__tabbedComponent->addTab (TRANS("Tab 2"), juce::Colours::lightgrey, 0, false);
    juce__tabbedComponent->setCurrentTabIndex (0);

    juce__tabbedComponent->setBounds (64, 408, 544, 88);

    juce__treeView.reset (new juce::TreeView ("new treeview"));
    addAndMakeVisible (juce__treeView.get());

    juce__treeView->setBounds (632, 80, 192, 296);

    juce__imageButton.reset (new juce::ImageButton ("new button"));
    addAndMakeVisible (juce__imageButton.get());
    juce__imageButton->addListener (this);

    juce__imageButton->setImages (false, true, true,
                                  juce::Image(), 1.000f, juce::Colour (0x00000000),
                                  juce::Image(), 1.000f, juce::Colour (0x00000000),
                                  juce::Image(), 1.000f, juce::Colour (0x00000000));
    juce__imageButton->setBounds (464, 680, 150, 24);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

GuiEditorComponent::~GuiEditorComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    juce__textButton = nullptr;
    juce__toggleButton = nullptr;
    juce__slider = nullptr;
    juce__label = nullptr;
    juce__textEditor = nullptr;
    juce__comboBox = nullptr;
    juce__groupComponent = nullptr;
    juce__groupComponent2 = nullptr;
    juce__tabbedComponent = nullptr;
    juce__treeView = nullptr;
    juce__imageButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void GuiEditorComponent::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void GuiEditorComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void GuiEditorComponent::buttonClicked (juce::Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == juce__textButton.get())
    {
        //[UserButtonCode_juce__textButton] -- add your button handler code here..
        //[/UserButtonCode_juce__textButton]
    }
    else if (buttonThatWasClicked == juce__toggleButton.get())
    {
        //[UserButtonCode_juce__toggleButton] -- add your button handler code here..
        //[/UserButtonCode_juce__toggleButton]
    }
    else if (buttonThatWasClicked == juce__imageButton.get())
    {
        //[UserButtonCode_juce__imageButton] -- add your button handler code here..
        //[/UserButtonCode_juce__imageButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void GuiEditorComponent::sliderValueChanged (juce::Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == juce__slider.get())
    {
        //[UserSliderCode_juce__slider] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void GuiEditorComponent::comboBoxChanged (juce::ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == juce__comboBox.get())
    {
        //[UserComboBoxCode_juce__comboBox] -- add your combo box handling code here..
        //[/UserComboBoxCode_juce__comboBox]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="GuiEditorComponent" componentName=""
                 parentClasses="public juce::Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
  <TEXTBUTTON name="new button" id="8234aa68d629af84" memberName="juce__textButton"
              virtualName="" explicitFocusOrder="0" pos="280 680 150 24" buttonText="new button"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TOGGLEBUTTON name="new toggle button" id="4db3f30afe0bcbd1" memberName="juce__toggleButton"
                virtualName="" explicitFocusOrder="0" pos="280 640 150 24" buttonText="new toggle button"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <SLIDER name="new slider" id="10f45d7b7f9acb03" memberName="juce__slider"
          virtualName="" explicitFocusOrder="0" pos="288 576 150 24" min="0.0"
          max="10.0" int="0.0" style="LinearHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="new label" id="95f57bd947212d0b" memberName="juce__label"
         virtualName="" explicitFocusOrder="0" pos="288 600 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTEDITOR name="new text editor" id="60428e999886ada3" memberName="juce__textEditor"
              virtualName="" explicitFocusOrder="0" pos="456 560 223 96" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <COMBOBOX name="new combo box" id="5e88f77f830ceb37" memberName="juce__comboBox"
            virtualName="" explicitFocusOrder="0" pos="464 520 150 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <GROUPCOMPONENT name="new group" id="92ce7b64f6fad74" memberName="juce__groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="56 72 560 150" title="group"/>
  <GROUPCOMPONENT name="new group" id="95d3d8396f1d1657" memberName="juce__groupComponent2"
                  virtualName="" explicitFocusOrder="0" pos="56 232 560 152" title="group"/>
  <TABBEDCOMPONENT name="new tabbed component" id="fd14a1fe4e4d71cf" memberName="juce__tabbedComponent"
                   virtualName="" explicitFocusOrder="0" pos="64 408 544 88" orientation="top"
                   tabBarDepth="30" initialTab="0">
    <TAB name="Tab 0" colour="ffd3d3d3" useJucerComp="0" contentClassName=""
         constructorParams="" jucerComponentFile=""/>
    <TAB name="Tab 1" colour="ffd3d3d3" useJucerComp="0" contentClassName=""
         constructorParams="" jucerComponentFile=""/>
    <TAB name="Tab 2" colour="ffd3d3d3" useJucerComp="0" contentClassName=""
         constructorParams="" jucerComponentFile=""/>
  </TABBEDCOMPONENT>
  <TREEVIEW name="new treeview" id="b14d1faeed8c774e" memberName="juce__treeView"
            virtualName="" explicitFocusOrder="0" pos="632 80 192 296" rootVisible="1"
            openByDefault="0"/>
  <IMAGEBUTTON name="new button" id="c76b4c5e180f5d9" memberName="juce__imageButton"
               virtualName="" explicitFocusOrder="0" pos="464 680 150 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="" opacityNormal="1.0" colourNormal="0" resourceOver=""
               opacityOver="1.0" colourOver="0" resourceDown="" opacityDown="1.0"
               colourDown="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

