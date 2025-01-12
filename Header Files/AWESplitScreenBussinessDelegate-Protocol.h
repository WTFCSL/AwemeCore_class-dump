//
//     Generated by private class-dump
//

@class AWEInsideSplitScreenItemDetail;

@protocol AWESplitScreenBussinessDelegate <NSObject>

@property (weak, nonatomic) AWEInsideSplitScreenItemDetail *splitDetail;

- (id)splitDetail;
- (BOOL)needShowFullRightVCWhenEnterPortrait;
- (long long)showActionType;
- (BOOL)needCreateNewBussinessVC;
- (BOOL)canLeftContainerScroll;
- (void)setSplitDetail:(id)arg0;

@optional

- (BOOL)needDismissWhenDisappear;
- (BOOL)needDismissWhenUpDownSlide;
- (void)delayDisplayFullRight:(id /* block */)arg0;
- (void)willEnterSplitScreen;
- (void)didEnterSplitScreen;
- (void)willQuitSplitScreenToFullRight:(BOOL)arg0;
- (void)didQuitSplitScreenToFullRight:(BOOL)arg0;
- (void)splitScreenViewWillAppear;
- (void)splitScreenViewDidAppear;
- (void)splitScreenViewDidDisappear;
- (void)splitScreenViewWillDisappear;

@end
