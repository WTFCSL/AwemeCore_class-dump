//
//     Generated by private class-dump
//

@protocol IESLiveGuideActions <NSObject>

@optional

- (void)willSwitchToOtherTab;
- (void)willSwitchToLiveTab;
- (void)liveTypeChangeAction:(unsigned long long)arg0;
- (void)openLiveModelDidUpdate:(id)arg0;
- (void)willStartLive;
- (void)cameraDidSet;
- (void)liveRequesting:(BOOL)arg0;
- (void)titleOrCoverDidChange;
- (void)didUpdateGuideIntercept;
- (void)didChangedGuideIntercept:(BOOL)arg0;
- (void)willCloseGuideViewController;
- (void)sourceParamsDidUpdated;
- (void)openLocactionPanel;
- (void)changeGuidePaidLiveStatus:(BOOL)arg0;
- (void)changePaidVisibleRange:(long long)arg0;
- (void)willCancelPaidLiveStateWhenChangeLiveType:(unsigned long long)arg0;
- (void)didCancelPaidLiveStateWhenChangeLiveType:(unsigned long long)arg0;
- (void)subscribeLiveSatusChangeAction:(BOOL)arg0;

@end
