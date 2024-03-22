//
//     Generated by private class-dump
//

@class NSString, XPlayVEGView;

@interface XPlayVEGViewController : UIViewController <UITextFieldDelegate, UITextViewDelegate> {
    XPlayVEGView *_playView;
    long long _orientation;
    double _padding;
}

@property (retain, nonatomic) XPlayVEGView *playView;
@property (nonatomic) long long orientation;
@property (nonatomic) double padding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rotateOrientationTo:(long long)arg0;
- (void)updateCanvasSizeWithUIInterfaceOrientation:(long long)arg0;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)setPadding:(double)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (id)initWithConfiguration:(id)arg0;
- (long long)orientation;
- (void)setOrientation:(long long)arg0;
- (double)padding;
- (BOOL)prefersStatusBarHidden;
- (long long)currentInterfaceOrientation;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (id)playView;
- (void)setPlayView:(id)arg0;

@end