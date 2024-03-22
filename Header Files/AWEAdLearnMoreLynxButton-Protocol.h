//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel, UIView;
@protocol AWEAdLearnMoreLynxButtonDelegate, AWEBDARifleView;

@protocol AWEAdLearnMoreLynxButton <NSObject>

@property (readonly, nonatomic) UIView<AWEBDARifleView> *bdaRifleView;
@property (weak, nonatomic) id<AWEAdLearnMoreLynxButtonDelegate> delegate;
@property (copy, nonatomic) id /* block */ lynxButtonLoadFailBlock;
@property (copy, nonatomic) id /* block */ updateLynxButtonHeightBlock;
@property (copy, nonatomic) id /* block */ updateLynxButtonFrameBlock;
@property (copy, nonatomic) NSString *lynxButtonPositionEvent;
@property (nonatomic) BOOL useStackViewLayout;
@property (nonatomic) BOOL isAutoAdaptive;
@property (nonatomic) BOOL isFallback;
@property (nonatomic) BOOL isTop;
@property (readonly, nonatomic) BOOL isShowing;
@property (readonly, nonatomic) BOOL transformedToCard;
@property (readonly, nonatomic) AWEAwemeModel *model;
@property (readonly, nonatomic) unsigned long long componentType;
@property (readonly, nonatomic) double lynxContainerHeight;
@property (readonly, copy, nonatomic) NSString *refer;
@property (readonly, copy, nonatomic) NSString *liveGroupId;
@property (readonly, nonatomic) BOOL isFeedButtonStartFlash;
@property (nonatomic) BOOL isMerchandiseType;
@property (nonatomic) long long merchandiseOrder;
@property (copy, nonatomic) id /* block */ lynxButtonLoadFailWithButtonModelBlock;

- (BOOL)canShow;
- (id)refer;
- (void)playFlashAnimated:(BOOL)arg0;
- (BOOL)isMerchandiseType;
- (void)setIsMerchandiseType:(BOOL)arg0;
- (long long)merchandiseOrder;
- (void)setMerchandiseOrder:(long long)arg0;
- (id)bdaRifleView;
- (id /* block */)lynxButtonLoadFailBlock;
- (void)notifyAppear;
- (void)notifyDisappear;
- (void)sendVideoLoopEvent:(long long)arg0;
- (void)setLynxButtonLoadFailBlock:(id /* block */)arg0;
- (void)notifyScreenRotation;
- (void)updateLearnMoreLynxButtonWithModel:(id)arg0;
- (unsigned long long)componentTypeOfModel:(id)arg0;
- (id)liveGroupId;
- (BOOL)useStackViewLayout;
- (void)updateLynxViewHeight:(double)arg0;
- (id)lynxButtonPositionEvent;
- (void)postSearchOutFlowMonitorShowEventIfNeed;
- (id /* block */)lynxButtonLoadFailWithButtonModelBlock;
- (void)notifyTimerTriggered:(double)arg0;
- (BOOL)transformedToCard;
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
- (BOOL)isFallback;
- (id)model;
- (BOOL)isShowing;
- (id)delegate;
- (unsigned long long)componentType;
- (void)setDelegate:(id)arg0;
- (void)reset;
- (BOOL)isTop;
- (void)setIsFallback:(BOOL)arg0;

@end
