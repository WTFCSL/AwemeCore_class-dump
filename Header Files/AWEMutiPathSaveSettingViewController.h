//
//     Generated by private class-dump
//

@class UITableView, AWEMutiPathSaveSettingCell, NSString, UIView, NSMutableArray, UIButton;
@protocol AFDModalViewHelperProtocol;

@interface AWEMutiPathSaveSettingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEPanelTransitionWithBackground> {
    UITableView *_tableView;
    UIView *_headerView;
    UIView *_headerBar;
    UIButton *_backButton;
    UIView *_navigationView;
    NSMutableArray *_cellArray;
    AWEMutiPathSaveSettingCell *_albumCell;
    AWEMutiPathSaveSettingCell *_cloudAlbumCell;
    AWEMutiPathSaveSettingCell *_albumAndCloudAlbumCell;
    id<AFDModalViewHelperProtocol> _helper;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *headerBar;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *navigationView;
@property (retain, nonatomic) NSMutableArray *cellArray;
@property (retain, nonatomic) AWEMutiPathSaveSettingCell *albumCell;
@property (retain, nonatomic) AWEMutiPathSaveSettingCell *cloudAlbumCell;
@property (retain, nonatomic) AWEMutiPathSaveSettingCell *albumAndCloudAlbumCell;
@property (retain, nonatomic) id<AFDModalViewHelperProtocol> helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsDimmingTransitionBackground;
- (void)p_setupUI;
- (void)setHeaderBar:(id)arg0;
- (id)headerBar;
- (id)navigationView;
- (void)setNavigationView:(id)arg0;
- (id)cellArray;
- (void)setCellArray:(id)arg0;
- (void)p_configData;
- (void)p_reload;
- (id)albumCell;
- (id)cloudAlbumCell;
- (id)albumAndCloudAlbumCell;
- (unsigned long long)editQuickSaveMutiPathStyleSelected:(id)arg0;
- (void)setAlbumCell:(id)arg0;
- (void)setCloudAlbumCell:(id)arg0;
- (void)setAlbumAndCloudAlbumCell:(id)arg0;
- (id)init;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (double)contentHeight;
- (void)setHelper:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)helper;
- (void)setHeaderView:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewWillAppear:(BOOL)arg0;
- (id)headerView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (void)backButtonTapped:(id)arg0;

@end
