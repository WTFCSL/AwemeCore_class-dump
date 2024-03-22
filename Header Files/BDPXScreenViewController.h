//
//     Generated by private class-dump
//

@class BDPXScreenGestureObject, NSString, UIView, NSMutableArray, UIButton;
@protocol BDPXScreenConfigDelegate, BDPXScreenStatusChangeDelegate;

@interface BDPXScreenViewController : BDPViewController <BDPXScreenGestureTranslationDelegate, BDPXScreenSizeChangeMessage> {
    BOOL _isFirstPage;
    BOOL _isDidDisappeared;
    BOOL _isDidLoadCompleted;
    id<BDPXScreenConfigDelegate> _configDelegate;
    id<BDPXScreenStatusChangeDelegate> _statusChangeDelegate;
    unsigned long long _sizeMode;
    BDPXScreenGestureObject *_gestureObject;
    UIView *_customRightButton;
    NSMutableArray *_customRightButtonList;
    UIView *_seperatorLayer;
    UIButton *_customLeftButton;
    UIView *_accessibilityBackgroundView;
}

@property (nonatomic) BOOL isDidDisappeared;
@property (nonatomic) BOOL isDidLoadCompleted;
@property (nonatomic) unsigned long long sizeMode;
@property (retain, nonatomic) UIView *customRightButton;
@property (retain, nonatomic) NSMutableArray *customRightButtonList;
@property (retain, nonatomic) UIView *seperatorLayer;
@property (retain, nonatomic) UIButton *customLeftButton;
@property (retain, nonatomic) BDPXScreenGestureObject *gestureObject;
@property (retain, nonatomic) UIView *accessibilityBackgroundView;
@property (weak, nonatomic) id<BDPXScreenConfigDelegate> configDelegate;
@property (weak, nonatomic) id<BDPXScreenStatusChangeDelegate> statusChangeDelegate;
@property (nonatomic) BOOL isFirstPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)statusChangeDelegate;
- (void)setStatusChangeDelegate:(id)arg0;
- (id)accessibilityBackgroundView;
- (void)setAccessibilityBackgroundView:(id)arg0;
- (unsigned long long)sizeMode;
- (id)gestureObject;
- (BOOL)isFirstPage;
- (void)setIsFirstPage:(BOOL)arg0;
- (void)setTranslucent:(BOOL)arg0 animated:(BOOL)arg1;
- (id)customRightButtonList;
- (id)seperatorLayer;
- (void)updateCustomButtonConstraints:(BOOL)arg0;
- (void)setupXScreenPanGestureRecognizer;
- (BOOL)gestureObject:(id)arg0 shouldStartTranslation:(struct CGPoint { double x0; double x1; })arg1;
- (void)gestureObjectTranslateNotInArea:(id)arg0;
- (double)gestureObjectGetOriginTop:(id)arg0;
- (double)gestureObjectGetMinimizeTop:(id)arg0;
- (void)gestureObject:(id)arg0 translateToValue:(double)arg1 position:(unsigned long long)arg2;
- (BOOL)gestureObjectCanDragUp:(id)arg0;
- (BOOL)gestureObjectCanDragDown:(id)arg0;
- (void)gestureObject:(id)arg0 translationProgressTopToXScreenPosition:(double)arg1;
- (void)gestureObjectTranslateToTop:(id)arg0;
- (void)gestureObject:(id)arg0 translateToXScreenPosition:(double)arg1 position:(unsigned long long)arg2;
- (void)gestureObjectTranslateToContainerBottom:(id)arg0;
- (BOOL)gestureObject:(id)arg0 recognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureObject:(id)arg0 recognizerShouldBegin:(id)arg1;
- (BOOL)gestureObject:(id)arg0 recognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)setupCornerCustomButton;
- (void)updateSuitableWindowSizeModeWhenShowFirstly;
- (void)setupAccessibilityBackgroundViewIfNeeded;
- (void)updateCustomButtonHidden;
- (void)updateXScreenPanGestureRecognizer;
- (void)updateSuitableWindowSizeModeWhenShowAgain;
- (void)setIsDidDisappeared:(BOOL)arg0;
- (void)setIsDidLoadCompleted:(BOOL)arg0;
- (BOOL)isDidLoadCompleted;
- (BOOL)isDidDisappeared;
- (unsigned long long)getXScreenWindowChangeToSizeModeWhenShowAgain;
- (void)adjustSizeToSizeMode:(unsigned long long)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (unsigned long long)getXScreenWindowChangeToSizeModeWhenShowFirstly;
- (void)updateCustomButtonAlpha:(double)arg0 animated:(BOOL)arg1;
- (void)setSizeMode:(unsigned long long)arg0;
- (void)triggerXScreenWillChangeToSizeMode:(unsigned long long)arg0;
- (void)updateXScreenCornerRadiusEnabled:(BOOL)arg0;
- (void)triggerXScreenDidChangeToSizeMode:(unsigned long long)arg0;
- (void)adjustSizeToFullScreenAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)adjustSizeToValue:(long long)arg0 adjustContent:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (double)getXScreenWindowContentHeightRate;
- (void)setGestureObject:(id)arg0;
- (double)getXScreenWindowCornerRadius;
- (BOOL)shouldShowCustomButton;
- (BOOL)shouldShowLeftCustomButton;
- (BOOL)isCanBeDragDown;
- (BOOL)isCanBeDragUp;
- (double)getXScreenWindowMinimizeTop;
- (void)updateXScreenWindowResizeIdentifier;
- (void)triggerXScreenTranslateToValue:(double)arg0 contentHeight:(double)arg1 contentHeightRate:(double)arg2 adjustContent:(BOOL)arg3;
- (BOOL)isXScreenGestureRecognizerShouldBegin:(id)arg0;
- (void)setCustomRightButtonList:(id)arg0;
- (void)setSeperatorLayer:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)configDelegate;
- (void)setConfigDelegate:(id)arg0;
- (id)customLeftButton;
- (void)setCustomLeftButton:(id)arg0;
- (id)customRightButton;
- (void)setCustomRightButton:(id)arg0;

@end
