//
//     Generated by private class-dump
//

@protocol AWEDiscoverDPlayletPanelDelegate <NSObject>

- (id)currentPlayingModel;
- (void)dismissPanelWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)initialPlayletIDStr;
- (void)loadmorePlayletData;
- (long long)initialVideoIndex;
- (id)panelDataSource;
- (void)loadPreviousPlayletData;
- (void)playletPanelDidSelect:(long long)arg0;

@optional

- (id)collectionButtonTitle;
- (id)uncollectionButtonTitle;

@end
