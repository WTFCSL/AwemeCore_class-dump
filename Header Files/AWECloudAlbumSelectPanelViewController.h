//
//     Generated by private class-dump
//

@class NSIndexPath, NSString, UIView, ACCButton, UITableView;
@protocol AWECloudAlbumDataItemProtocol, AWECloudAlbumTableViewControllerDelegateProtocol, AWECloudAlbumDataManagerProtocol;

@interface AWECloudAlbumSelectPanelViewController : UIViewController <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, AWECloudAlbumTableViewCellDelegateProtocol, AWECloudAlbumCreateViewControllerDelegate> {
    BOOL _isDragScrollView;
    BOOL _hasCreateTask;
    BOOL _hasUplaodTask;
    id<AWECloudAlbumDataManagerProtocol> _dataManager;
    id<AWECloudAlbumTableViewControllerDelegateProtocol> _vcDelegate;
    UIView *_headView;
    UIView *_headBar;
    UITableView *_tableView;
    UIView *_containerView;
    ACCButton *_uploadBtn;
    UIView *_accessibilityViewToback;
    NSIndexPath *_selectedIndexPath;
    id<AWECloudAlbumDataItemProtocol> _selectedAlbum;
    struct CGPoint { double x; double y; } _startCenter;
}

@property (retain, nonatomic) id<AWECloudAlbumDataManagerProtocol> dataManager;
@property (retain, nonatomic) UIView *headView;
@property (retain, nonatomic) UIView *headBar;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) ACCButton *uploadBtn;
@property (retain, nonatomic) UIView *accessibilityViewToback;
@property (nonatomic) struct CGPoint { double x; double y; } startCenter;
@property (nonatomic) BOOL isDragScrollView;
@property (nonatomic) BOOL hasCreateTask;
@property (nonatomic) BOOL hasUplaodTask;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) id<AWECloudAlbumDataItemProtocol> selectedAlbum;
@property (weak, nonatomic) id<AWECloudAlbumTableViewControllerDelegateProtocol> vcDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (void)p_updateConstraint;
- (void)registerTableViewCellReuse;
- (void)setHeadView:(id)arg0;
- (id)headView;
- (void)setVcDelegate:(id)arg0;
- (void)p_makeConstraint;
- (void)tapToDismiss:(id)arg0;
- (void)drawCorner;
- (id)accessibilityViewToback;
- (void)addTapGestureToView:(id)arg0 withSelector:(SEL)arg1;
- (void)setAccessibilityViewToback:(id)arg0;
- (void)p_setupGestureRecognizer;
- (void)fetchRemoteAlbumList;
- (id)createNewAlbumVC;
- (id)uploadBtn;
- (void)p_updateUploadBtnIfNeed;
- (id)headBar;
- (void)uploadBtnClicked;
- (void)createAlbumWith:(id)arg0 complete:(id /* block */)arg1;
- (void)handlePanToDismiss:(id)arg0;
- (void)addPanGestureToView:(id)arg0 withSelector:(SEL)arg1;
- (void)setStartCenter:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)isDragScrollView;
- (struct CGPoint { double x0; double x1; })startCenter;
- (void)setIsDragScrollView:(BOOL)arg0;
- (void)setSelectedAlbum:(id)arg0;
- (BOOL)hasCreateTask;
- (void)setHasCreateTask:(BOOL)arg0;
- (id)vcDelegate;
- (void)dismissVCWithCompletion:(id /* block */)arg0;
- (BOOL)hasUplaodTask;
- (void)setHasUplaodTask:(BOOL)arg0;
- (id)selectedAlbum;
- (void)onCellClickedWithDelegate:(id)arg0;
- (void)setHeadBar:(id)arg0;
- (void)setUploadBtn:(id)arg0;
- (id)dataManager;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (double)contentHeight;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setContainerView:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (void)scrollViewDidScroll:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (void)setDataManager:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)containerView;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)initWithDataManager:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (BOOL)accessibilityPerformEscape;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg0;

@end