//
//     Generated by private class-dump
//

@protocol AWEHPChannelTopBarAbilityImpl <NSObject>

- (double)tabSegmentShowPercentWithChannelId:(id)arg0;
- (void)channel:(id)arg0 topBarCancelPauseSearchEntranceWithCompletion:(id /* block */)arg1;
- (void)topBarHideRightEntranceWithChannel:(id)arg0;
- (void)channel:(id)arg0 topBarShowRightEntranceWithModel:(id)arg1;
- (struct CGPoint { double x0; double x1; })bottomCenterOfTabSegmentWithChannelId:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })topBarContainerFrameChannel:(id)arg0;
- (struct CGPoint { double x0; double x1; })channel:(id)arg0 topCenterPointOfWindowWithChannelId:(id)arg1;
- (void)channel:(id)arg0 topBarUpdateEntranceWithModel:(id)arg1 completion:(id /* block */)arg2;
- (void)channel:(id)arg0 topBarShowBadgeWithModel:(id)arg1 showCallBack:(id /* block */)arg2 hideCallBack:(id /* block */)arg3 downgradeCallBack:(id /* block */)arg4;
- (void)channel:(id)arg0 topBarHideBadgeWithCompletion:(id /* block */)arg1 isContainerHide:(BOOL)arg2;
- (void)channel:(id)arg0 topBarShowBubbleWithModel:(id)arg1 showCallback:(id /* block */)arg2 clickCallback:(id /* block */)arg3 dismissCallback:(id /* block */)arg4;
- (void)channel:(id)arg0 topBarCancelBubbleWithCompletion:(id /* block */)arg1 isContainerHide:(BOOL)arg2;
- (void)channel:(id)arg0 topBarShowEntranceBadgeWithModel:(id)arg1 showCallBack:(id /* block */)arg2;
- (void)channelHideRightEntranceBadge:(id)arg0;
- (void)channel:(id)arg0 topBarShowPauseSearchEntranceWithCompletion:(id /* block */)arg1 clickCallback:(id /* block */)arg2;
- (void)channel:(id)arg0 topBarHideCaptionEntranceWithCompletion:(id /* block */)arg1;
- (void)channel:(id)arg0 topBarChangeAlphaWith:(double)arg1;
- (void)channel:(id)arg0 scrollToTabSegmentWithChannelId:(id)arg1 animated:(BOOL)arg2;

@end
