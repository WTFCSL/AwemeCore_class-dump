//
//     Generated by private class-dump
//

@protocol AWEProfileBannerContext <NSObject>

@property (readonly, nonatomic) BOOL isTopVideoFullScreen;
@property (readonly, nonatomic) BOOL isContrailFullScreen;

- (BOOL)isTopVideoFullScreen;
- (BOOL)isContrailFullScreen;
- (BOOL)getVal_isContrailFullScreen;

@optional

- (void)updateNavBtnAlpha:(double)arg0;
- (void)scrollOffsetYLessThanTopVideoEntryOffsetY;
- (BOOL)isCurrentViewControllerSticky;
- (void)contrailWillEnterFullScreen;
- (void)contrailEnterFullScreenWithFullScreenTopOffsetY:(double)arg0 animation:(id /* block */)arg1;
- (void)contrailDidFinishedEnterFullScreenWithAnimationSucceed:(BOOL)arg0;
- (void)contrailWillLeaveFullScreenWithShowTabBar:(BOOL)arg0;
- (void)contrailLeaveFullScreen;
- (void)contrailDidFinishedLeaveFullScreen;
- (void)showContailGuideWithShowDuration:(double)arg0 guideStayDuration:(double)arg1 guideDisplayHeight:(double)arg2 endDuration:(double)arg3 contrail:(id)arg4;
- (void)topVideoDidFinishedEnterFullScreen;
- (void)topVideoDidFinishedLeaveFullScreen;
- (void)topVideoEnterFullScreenWithAnimation:(BOOL)arg0 fullScreenTopOffsetY:(double)arg1;
- (void)topVideoLeaveFullScreenWithAnimation:(BOOL)arg0;
- (void)topVideoWillEnterFullScreen;
- (void)topVideoWillLeaveFullScreen;

@end
