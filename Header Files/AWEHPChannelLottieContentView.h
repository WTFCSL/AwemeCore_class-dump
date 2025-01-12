//
//     Generated by private class-dump
//

@class AWEHPChannelLottieParams, LOTAnimationView, NSArray;

@interface AWEHPChannelLottieContentView : UIView {
    BOOL _isShowing;
    BOOL _isValid;
    BOOL _hasExit;
    BOOL _hasFinishAnimation;
    AWEHPChannelLottieParams *_params;
    id /* block */ _lottieRectBlock;
    id /* block */ _realContentRectBlock;
    long long _status;
    id /* block */ _exitBlock;
    unsigned long long _callSessionID;
    unsigned long long _showingSessionID;
    LOTAnimationView *_showingLottieView;
    LOTAnimationView *_selectedDarkView;
    LOTAnimationView *_selectedLightView;
    LOTAnimationView *_unselectedDarkView;
    LOTAnimationView *_unselectedLightView;
    NSArray *_lottieViews;
}

@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL hasExit;
@property (nonatomic) BOOL hasFinishAnimation;
@property (nonatomic) long long status;
@property (retain, nonatomic) AWEHPChannelLottieParams *params;
@property (copy, nonatomic) id /* block */ exitBlock;
@property (nonatomic) unsigned long long callSessionID;
@property (nonatomic) unsigned long long showingSessionID;
@property (retain, nonatomic) LOTAnimationView *showingLottieView;
@property (retain, nonatomic) LOTAnimationView *selectedDarkView;
@property (retain, nonatomic) LOTAnimationView *selectedLightView;
@property (retain, nonatomic) LOTAnimationView *unselectedDarkView;
@property (retain, nonatomic) LOTAnimationView *unselectedLightView;
@property (retain, nonatomic) NSArray *lottieViews;
@property (copy, nonatomic) id /* block */ lottieRectBlock;
@property (copy, nonatomic) id /* block */ realContentRectBlock;

- (void)setIsShowing:(BOOL)arg0;
- (id /* block */)exitBlock;
- (void)setExitBlock:(id /* block */)arg0;
- (void)showLottieWithParams:(id)arg0 showCallBack:(id /* block */)arg1 exitCallBack:(id /* block */)arg2;
- (void)hideLottie;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lottieContentRect;
- (void)setLottieRectBlock:(id /* block */)arg0;
- (void)setRealContentRectBlock:(id /* block */)arg0;
- (void)p_layoutContentView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lottieRect;
- (id)showingLottieView;
- (BOOL)hasFinishAnimation;
- (BOOL)hasExit;
- (void)p_updateStatus:(long long)arg0;
- (unsigned long long)callSessionID;
- (void)setCallSessionID:(unsigned long long)arg0;
- (void)p_updateLottieWithParams:(id)arg0 selectedDarkView:(id)arg1 selectedLightView:(id)arg2 unselectedDarkView:(id)arg3 unselectedLightView:(id)arg4 exitBlock:(id /* block */)arg5;
- (void)p_downloadLottieWithURL:(id)arg0 completion:(id /* block */)arg1;
- (id)unselectedDarkView;
- (id)unselectedLightView;
- (id)selectedDarkView;
- (id)selectedLightView;
- (void)p_updateShowingLottieView:(id)arg0;
- (unsigned long long)showingSessionID;
- (void)setShowingSessionID:(unsigned long long)arg0;
- (void)setShowingLottieView:(id)arg0;
- (void)p_exitLottie;
- (void)setHasFinishAnimation:(BOOL)arg0;
- (void)setHasExit:(BOOL)arg0;
- (void)setSelectedDarkView:(id)arg0;
- (void)setSelectedLightView:(id)arg0;
- (void)setUnselectedDarkView:(id)arg0;
- (void)setUnselectedLightView:(id)arg0;
- (void)setLottieViews:(id)arg0;
- (id)lottieViews;
- (id /* block */)lottieRectBlock;
- (id /* block */)realContentRectBlock;
- (void)setIsValid:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)status;
- (BOOL)isValid;
- (BOOL)isShowing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)didMoveToWindow;
- (void)setStatus:(long long)arg0;
- (void)updateStatus:(long long)arg0;
- (id)params;
- (void)layoutSubviews;
- (void)setParams:(id)arg0;

@end
