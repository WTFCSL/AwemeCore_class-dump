//
//     Generated by private class-dump
//

@interface AWEHomePageRemoteRefreshTabController : AWEHomePageRemoteCommonController {
    BOOL _isConsumed;
    BOOL _isSingleCell;
}

@property (nonatomic) BOOL isConsumed;
@property (nonatomic) BOOL isSingleCell;

- (void)homePageRemotePanelDidShow;
- (BOOL)isBusinessConsumed;
- (BOOL)canShowCellView;
- (void)homePageRemoteCellClick;
- (BOOL)needLoadController;
- (void)reloadControllerCellWithModuleCellCount:(long long)arg0;
- (void)homePageRemotePanelDidDismissWithReason:(long long)arg0;
- (BOOL)isConsumed;
- (BOOL)isSingleCell;
- (void)setIsSingleCell:(BOOL)arg0;
- (void)setIsConsumed:(BOOL)arg0;

@end
