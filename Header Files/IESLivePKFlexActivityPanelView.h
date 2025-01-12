//
//     Generated by private class-dump
//

@class UIView, IESLiveTableViewCellDisplayTrackHelper, NSString, UICollectionViewFlowLayout, UIImageView, UIButton, UITableView, IESLiveCountTimer, UICollectionView, IESLivePKFlexActivityPanelViewModel, UILabel;
@protocol IESLivePKCustomPanelViewDelegate, IESLivePKRecommendTabBasePanelViewDelegate;

@interface IESLivePKFlexActivityPanelView : UIView <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, UICollectionViewDelegateFlowLayout, IESLiveTableViewCellDisplayTrackHelperDelegate> {
    BOOL _canRefresh;
    BOOL _showTableView;
    id<IESLivePKCustomPanelViewDelegate> _delegate;
    id<IESLivePKRecommendTabBasePanelViewDelegate> _tabDelegate;
    UILabel *_titleLabel;
    UIButton *_registerButton;
    UILabel *_descriptionLabel;
    UIImageView *_ruleIconView;
    UIImageView *_backgroundImageView;
    UIView *_countDownContainerView;
    UILabel *_hourLabel;
    UILabel *_minuteLabel;
    UILabel *_secondLabel;
    UIView *_seperateLine;
    UIView *_headerContainerView;
    UIView *_customizeContentFooterView;
    UICollectionView *_registeredUserCollectionView;
    UICollectionViewFlowLayout *_flowLayout;
    UITableView *_inviteAnchorTableView;
    UITableView *_pkRecordTableView;
    UITableView *_customizeContentTableView;
    IESLiveCountTimer *_countDownTimer;
    IESLivePKFlexActivityPanelViewModel *_viewModel;
    double _tempOffset;
    IESLiveTableViewCellDisplayTrackHelper *_tableViewTrackHelper;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *registerButton;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *ruleIconView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *countDownContainerView;
@property (retain, nonatomic) UILabel *hourLabel;
@property (retain, nonatomic) UILabel *minuteLabel;
@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) UIView *headerContainerView;
@property (retain, nonatomic) UIView *customizeContentFooterView;
@property (retain, nonatomic) UICollectionView *registeredUserCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) UITableView *inviteAnchorTableView;
@property (retain, nonatomic) UITableView *pkRecordTableView;
@property (retain, nonatomic) UITableView *customizeContentTableView;
@property (nonatomic) BOOL canRefresh;
@property (nonatomic) BOOL showTableView;
@property (retain, nonatomic) IESLiveCountTimer *countDownTimer;
@property (retain, nonatomic) IESLivePKFlexActivityPanelViewModel *viewModel;
@property (nonatomic) double tempOffset;
@property (retain, nonatomic) IESLiveTableViewCellDisplayTrackHelper *tableViewTrackHelper;
@property (weak, nonatomic) id<IESLivePKCustomPanelViewDelegate> delegate;
@property (weak, nonatomic) id<IESLivePKRecommendTabBasePanelViewDelegate> tabDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canRefresh;
- (long long)useNewStyle;
- (void)setupSubViews;
- (id)setupDescriptionLabel;
- (void)trackClickEvent;
- (id)seperateLine;
- (void)setSeperateLine:(id)arg0;
- (void)trackPanelShow;
- (id)registerButton;
- (void)setRegisterButton:(id)arg0;
- (void)startCountDownTimer;
- (id)tabDelegate;
- (void)setTabDelegate:(id)arg0;
- (void)setMinuteLabel:(id)arg0;
- (void)setHourLabel:(id)arg0;
- (void)setCanRefresh:(BOOL)arg0;
- (BOOL)trackDisplayedCellWithIndexPath:(id)arg0;
- (id)tableViewTrackHelper;
- (void)setTableViewTrackHelper:(id)arg0;
- (id)countDownContainerView;
- (void)setCountDownContainerView:(id)arg0;
- (void)onClickedRuleIcon;
- (void)statusChangeTo:(unsigned long long)arg0;
- (void)doStatusChangeToRegistering;
- (void)doStatusChangeToRegistered;
- (void)doStatusChangeToRunning;
- (void)updateCountDownLabelWithTime:(unsigned long long)arg0;
- (id)inviteAnchorTableView;
- (void)setInviteAnchorTableView:(id)arg0;
- (void)updateWithViewModel;
- (void)stopCountDownTimer;
- (id)setupHeaderContainerView;
- (void)setupDisplayContent;
- (void)updateHeaderViewIfNeeded;
- (BOOL)showTableView;
- (void)setRuleIconView:(id)arg0;
- (id)ruleIconView;
- (void)onClickedRegisterButton;
- (void)setupCountDownView;
- (void)setupPKRecordView;
- (void)setupInviteeListView;
- (void)setupRegisteredUserView;
- (void)setupCustomizeContent;
- (void)setCustomizeContentFooterView:(id)arg0;
- (id)customizeContentFooterView;
- (void)setShowTableView:(BOOL)arg0;
- (id)customizeContentTableView;
- (id)registeredUserCollectionView;
- (id)pkRecordTableView;
- (double)tempOffset;
- (void)setTempOffset:(double)arg0;
- (void)trackDisplayedCells;
- (void)setRegisteredUserCollectionView:(id)arg0;
- (void)setPkRecordTableView:(id)arg0;
- (void)setCustomizeContentTableView:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)backgroundImageView;
- (void)setDescriptionLabel:(id)arg0;
- (id)titleLabel;
- (id)descriptionLabel;
- (void)setViewModel:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)headerContainerView;
- (void)setHeaderContainerView:(id)arg0;
- (id)flowLayout;
- (void)setFlowLayout:(id)arg0;
- (id)hourLabel;
- (id)minuteLabel;
- (void)setBackgroundImageView:(id)arg0;
- (void)setCountDownTimer:(id)arg0;
- (id)countDownTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;
- (id)secondLabel;
- (void)setSecondLabel:(id)arg0;

@end
