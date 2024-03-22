//
//     Generated by private class-dump
//

@class AWEWatchVideoLaterDataController, NSArray, AWELeftSideBarWatchVideoLaterContainerView, NSString, AWELeftSideBarWatchVideoLaterConfigModel;

@interface AWELeftSideBarWatchVideoLaterPresenter : AWELeftSideBarBasePresenter <AWELeftSideBarWatchVideoLaterContainerViewDelegate> {
    AWELeftSideBarWatchVideoLaterConfigModel *_config;
    AWEWatchVideoLaterDataController *_dataController;
    NSArray *_watchLaterList;
    AWELeftSideBarWatchVideoLaterContainerView *_containerView;
}

@property (retain, nonatomic) AWELeftSideBarWatchVideoLaterConfigModel *config;
@property (retain, nonatomic) AWEWatchVideoLaterDataController *dataController;
@property (copy, nonatomic) NSArray *watchLaterList;
@property (retain, nonatomic) AWELeftSideBarWatchVideoLaterContainerView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataController:(id)arg0;
- (void)leftSideBarPresenterOnReload:(id)arg0;
- (void)leftSideBarViewWillAppear;
- (BOOL)needLoadPresenter;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:(long long)arg0;
- (void)leftSideBarViewDidAppear;
- (void)leftSideBarViewWillDisAppear;
- (void)leftSideBarViewDidDisAppear;
- (void)showReloadAnimation;
- (id)initWithContext:(id)arg0 extraData:(id)arg1;
- (void)onCreateContainerViewCollectionCell:(id)arg0 atIndexPath:(id)arg1;
- (void)containerViewDidSelectItemAtIndexPath:(id)arg0;
- (long long)containerViewNumberOfItemsInSection:(long long)arg0;
- (BOOL)enableModule;
- (void)onClickShowAllButton;
- (double)textHeightAtIndexPath:(id)arg0 width:(double)arg1;
- (id)leftSideBarWatchVideoLaterConfigModelForConfigData:(id)arg0;
- (void)onShowWatchVideoLaterEntryAnimationNotification:(id)arg0;
- (id)watchLaterList;
- (void)setWatchLaterList:(id)arg0;
- (BOOL)listSortOptEnable;
- (void)trackWatchLaterButtonShow;
- (void)trackClickItemWithItemId:(id)arg0 extraParams:(id)arg1;
- (void)trackWatchLaterButtonClick;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id)dataController;

@end