//
//     Generated by private class-dump
//

@class NSTimer;

@interface AWELandscapeFeedAutoRotateController : AWELandscapeFeedBaseController {
    BOOL _isMonitoring;
    NSTimer *_accidentalTouchTimer;
}

@property (nonatomic) BOOL isMonitoring;
@property (retain, nonatomic) NSTimer *accidentalTouchTimer;

- (void)beginMonitor;
- (void)endMonitor;
- (void)autoRotateSwitchChanged;
- (void)resetAccidentalTouchTimer:(BOOL)arg0;
- (id)currentLiveCellChildViewController;
- (BOOL)canAutoRotate;
- (id)accidentalTouchTimer;
- (void)setAccidentalTouchTimer:(id)arg0;
- (void)trackRotateExitFailedWithReason:(id)arg0;
- (void)trackChangingAutoRotateSwitch;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)isMonitoring;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)orientationChanged:(id)arg0;
- (void)setIsMonitoring:(BOOL)arg0;
- (void)setupOrientation;

@end
