//
//     Generated by private class-dump
//

@protocol AWEHotPointPanelControllerDelegate <NSObject>

- (id)currentAwemeModel;
- (id)currentHotSearchModel;
- (void)hotPointCardDidTapped:(id)arg0 index:(long long)arg1 isHotWordsTapped:(BOOL)arg2 groupIds:(id)arg3;
- (void)dismissPanelWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (long long)currentAwemeTypeForTrack;

@optional

- (id)risingHotSpotTitle;

@end
