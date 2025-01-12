//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, AWEPlaylistBannerInfo, UIImageView, NSDictionary, UITableView, NSMutableSet, AWEMusicExceptionalView, BDXBridgeEventSubscriber;
@protocol AWEMusicPlaylistTableViewCellViewModelProtocol;

@interface AWEMusicPlaylistAnchorViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEMusicExceptionalViewDelegate, AWEMusicPlaylistTableViewCellDelegate, AWEMusicPlaylistHeaderViewDelegate, AWEMusicSelectContainerViewControllerDelegate, AWERouterViewControllerProtocol> {
    BOOL _hasMore;
    BOOL _hasReportBannerShow;
    NSDictionary *_trackParams;
    UITableView *_tableView;
    UIView *_noPlaylistView;
    AWEMusicExceptionalView *_exceptionView;
    UIView *_tipView;
    UIImageView *_bannerView;
    NSString *_secUid;
    NSArray<AWEMusicPlaylistTableViewCellViewModelProtocol> *_cellModels;
    long long _cursor;
    NSMutableSet *_playlistIdSet;
    NSString *_creationID;
    AWEPlaylistBannerInfo *_bannerInfo;
    BDXBridgeEventSubscriber *_subscriber;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *noPlaylistView;
@property (retain, nonatomic) AWEMusicExceptionalView *exceptionView;
@property (retain, nonatomic) UIView *tipView;
@property (retain, nonatomic) UIImageView *bannerView;
@property (copy, nonatomic) NSString *secUid;
@property (retain, nonatomic) NSArray<AWEMusicPlaylistTableViewCellViewModelProtocol> *cellModels;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSMutableSet *playlistIdSet;
@property (copy, nonatomic) NSString *creationID;
@property (retain, nonatomic) AWEPlaylistBannerInfo *bannerInfo;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (nonatomic) BOOL hasReportBannerShow;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)secUid;
- (id)trackParams;
- (id)cellModels;
- (void)setSecUid:(id)arg0;
- (void)setTrackParams:(id)arg0;
- (void)p_addNotifications;
- (id)creationID;
- (void)setCreationID:(id)arg0;
- (void)setCellModels:(id)arg0;
- (void)closeViewControllerNotification:(id)arg0;
- (id)exceptionView;
- (void)setExceptionView:(id)arg0;
- (void)musicSelectViewControllerFinished:(id)arg0;
- (void)noNetViewDidTapTryAgain:(id)arg0;
- (void)clearAndFetchData;
- (void)pageAppearEventTrack;
- (id)noPlaylistView;
- (void)p_jumptoBannerSchema;
- (void)p_endFooterRefreshWithHasMore:(BOOL)arg0;
- (void)p_loadmore;
- (void)queryPlaylistWithBlock:(id /* block */)arg0;
- (void)setBannerInfo:(id)arg0;
- (id)bannerInfo;
- (BOOL)hasReportBannerShow;
- (void)p_reportBannerEvent:(id)arg0;
- (void)setHasReportBannerShow:(BOOL)arg0;
- (void)p_reportPageClick:(id)arg0;
- (void)p_endFooterRefresh;
- (void)p_createPlaylistWithEnterMethod:(id)arg0;
- (void)p_showMusicSelectWithPlaylistInfo:(id)arg0;
- (void)p_gotoPlaylistPreviewWithPlaylistInfo:(id)arg0 emptyPlaylistInfo:(id)arg1 trackParams:(id)arg2;
- (void)p_didAddPlaylistAnchorOfCellModel:(id)arg0 enterFrom:(id)arg1;
- (void)appendPlaylistModels:(id)arg0;
- (id)playlistIdSet;
- (void)p_createPlaylist;
- (void)didClickTipMore;
- (void)playlistTableViewCell:(id)arg0 didClickAddButton:(id)arg1;
- (void)headerViewDidTapAdd:(id)arg0;
- (void)setNoPlaylistView:(id)arg0;
- (void)setPlaylistIdSet:(id)arg0;
- (long long)cursor;
- (id)init;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)fetchData;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)subscriber;
- (void)viewDidLoad;
- (void)setCursor:(long long)arg0;
- (void)setupViews;
- (id)bannerView;
- (void)setBannerView:(id)arg0;
- (id)tipView;
- (void)setTipView:(id)arg0;
- (void)setSubscriber:(id)arg0;
- (long long)loadCount;

@end
