//
//     Generated by private class-dump
//

@protocol AWELandscapeFeedViewControllerDelegate <NSObject>

- (void)quitFromLandscapeFeed:(id)arg0;

@optional

- (BOOL)enableRotate;
- (void)quitByChangeToPortrait:(id)arg0;
- (void)quitFromLandScapeFeedWithRequestOrder:(BOOL)arg0 requestOrderSchema:(id)arg1;
- (void)quitFromLandScapeWithShouldShowRewardedAdvertising:(BOOL)arg0 params:(id)arg1;
- (void)quitFromLandscapeFeedForPinchView:(id)arg0;
- (void)quitFromLandscapeFeedForPersonalStory:(id)arg0;
- (void)resetSpeedIfNeededForPinchView;
- (void)landscapeCollectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 awemeModel:(id)arg3;

@end