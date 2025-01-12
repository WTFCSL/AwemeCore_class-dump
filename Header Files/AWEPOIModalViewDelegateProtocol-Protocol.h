//
//     Generated by private class-dump
//

@protocol AWEPOIModalViewManagerProtocol;

@protocol AWEPOIModalViewDelegateProtocol <NSObject>

@property (weak, nonatomic) id<AWEPOIModalViewManagerProtocol> manager;

- (double)initialModalViewRatio;
- (void)modalViewGestureDidEnd:(id)arg0 deltaOffset:(double)arg1 currentRatio:(double)arg2 currentStatus:(long long)arg3 scrollDirection:(unsigned long long)arg4 hasExceedSpeedLimit:(BOOL)arg5 gestureRecognizer:(id)arg6;
- (BOOL)modalViewGestureHasChanged:(id)arg0 deltaOffset:(double)arg1 currentRatio:(double)arg2 currentStatus:(long long)arg3 scrollDirection:(unsigned long long)arg4 hasExceedSpeedLimit:(BOOL)arg5 gestureRecognizer:(id)arg6;
- (void)setManager:(id)arg0;
- (id)manager;

@optional

- (double)modalViewContentOffsetToScrollContainer;
- (double)fastCloseCoefficient;
- (BOOL)shouldStuckWhenStateChangeTo:(long long)arg0;
- (double)modalViewIgnoreHeightWhenEnterFullScreen;
- (double)modalViewPlaceHolderOffset;
- (void)modalViewDidChangeToRatio:(double)arg0;
- (void)modalViewContentOffsetDidChange:(double)arg0;
- (void)modalViewDidTapPlaceHolder;

@end
