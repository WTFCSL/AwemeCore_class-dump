//
//     Generated by private class-dump
//

@protocol AWELandscapeControllerDispatchProtocol <AWELandscapeScreenCastDispatchProtocol, AWELandscapeFeedShareDispatchProtocol, AWELandscapeDanmakuDispatchProtocol>

@optional

- (void)hideAllPanels;
- (void)showInviteWatchToolTip;
- (void)didEnterLandscape;
- (BOOL)isShowingPanel;
- (void)willExitLandscape;
- (void)willEnterSplitScreen:(BOOL)arg0 movePoint:(struct CGPoint { double x0; double x1; })arg1 scale:(double)arg2;
- (void)showReminderTips:(BOOL)arg0;
- (void)updateControllerWithAnimationOffset:(double)arg0 positon:(long long)arg1;
- (void)updateState:(long long)arg0;
- (BOOL)isInteracting;

@end