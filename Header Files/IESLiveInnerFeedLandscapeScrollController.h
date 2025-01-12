//
//     Generated by private class-dump
//

@class IESLiveInnerFeedContext, NSString;

@interface IESLiveInnerFeedLandscapeScrollController : NSObject <IESLiveInnerFeedDataControlAction, IESLiveInnerFeedLandscapeScrollService> {
    IESLiveInnerFeedContext *_context;
    unsigned long long _currentIndex;
}

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (nonatomic) unsigned long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)transitionAnimateCompletion;
- (BOOL)shouldProhibitLandscapeSlideDownWith:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)isHorizontalJumpEnableWith:(BOOL)arg0;
- (void)innerFeedDidMountObject:(id)arg0 atIndex:(long long)arg1 lastIndex:(long long)arg2;
- (void)innerFeedDidDeleteItems:(id)arg0;
- (void)p_handleOrientationChanged:(long long)arg0;
- (void)p_handlePanGestureRecognizer:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)currentIndex;
- (void)setContext:(id)arg0;
- (void)setCurrentIndex:(unsigned long long)arg0;
- (id)context;

@end
