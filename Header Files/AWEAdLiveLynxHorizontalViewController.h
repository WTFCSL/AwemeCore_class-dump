//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol AWEBDARifleViewConfiguration, AWEBDARifleView;

@interface AWEAdLiveLynxHorizontalViewController : UIViewController <AWEPageSheetTransitionDelegate, AWEPageSheetPresentationPhaseTransitionDelegate> {
    UIView<AWEBDARifleView> *_rifleView;
    id<AWEBDARifleViewConfiguration> _config;
    NSString *_scheme;
}

@property (retain, nonatomic) UIView<AWEBDARifleView> *rifleView;
@property (retain, nonatomic) id<AWEBDARifleViewConfiguration> config;
@property (copy, nonatomic) NSString *scheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)initialPhaseForPageSheetPresentation:(id)arg0;
- (unsigned long long)phaseTransitionStyleForPageSheetPresentation:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageSheetPresentation:(id)arg0 frameOfPresentedViewForPhase:(long long)arg1;
- (id)animationControllerForPresentedController;
- (id)animationControllerForDismissedController;
- (id)initWithRifleView:(id)arg0 scheme:(id)arg1 config:(id)arg2;
- (void)setRifleView:(id)arg0;
- (id)rifleView;
- (void)setScheme:(id)arg0;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)scheme;
- (void)viewDidLoad;

@end