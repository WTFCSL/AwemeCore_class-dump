//
//     Generated by private class-dump
//

@class UIView, IESLiveSensitiveNewView, NSArray, UIScrollView, NSString, IESLiveSensitiveStore, UIButton, UITableView, UIVisualEffectView, UILabel, IESLiveSensitiveInputView;
@protocol IESLivePerfSampler;

@interface IESLiveAdminManagerNewVC : UIViewController <UITableViewDataSource, UITableViewDelegate, IESLiveModalPresentable, IESLiveAdminManagerProtocol> {
    BOOL _keyboardDidHide;
    id /* block */ dissmissBlock;
    UITableView *_managerListView;
    IESLiveSensitiveNewView *_footerView;
    UIVisualEffectView *_effectView;
    NSArray *_cellItemArray;
    IESLiveSensitiveStore *_store;
    IESLiveSensitiveInputView *_inputView;
    UIButton *_keyboardMaskView;
    UIView *_containerView;
    UIScrollView *_scrollView;
    UIView *_fakeNavigatorView;
    UILabel *_titleLabel;
    UIButton *_backBtn;
    UIView *_landMaskView;
    UIView *_landBaseView;
    double _totalCellHeight;
    id<IESLivePerfSampler> _perfSampler;
    double _appearTime;
    UIView *_parentView;
}

@property (retain, nonatomic) UITableView *managerListView;
@property (retain, nonatomic) IESLiveSensitiveNewView *footerView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (copy, nonatomic) NSArray *cellItemArray;
@property (retain, nonatomic) IESLiveSensitiveStore *store;
@property (retain, nonatomic) IESLiveSensitiveInputView *inputView;
@property (nonatomic) BOOL keyboardDidHide;
@property (retain, nonatomic) UIButton *keyboardMaskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *fakeNavigatorView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UIView *landMaskView;
@property (retain, nonatomic) UIView *landBaseView;
@property (nonatomic) double totalCellHeight;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) double appearTime;
@property (weak, nonatomic) UIView *parentView;
@property (copy, nonatomic) id /* block */ dissmissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)backBtn;
- (void)setBackBtn:(id)arg0;
- (void)setTotalCellHeight:(double)arg0;
- (double)totalCellHeight;
- (double)safeBottom;
- (double)appearTime;
- (void)setAppearTime:(double)arg0;
- (void)setDissmissBlock:(id /* block */)arg0;
- (id /* block */)dissmissBlock;
- (void)refreshFooter;
- (id)trackDictionary;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (void)keyBoardWillShow:(id)arg0;
- (id)fakeNavigatorView;
- (id)managerListView;
- (void)fetchSensitiveWords;
- (void)setKeyboardDidHide:(BOOL)arg0;
- (void)reLayout;
- (double)baseTableViewHei;
- (void)addBackBtnIfNeed;
- (void)reSetContainerViewCorner;
- (void)managerListViewShowTrack;
- (void)setLandMaskView:(id)arg0;
- (void)gestureRecognizerAction:(id)arg0;
- (id)landMaskView;
- (void)setLandBaseView:(id)arg0;
- (id)landBaseView;
- (void)keyBoardWillHidden:(id)arg0;
- (void)addActionsSuccessTrack:(BOOL)arg0 error:(id)arg1 content:(id)arg2;
- (void)delActionTrack:(id)arg0;
- (id)keyboardMaskView;
- (void)hiddenSensitiveInputView;
- (void)landShowSensitiveInputView:(double)arg0;
- (void)landHideInputView;
- (void)addActionTrack;
- (void)setCellItemArray:(id)arg0;
- (double)sizeHei;
- (void)keyboardMaskViewAction;
- (void)addSensitiveWord:(id)arg0;
- (void)deleteSensitiveWord:(id)arg0 index:(long long)arg1;
- (id)cellItemArray;
- (void)managerClickTrack:(id)arg0;
- (void)showInLandView:(id)arg0;
- (void)updateCellItems:(id)arg0;
- (void)topBackAction;
- (void)setManagerListView:(id)arg0;
- (void)setKeyboardMaskView:(id)arg0;
- (void)setFakeNavigatorView:(id)arg0;
- (void)setScrollView:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)footerView;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (id)effectView;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void)setFooterView:(id)arg0;
- (id)initWithStore:(id)arg0;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)store;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (void)hideKeyboard;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setStore:(id)arg0;
- (void)setEffectView:(id)arg0;
- (void)setInputView:(id)arg0;
- (id)containerView;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)inputView;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)viewWillLayoutSubviews;
- (id)scrollView;
- (void)addObserver;
- (void)backAction;
- (void)dismissViewController;
- (BOOL)keyboardDidHide;
- (void)resetLayout;
- (id)parentView;
- (void)setParentView:(id)arg0;
- (void)addButtonAction:(id)arg0;
- (void)reloadTableView;
- (id)errorMessage:(id)arg0;

@end
