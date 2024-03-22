//
//     Generated by private class-dump
//

@class AWEHomePageBubbleTask, AWELeftSideBarEntranceInteractiveAnimationView, AWELeftSideBarBasePresenter, NSString;

@interface AWELeftSideBarEntranceInteractiveAnimationTask : NSObject {
    BOOL _needScroll;
    BOOL _hasScroll;
    AWELeftSideBarBasePresenter *_presenter;
    AWELeftSideBarEntranceInteractiveAnimationView *_animationView;
    AWEHomePageBubbleTask *_holdingTask;
    double _showTime;
    NSString *_scrollBusinessId;
}

@property (readonly, nonatomic) BOOL isValid;
@property (weak, nonatomic) AWELeftSideBarBasePresenter *presenter;
@property (retain, nonatomic) AWELeftSideBarEntranceInteractiveAnimationView *animationView;
@property (retain, nonatomic) AWEHomePageBubbleTask *holdingTask;
@property (nonatomic) double showTime;
@property (copy, nonatomic) NSString *scrollBusinessId;
@property (nonatomic) BOOL needScroll;
@property (nonatomic) BOOL hasScroll;

- (double)showTime;
- (void)setShowTime:(double)arg0;
- (id)holdingTask;
- (void)setHoldingTask:(id)arg0;
- (id)scrollBusinessId;
- (void)setScrollBusinessId:(id)arg0;
- (BOOL)needScroll;
- (void)setNeedScroll:(BOOL)arg0;
- (BOOL)hasScroll;
- (void)setHasScroll:(BOOL)arg0;
- (void).cxx_destruct;
- (id)presenter;
- (BOOL)isValid;
- (void)setPresenter:(id)arg0;
- (id)animationView;
- (void)setAnimationView:(id)arg0;

@end