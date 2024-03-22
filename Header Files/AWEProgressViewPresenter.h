//
//     Generated by private class-dump
//

@class NSString, AWEProgressViewUIConfig, AWEPageContext, UIView, AWEProgressUIConfig;
@protocol AWEProgressElementDelegate, AWEProgressContainerViewProtocol, AWEProgressFakeViewProtocol, AWEProgressContextProtocol;

@interface AWEProgressViewPresenter : NSObject <AWEProgressContainerViewDelegate, AWEProgressStatusProtocol, AWEProgressChangeProtocol, AWEProgressGestureProtocol, AWEProgressElementBizProtocol> {
    BOOL _shouldAnimateWhenChangeStatus;
    id<AWEProgressElementDelegate> _delegate;
    AWEPageContext<AWEProgressContextProtocol> *_context;
    AWEProgressUIConfig *_config;
    UIView<AWEProgressContainerViewProtocol> *_progressView;
    UIView<AWEProgressFakeViewProtocol> *_fakeSlider;
    unsigned long long _currentStatus;
    unsigned long long _currentAction;
    AWEProgressViewUIConfig *_progressViewUIConfig;
    unsigned long long _triggerType;
    double _startPercentage;
    double _lastPercentage;
    double _lastMapSliderValue;
    double _additionalLeftEdgeInset;
    struct CGPoint { double x; double y; } _startLocation;
    struct CGPoint { double x; double y; } _lastLocation;
}

@property (retain, nonatomic) AWEPageContext<AWEProgressContextProtocol> *context;
@property (retain, nonatomic) AWEProgressUIConfig *config;
@property (retain, nonatomic) UIView<AWEProgressContainerViewProtocol> *progressView;
@property (retain, nonatomic) UIView<AWEProgressFakeViewProtocol> *fakeSlider;
@property (nonatomic) unsigned long long currentStatus;
@property (nonatomic) unsigned long long currentAction;
@property (nonatomic) BOOL shouldAnimateWhenChangeStatus;
@property (retain, nonatomic) AWEProgressViewUIConfig *progressViewUIConfig;
@property (nonatomic) unsigned long long triggerType;
@property (nonatomic) struct CGPoint { double x; double y; } startLocation;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) double startPercentage;
@property (nonatomic) double lastPercentage;
@property (nonatomic) double lastMapSliderValue;
@property (nonatomic) double additionalLeftEdgeInset;
@property (weak, nonatomic) id<AWEProgressElementDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)progressValueChangedTo:(double)arg0 animated:(BOOL)arg1;
- (void)addLeftEdgeInsetIfNeed:(double)arg0 bizType:(unsigned long long)arg1;
- (void)progressViewTouchBeganWithStart:(struct CGPoint { double x0; double x1; })arg0 targetView:(id)arg1 triggerType:(unsigned long long)arg2;
- (void)progressViewTouchChangedWithLastPoint:(struct CGPoint { double x0; double x1; })arg0 targetView:(id)arg1 triggerType:(unsigned long long)arg2;
- (void)progressViewTouchEndedWithEndPoint:(struct CGPoint { double x0; double x1; })arg0 targetView:(id)arg1 triggerType:(unsigned long long)arg2;
- (void)restoreToNormalWhenTouchEnd:(BOOL)arg0;
- (void)setLastMapSliderValue:(double)arg0;
- (double)lastMapSliderValue;
- (void)changeProgressStatusTo:(unsigned long long)arg0 withAction:(unsigned long long)arg1 animate:(BOOL)arg2;
- (BOOL)shouldBeginProgressGestureRecognizer:(id)arg0;
- (id)initWithTargeView:(id)arg0 fakeSlider:(id)arg1 UIConfig:(id)arg2 context:(id)arg3;
- (void)configProgressView;
- (id)progressViewUIConfig;
- (void)updateSliderEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setStartPercentage:(double)arg0;
- (void)setLastPercentage:(double)arg0;
- (double)startPercentage;
- (double)lastPercentage;
- (double)verifiedPercentage:(double)arg0;
- (id)fakeSlider;
- (void)changeFakeSliderStatus;
- (void)setShouldAnimateWhenChangeStatus:(BOOL)arg0;
- (double)additionalLeftEdgeInset;
- (BOOL)shouldAnimateWhenChangeStatus;
- (void)showFakeSliderIfNeeded:(BOOL)arg0;
- (void)remakePadFakeSliderForCommonViewConstraint;
- (void)setFakeSlider:(id)arg0;
- (void)setProgressViewUIConfig:(id)arg0;
- (void)setAdditionalLeftEdgeInset:(double)arg0;
- (void)setConfig:(id)arg0;
- (unsigned long long)currentStatus;
- (void).cxx_destruct;
- (void)setTriggerType:(unsigned long long)arg0;
- (struct CGPoint { double x0; double x1; })lastLocation;
- (void)setCurrentStatus:(unsigned long long)arg0;
- (void)setContext:(id)arg0;
- (id)config;
- (void)setLastLocation:(struct CGPoint { double x0; double x1; })arg0;
- (id)delegate;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (id)context;
- (void)setDelegate:(id)arg0;
- (void)reset;
- (unsigned long long)triggerType;
- (unsigned long long)currentAction;
- (struct CGPoint { double x0; double x1; })startLocation;
- (void)setStartLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)setCurrentAction:(unsigned long long)arg0;

@end
