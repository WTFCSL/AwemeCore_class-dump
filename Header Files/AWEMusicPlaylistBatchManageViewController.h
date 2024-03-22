//
//     Generated by private class-dump
//

@class AWEMusicPlaylistBatchManageViewModel, AWEMusicDraggableTableView, UIView, NSArray, NSString, UIButton, AWEMusicPlaylistBatchManageEventUtil, AWEPlaylistDataController, AWEUILoadingView, AWEMusicDSPEventModel, AWEMusicExceptionalView, UILabel;

@interface AWEMusicPlaylistBatchManageViewController : AWEMiniLunaBaseViewController <UITableViewDelegate, UITableViewDataSource, AWEMusicPlaylistBatchManageViewModelDelegate, AWEMusicPlaylistSelectedViewControllerDelegate, AWEMusicExceptionalViewDelegate, AWEMusicPresentPushInnerProvider> {
    BOOL _isMiniLuna;
    BOOL _isCellRemoving;
    BOOL _showAddToOtherPlaylist;
    AWEMusicDSPEventModel *_eventModel;
    AWEPlaylistDataController *_dataController;
    AWEMusicPlaylistBatchManageViewModel *_viewModel;
    AWEMusicPlaylistBatchManageEventUtil *_eventUtil;
    UILabel *_titleLabel;
    UIButton *_selectAllButton;
    AWEMusicDraggableTableView *_tableView;
    AWEMusicExceptionalView *_noNetView;
    UIView *_navigationBar;
    AWEUILoadingView *_loadingView;
    long long _selectCount;
    UIView *_footerContentView;
    double _loadStartTime;
    NSArray *_selectedMusicModels;
}

@property (retain, nonatomic) AWEPlaylistDataController *dataController;
@property (retain, nonatomic) AWEMusicPlaylistBatchManageViewModel *viewModel;
@property (retain, nonatomic) AWEMusicPlaylistBatchManageEventUtil *eventUtil;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *selectAllButton;
@property (retain, nonatomic) AWEMusicDraggableTableView *tableView;
@property (retain, nonatomic) AWEMusicExceptionalView *noNetView;
@property (retain, nonatomic) UIView *navigationBar;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) long long selectCount;
@property (retain, nonatomic) UIView *footerContentView;
@property (nonatomic) BOOL isCellRemoving;
@property (nonatomic) double loadStartTime;
@property (retain, nonatomic) NSArray *selectedMusicModels;
@property (nonatomic) BOOL showAddToOtherPlaylist;
@property (nonatomic) BOOL isMiniLuna;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isMiniLuna;
- (void)setIsMiniLuna:(BOOL)arg0;
- (void)setDataController:(id)arg0;
- (id)eventUtil;
- (void)setEventUtil:(id)arg0;
- (double)loadStartTime;
- (void)setLoadStartTime:(double)arg0;
- (void)p_dismiss;
- (void)noNetViewDidTapTryAgain:(id)arg0;
- (id)eventModel;
- (void)setEventModel:(id)arg0;
- (id)noNetView;
- (void)setNoNetView:(id)arg0;
- (void)dismissNoNetView;
- (void)setShowAddToOtherPlaylist:(BOOL)arg0;
- (void)didClickSelectAll:(id)arg0;
- (void)didClickComplete;
- (void)p_loadAllWithTrialCount:(long long)arg0;
- (void)showNoNetView:(id)arg0;
- (id)selectAllButton;
- (void)didClickAdd;
- (void)didClickDelete;
- (void)setFooterContentView:(id)arg0;
- (id)footerContentView;
- (BOOL)showAddToOtherPlaylist;
- (BOOL)isCellRemoving;
- (void)setIsCellRemoving:(BOOL)arg0;
- (void)p_reorderPlaylistWithMusics:(id)arg0 isRetry:(BOOL)arg1;
- (long long)selectCount;
- (void)p_deleteSelected;
- (void)reportGroupCancelCollectWithOriginalMusicModels:(id)arg0 deleted:(id)arg1;
- (void)setSelectCount:(long long)arg0;
- (void)p_updateCellCheckStatus:(id)arg0;
- (void)selectCountDidChangeTo:(long long)arg0 isAllSelected:(BOOL)arg1;
- (void)manageSongListChanged;
- (void)playlistSelectedController:(id)arg0 didAddToItem:(id)arg1;
- (void)playlistSelectedControllerDidFailToAdd:(id)arg0;
- (id)initWithDataController:(id)arg0 showAddToOtherPlaylist:(BOOL)arg1 isMiniLuna:(BOOL)arg2;
- (void)setSelectAllButton:(id)arg0;
- (id)selectedMusicModels;
- (void)setSelectedMusicModels:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)titleLabel;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)setViewModel:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1;
- (void)setupUI;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;

@end