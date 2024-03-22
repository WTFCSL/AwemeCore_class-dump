//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEBDARifleView, AWEAwemeModel, AWEAdGeneralSearchLynxComponentMonitorContext;
@protocol AWEAdLearnMoreLynxButtonDelegate;

@interface AWEAdRifleLearnMoreLynxButton : UIView <AWEBDARifleViewDelegate, AWEUserMessage, AWEAdLearnMoreLynxButton> {
    BOOL _isFallback;
    BOOL _isFeedButtonStartFlash;
    BOOL _isTop;
    BOOL _transformedToCard;
    BOOL _useStackViewLayout;
    BOOL _isAutoAdaptive;
    BOOL _isMerchandiseType;
    BOOL _isAnimating;
    BOOL _liveAppointmentStatus;
    BOOL _enterFromWebView;
    BOOL _didConstructJSRuntime;
    BOOL _isLoadFailed;
    BOOL _isShowing;
    BOOL _renderInDoubleColumn;
    BOOL _useLynxAir;
    id<AWEAdLearnMoreLynxButtonDelegate> _delegate;
    id /* block */ _lynxButtonLoadFailBlock;
    id /* block */ _lynxButtonLoadFailWithButtonModelBlock;
    NSString *_lynxButtonPositionEvent;
    id /* block */ _updateLynxButtonHeightBlock;
    id /* block */ _updateLynxButtonFrameBlock;
    long long _merchandiseOrder;
    AWEAwemeModel *_model;
    unsigned long long _adLynxComponentType;
    AWEBDARifleView *_bdaRifleView;
    NSString *_userID;
    unsigned long long _componentType;
    NSDictionary *_animationParams;
    NSString *_refer;
    double _loadStartTimeStamp;
    double _loadStartFirstScreenTimeStamp;
    AWEAdGeneralSearchLynxComponentMonitorContext *_lynxMonitorContext;
    double _lynxContainerHeight;
    NSString *_liveGroupId;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _enterFrame;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) unsigned long long adLynxComponentType;
@property (retain, nonatomic) AWEBDARifleView *bdaRifleView;
@property BOOL isAnimating;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } enterFrame;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long followStatus;
@property (nonatomic) BOOL liveAppointmentStatus;
@property (nonatomic) unsigned long long componentType;
@property (retain, nonatomic) NSDictionary *animationParams;
@property (copy, nonatomic) NSString *refer;
@property (nonatomic) BOOL enterFromWebView;
@property BOOL didConstructJSRuntime;
@property (nonatomic) BOOL isLoadFailed;
@property (nonatomic) double loadStartTimeStamp;
@property (nonatomic) double loadStartFirstScreenTimeStamp;
@property (retain, nonatomic) AWEAdGeneralSearchLynxComponentMonitorContext *lynxMonitorContext;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL transformedToCard;
@property (nonatomic) double lynxContainerHeight;
@property (copy, nonatomic) NSString *liveGroupId;
@property (readonly, nonatomic) BOOL isLynxButtonOptABTest;
@property (readonly, nonatomic) double lynxButtonAnimationDelayTime;
@property (nonatomic) BOOL renderInDoubleColumn;
@property (nonatomic) BOOL useLynxAir;
@property (nonatomic) BOOL isFeedButtonStartFlash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEAdLearnMoreLynxButtonDelegate> delegate;
@property (copy, nonatomic) id /* block */ lynxButtonLoadFailBlock;
@property (copy, nonatomic) id /* block */ updateLynxButtonHeightBlock;
@property (copy, nonatomic) id /* block */ updateLynxButtonFrameBlock;
@property (copy, nonatomic) NSString *lynxButtonPositionEvent;
@property (nonatomic) BOOL useStackViewLayout;
@property (nonatomic) BOOL isAutoAdaptive;
@property (nonatomic) BOOL isFallback;
@property (nonatomic) BOOL isTop;
@property (nonatomic) BOOL isMerchandiseType;
@property (nonatomic) long long merchandiseOrder;
@property (copy, nonatomic) id /* block */ lynxButtonLoadFailWithButtonModelBlock;

- (long long)followStatus;
- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (BOOL)canShow;
- (void)setIsShowing:(BOOL)arg0;
- (void)setFollowStatus:(long long)arg0;
- (void)setRefer:(id)arg0;
- (void)rifleViewDidStartLoading:(id)arg0;
- (void)rifleView:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)rifleView:(id)arg0 didLoadFailedWithURL:(id)arg1 error:(id)arg2;
- (void)rifleViewDidConstructJSRuntime:(id)arg0;
- (void)rifleViewvDidFirstScreen:(id)arg0;
- (void)rifleView:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (id)refer;
- (void)playFlashAnimated:(BOOL)arg0;
- (BOOL)isMerchandiseType;
- (void)setIsMerchandiseType:(BOOL)arg0;
- (long long)merchandiseOrder;
- (void)setMerchandiseOrder:(long long)arg0;
- (id)bdaRifleView;
- (id)lynxBridges;
- (void)lynxAnimationStartWithNotification:(id)arg0;
- (id /* block */)lynxButtonLoadFailBlock;
- (void)notifyAppear;
- (void)notifyDisappear;
- (void)sendVideoLoopEvent:(long long)arg0;
- (void)setLynxButtonLoadFailBlock:(id /* block */)arg0;
- (void)notifyScreenRotation;
- (void)setRenderInDoubleColumn:(BOOL)arg0;
- (void)playerTimerTriggeredWithNotification:(id)arg0;
- (void)adLiveFailStatusUpdate:(id)arg0;
- (id)createLynxMonitorContext;
- (void)setLynxMonitorContext:(id)arg0;
- (void)setLoadStartTimeStamp:(double)arg0;
- (id)lynxMonitorContext;
- (BOOL)renderInDoubleColumn;
- (BOOL)enterFromWebView;
- (id)globalPropsPageDataWith:(id)arg0 withComponent:(id)arg1;
- (void)addAdTypeParamsWithConfiguration:(id)arg0;
- (void)updateRifleConfiguration:(id)arg0;
- (double)loadStartTimeStamp;
- (void)setEnterFromWebView:(BOOL)arg0;
- (void)updateLearnMoreLynxButtonWithModel:(id)arg0;
- (void)setBdaRifleView:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })enterFrame;
- (BOOL)isLynxButtonOptABTest;
- (void)configureBdaRifleViewWithModel:(id)arg0;
- (void)setUpFollowComponentIfNeeded;
- (void)setUpLiveAppointmentComponentIfNeeded;
- (unsigned long long)adLynxComponentType;
- (void)setAdLynxComponentType:(unsigned long long)arg0;
- (BOOL)canShowLynxWithComponent:(id)arg0;
- (void)configureBdaRifleViewWithComponent:(id)arg0;
- (unsigned long long)componentTypeOfModel:(id)arg0;
- (id)currentLynxRawData;
- (void)setIsLoadFailed:(BOOL)arg0;
- (void)setTransformedToCard:(BOOL)arg0;
- (void)setAnimationParams:(id)arg0;
- (void)setDidConstructJSRuntime:(BOOL)arg0;
- (void)setIsFeedButtonStartFlash:(BOOL)arg0;
- (BOOL)openAppStoreWithParams:(id)arg0;
- (BOOL)handleDownloadClick:(id)arg0;
- (void)updateLynxViewHeightInsearch:(double)arg0;
- (void)startFeedButtonAnimation:(double)arg0 duration:(double)arg1 fromAlpha:(double)arg2 toAlpha:(double)arg3;
- (void)startFeedButtonAnimationWithHeight:(double)arg0 durationa:(double)arg1 fromAlpha:(double)arg2 toAlpha:(double)arg3;
- (void)setLiveGroupId:(id)arg0;
- (id)liveGroupId;
- (void)setLiveAppointmentStatus:(BOOL)arg0;
- (BOOL)liveAppointmentStatus;
- (id)getAuthorAvatar;
- (BOOL)useStackViewLayout;
- (double)lynxButtonAnimationDelayTime;
- (void)updateLynxViewHeight:(double)arg0;
- (id)lynxButtonPositionEvent;
- (void)setUseLynxAir:(BOOL)arg0;
- (void)setLoadStartFirstScreenTimeStamp:(double)arg0;
- (double)loadStartFirstScreenTimeStamp;
- (void)postSearchOutFlowMonitorShowEventIfNeed;
- (id /* block */)lynxButtonLoadFailWithButtonModelBlock;
- (void)notifyAppearIfLynxRunTimeDidConstruct;
- (id)currentLynxButtonTemplateSchema;
- (BOOL)useLynxAir;
- (void)notifyTimerTriggered:(double)arg0;
- (id)animationParams;
- (void)setLynxContainerHeight:(double)arg0;
- (BOOL)transformedToCard;
- (BOOL)didConstructJSRuntime;
- (id /* block */)updateLynxButtonHeightBlock;
- (id /* block */)updateLynxButtonFrameBlock;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 renderInDoubleColumn:(BOOL)arg1;
- (void)updateLearnMoreLynxWebBottomButtonWithModel:(id)arg0;
- (void)updateLearnMoreLynxButtonWithComponentModel:(id)arg0 type:(unsigned long long)arg1;
- (void)playUnfoldAnimated:(BOOL)arg0;
- (void)notifyRestartAnimation;
- (void)notifyAggregationButtonIndex:(long long)arg0;
- (void)setLynxViewAlpha:(id)arg0;
- (void)updateLynxViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)updateContentWithHeight:(double)arg0;
- (void)notifyLynxButtonWidth:(double)arg0;
- (void)setUpdateLynxButtonHeightBlock:(id /* block */)arg0;
- (void)setUpdateLynxButtonFrameBlock:(id /* block */)arg0;
- (void)setLynxButtonPositionEvent:(id)arg0;
- (void)setUseStackViewLayout:(BOOL)arg0;
- (BOOL)isAutoAdaptive;
- (void)setIsAutoAdaptive:(BOOL)arg0;
- (void)setIsTop:(BOOL)arg0;
- (double)lynxContainerHeight;
- (BOOL)isFeedButtonStartFlash;
- (void)setLynxButtonLoadFailWithButtonModelBlock:(id /* block */)arg0;
- (void)setEnterFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isLoadFailed;
- (id)userID;
- (BOOL)isAnimating;
- (void)setModel:(id)arg0;
- (BOOL)isFallback;
- (void).cxx_destruct;
- (id)model;
- (void)setUserID:(id)arg0;
- (BOOL)isShowing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (unsigned long long)componentType;
- (void)setComponentType:(unsigned long long)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)reset;
- (void)addObserver;
- (void)setIsAnimating:(BOOL)arg0;
- (BOOL)isTop;
- (void)setIsFallback:(BOOL)arg0;

@end
