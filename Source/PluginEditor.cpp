/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
DeltaAudioProcessorEditor::DeltaAudioProcessorEditor (DeltaAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    gainSlider.setRange(Range<double> (0.0, 1.0), 0.01);
    gainSlider.setValue(p.getGain());
    gainSlider.addListener(this);
    
    addAndMakeVisible(gainSlider);
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
}

DeltaAudioProcessorEditor::~DeltaAudioProcessorEditor()
{
}

void DeltaAudioProcessorEditor::sliderValueChanged (Slider* sliderThatChanged)
{
    if (sliderThatChanged == &gainSlider)
    {
        processor.setGain(static_cast<float>(gainSlider.getValue()));
    }
}

//==============================================================================
void DeltaAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello ytjfgkf!", getLocalBounds(), Justification::centred, 1);
}

void DeltaAudioProcessorEditor::resized()
{
    gainSlider.setBounds(0, 0, 100, 100);
    gainSlider.setSize(100, 100);
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
