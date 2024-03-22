//
//     Generated by private class-dump
//

@class AWEListDataController, DUXLoadingToast, NSString, DUXButton, UIView, AWEProfileBatchChooseWorkViewController;
@protocol AWEProfileBatchModifyViewControllerDelegate, AWEProfileBatchChooseWorkDataControllerProtocol;

@interface AWEProfileBatchModifyViewController : UIViewController <AWEProfileBatchChooseWorkDelegate, AWEProfileBatchChooseWorkDataSource, AWEProfileBatchModifyViewControllerProtocol> {
    BOOL _isViewOnAppear;
    BOOL _needReloadData;
    long long _scene;
    UIView *_footerView;
    DUXButton *_leftButton;
    DUXButton *_rightButton;
    AWEProfileBatchChooseWorkViewController *_workVC;
    AWEListDataController<AWEProfileBatchChooseWorkDataControllerProtocol> *_dataController;
    id<AWEProfileBatchModifyViewControllerDelegate> _delegate;
    DUXLoadingToast *_loadingToast;
}

@property (nonatomic) long long scene;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) DUXButton *leftButton;
@property (retain, nonatomic) DUXButton *rightButton;
@property (retain, nonatomic) AWEProfileBatchChooseWorkViewController *workVC;
@property (retain, nonatomic) AWEListDataController<AWEProfileBatchChooseWorkDataControllerProtocol> *dataController;
@property (weak, nonatomic) id<AWEProfileBatchModifyViewControllerDelegate> delegate;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (nonatomic) BOOL isViewOnAppear;
@property (nonatomic) BOOL needReloadData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configDelegate:(id)arg0;
- (void)setDataController:(id)arg0;
- (id)initWithDataController:(id)arg0;
- (void)closeButtonClick;
- (void)setNeedReloadData:(BOOL)arg0;
- (BOOL)needReloadData;
- (id)loadingToast;
- (void)setLoadingToast:(id)arg0;
- (void)moreButtonClick;
- (void)deleteButtonClick;
- (void)configItemID:(id)arg0 isRemove:(BOOL)arg1;
- (void)configScene:(long long)arg0;
- (void)configMaxChosenCount:(long long)arg0;
- (void)configInitialCollectionViewContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)setIsViewOnAppear:(BOOL)arg0;
- (BOOL)isViewOnAppear;
- (void)didClickChooseButtonAtIndexPath:(id)arg0 isChoose:(BOOL)arg1;
- (id)workVC;
- (void)addToFavoriteFolderButtonClick;
- (void)configButtonEnabled:(BOOL)arg0;
- (void)trackItemClickWithItemCount:(unsigned long long)arg0 clickPosition:(id)arg1;
- (void)configInitialCollectionViewContentOffsetWithLongPressItemID:(id)arg0;
- (void)setWorkVC:(id)arg0;
- (void)setLeftButton:(id)arg0;
- (id)leftButton;
- (id)rightButton;
- (id)footerView;
- (void)setScene:(long long)arg0;
- (void)setFooterView:(id)arg0;
- (void).cxx_destruct;
- (void)setRightButton:(id)arg0;
- (void)show;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)reloadData;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)delegate;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (long long)scene;
- (void)setupUI;
- (id)dataController;
- (void)didSelectItemAtIndexPath:(id)arg0;
- (id)tabName;

@end