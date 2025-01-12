//
//     Generated by private class-dump
//

@class AWEMusicDraggableTableView, UIView, NSArray, NSString, AWEMusicPlaylistBatchManageEventUtil, UIButton, AWECreatePlaylistViewModel, AWEMusicExceptionalView, UILabel;

@interface AWEMusicPlaylistOfflineBatchManageViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    BOOL _isAllSelected;
    AWECreatePlaylistViewModel *_viewModel;
    AWEMusicPlaylistBatchManageEventUtil *_eventUtil;
    UILabel *_titleLabel;
    UIButton *_selectAllButton;
    AWEMusicDraggableTableView *_tableView;
    AWEMusicExceptionalView *_emptyView;
    UIView *_navigationBar;
    long long _selectCount;
    UIView *_footerContentView;
    NSArray *_selectedMusicModels;
    NSArray *_cellModels;
}

@property (retain, nonatomic) AWECreatePlaylistViewModel *viewModel;
@property (retain, nonatomic) AWEMusicPlaylistBatchManageEventUtil *eventUtil;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *selectAllButton;
@property (retain, nonatomic) AWEMusicDraggableTableView *tableView;
@property (retain, nonatomic) AWEMusicExceptionalView *emptyView;
@property (retain, nonatomic) UIView *navigationBar;
@property (nonatomic) long long selectCount;
@property (retain, nonatomic) UIView *footerContentView;
@property (retain, nonatomic) NSArray *selectedMusicModels;
@property (retain, nonatomic) NSArray *cellModels;
@property (nonatomic) BOOL isAllSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellModels;
- (id)eventUtil;
- (void)setEventUtil:(id)arg0;
- (BOOL)isAllSelected;
- (void)setCellModels:(id)arg0;
- (void)p_dismiss;
- (void)setIsAllSelected:(BOOL)arg0;
- (id)initWithCreateViewModel:(id)arg0;
- (void)didClickSelectAll:(id)arg0;
- (void)didClickComplete;
- (id)selectAllButton;
- (void)didClickDelete;
- (void)setFooterContentView:(id)arg0;
- (id)footerContentView;
- (long long)selectCount;
- (void)p_deleteSelected;
- (void)setSelectCount:(long long)arg0;
- (void)p_updateCellCheckStatus:(id)arg0;
- (void)setSelectAllButton:(id)arg0;
- (id)selectedMusicModels;
- (void)setSelectedMusicModels:(id)arg0;
- (void)showEmptyView:(id)arg0;
- (void)p_updateSelectAllWithStatus:(BOOL)arg0;
- (void)p_refreshAll;
- (void)p_refreshViewBySelectedCount;
- (void)p_checkCountIfEmpty;
- (void)p_selectedSongAtIndexPath:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)titleLabel;
- (void)setViewModel:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1;
- (void)setupUI;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;

@end
