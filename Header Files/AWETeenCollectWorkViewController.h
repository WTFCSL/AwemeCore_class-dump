//
//     Generated by private class-dump
//

@class AWETeenAlbumCollectListDataController, UITableView, NSString, AWEUILoadingView, AWEUserModel, AWETeenVideoCollectionDataController;
@protocol AWEUserProfileTabVCDelegate;

@interface AWETeenCollectWorkViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWETeenCollectMessage, AWETeenSubscribeMessage, AWETeenAlbumCollectMessage, AWEUserProfileTabBaseMethod> {
    BOOL _videoRequestSuccess;
    BOOL _albumRequestSuccess;
    BOOL _isFirstAppear;
    id<AWEUserProfileTabVCDelegate> _delegate;
    UITableView *_tableView;
    AWETeenVideoCollectionDataController *_videoDataController;
    AWETeenAlbumCollectListDataController *_albumDataController;
    AWEUserModel *_user;
    AWEUILoadingView *_loadingView;
    long long _videoCollectRow;
    long long _albumCollectRow;
    long long _videoShowCount;
    long long _albumShowCount;
    struct CGPoint { double x; double y; } _savedContentOffset;
}

@property (retain, nonatomic) AWETeenVideoCollectionDataController *videoDataController;
@property (retain, nonatomic) AWETeenAlbumCollectListDataController *albumDataController;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) struct CGPoint { double x; double y; } savedContentOffset;
@property (nonatomic) BOOL videoRequestSuccess;
@property (nonatomic) BOOL albumRequestSuccess;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) long long videoCollectRow;
@property (nonatomic) long long albumCollectRow;
@property (nonatomic) long long videoShowCount;
@property (nonatomic) long long albumShowCount;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> delegate;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (double)contentOffsetY;
- (void)setIsFirstAppear:(BOOL)arg0;
- (void)p_setupUI;
- (void)p_onScrollDidEnd;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })arg0 animated:(BOOL)arg1;
- (double)contentSizeHeight;
- (void)setSavedContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })savedContentOffset;
- (void)p_configData;
- (void)didUpdateAlbumCollectStatus:(long long)arg0 albumID:(id)arg1;
- (void)didUpdateSubscribeStatus:(long long)arg0 secUserID:(id)arg1;
- (void)didFinishCollectWithItemID:(id)arg0 actionType:(unsigned long long)arg1 collectCount:(id)arg2;
- (void)handleVideoDiggedNotification:(id)arg0;
- (void)p_eventTracnkingFavouriteShow;
- (id)videoDataController;
- (void)setVideoRequestSuccess:(BOOL)arg0;
- (id)albumDataController;
- (void)setAlbumRequestSuccess:(BOOL)arg0;
- (BOOL)videoRequestSuccess;
- (BOOL)albumRequestSuccess;
- (void)p_refreshVideoData;
- (long long)videoShowCount;
- (void)p_refreshAlbumData;
- (long long)albumShowCount;
- (void)setVideoCollectRow:(long long)arg0;
- (void)setAlbumCollectRow:(long long)arg0;
- (long long)videoCollectRow;
- (long long)albumCollectRow;
- (void)p_refreshAllData;
- (void)removeAllIfNeededWithUser:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0 referString:(id)arg1;
- (void)setVideoDataController:(id)arg0;
- (void)setAlbumDataController:(id)arg0;
- (void)setVideoShowCount:(long long)arg0;
- (void)setAlbumShowCount:(long long)arg0;
- (void)setUser:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (id)user;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (id)initWithUser:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg0;
- (id)contentView;
- (id)delegate;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (BOOL)isFirstAppear;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)refreshData;

@end