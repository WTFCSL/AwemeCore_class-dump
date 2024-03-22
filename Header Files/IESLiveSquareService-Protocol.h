//
//     Generated by private class-dump
//

@protocol IESLiveSquareService <NSObject>

- (void)loadMore;
- (BOOL)cellEnterWithDraw;
- (long long)scrollLiveCellCount;
- (long long)mountedCellCount;
- (id)squareViewController;
- (id)squareContainer;
- (BOOL)noLastIndex;
- (BOOL)verticalGuideShowing;
- (void)showSwipeGuide;
- (void)showLeftPanGuide;
- (void)showLandscapeSwipeGuide;
- (void)dismissLandscapeSwipeGuide;
- (BOOL)canSwipeVertical;
- (id)currentLiveRoomModel;
- (id)nextLiveRoomModel;
- (id)slideDI;
- (void)setCurrentRoomAttachContext:(id)arg0;
- (void)swipeToIndex:(long long)arg0 animation:(BOOL)arg1;
- (long long)currentIndex;
- (BOOL)isScrolling;
- (id)models;
- (void)clear;
- (id)currentRoom;

@end
