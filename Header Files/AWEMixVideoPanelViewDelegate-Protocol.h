//
//     Generated by private class-dump
//

@protocol AWEMixVideoPanelViewDelegate <NSObject>

@optional

- (void)dismissPanelWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)mixVideoListDataHasRefresh;
- (void)willDismissPanelWithAnimated:(BOOL)arg0;
- (void)mixVideoListMoveGetProgress:(double)arg0;
- (void)cancelClosePanelShrinkVideo;
- (void)mixVideoDidTappedIndex:(long long)arg0 aweme:(id)arg1;
- (void)showH5WithUrl:(id)arg0 mixName:(id)arg1;
- (void)mixVideoListDidClickTabIsVideo:(BOOL)arg0;
- (void)syncFromDataController:(id)arg0;
- (BOOL)needLocatedAlignment;
- (id)currentModel;

@end
