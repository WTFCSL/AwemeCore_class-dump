//
//     Generated by private class-dump
//

@protocol IESLiveMessageListCellViewDelegate <NSObject>

- (void)touchCellWithPoint:(struct CGPoint { double x0; double x1; })arg0 node:(id)arg1 cell:(id)arg2;
- (void)longPressCellView:(id)arg0 node:(id)arg1;

@optional

- (void)resendMessage:(id)arg0;
- (void)commonNodesDidRemovedWithExceededNodes:(id)arg0;
- (void)showNodesOverThanCachedCount:(id)arg0;
- (void)willDisplayCellWith:(id)arg0;
- (void)didNodeDisplayOnce:(id)arg0;
- (void)didEndDisplayingCellWith:(id)arg0 bySlideOut:(BOOL)arg1;
- (void)willReachTopBoundWith:(id)arg0 byNaturalSlide:(BOOL)arg1;
- (void)touchCellShowUserCardWithNode:(id)arg0;
- (void)reloadNode:(id)arg0;
- (void)cell:(id)arg0 highlighted:(BOOL)arg1 bgView:(id)arg2 node:(id)arg3;

@end