//
//     Generated by private class-dump
//

@class UIButton, AWEPlayInteractionTextExtractionElementViewModel;

@interface AWEPlayInteractionTextExtractionElement : AWEPlayInteractionLeftElement {
    UIButton *_extractionButton;
    AWEPlayInteractionTextExtractionElementViewModel *_viewModel;
    double _delayTime;
}

@property (nonatomic) double delayTime;
@property (retain, nonatomic) UIButton *extractionButton;
@property (retain, nonatomic) AWEPlayInteractionTextExtractionElementViewModel *viewModel;

- (void)initializeElement;
- (void)viewDidDisposed;
- (id)activateInfoWithData:(id)arg0;
- (void)viewController_viewDidAppear;
- (void)textExtractionClick;
- (void)layoutElementView;
- (void)dynamicWidthRemakeLayout;
- (void)animateUnhidden;
- (id)extractionButton;
- (void)hiddenExtraction;
- (void)extractionButtonIsShow:(BOOL)arg0;
- (void)setExtractionButton:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (void)setDelayTime:(double)arg0;
- (double)delayTime;
- (id)viewModel;
- (void)viewDidLoad;

@end
