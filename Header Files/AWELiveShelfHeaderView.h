//
//     Generated by private class-dump
//

@class AWELiveShelfCustomButton, UILabel, NSDictionary, AWELiveLifeLynxView, NSMutableArray, UIView, AWELiveShelfHeaderPoiDetailView, NSString, AWELiveShelfMoreOptionViewController, AWELiveShelfHeaderViewModel, UIStackView, AWEPOICubeModel, NSNumber;

@interface AWELiveShelfHeaderView : UIView <AWEPOICubeViewDelegate> {
    BOOL _lynxLoadFinished;
    NSNumber *_lynxViewHeight;
    id /* block */ _ceilingOffsetUpdateBlock;
    id /* block */ _poiDetailTapActionBlock;
    id /* block */ _poiTitleClickedBlock;
    id /* block */ _orderBtnClickedBlock;
    id /* block */ _consultBtnClickedBlock;
    id /* block */ _vipBtnClickedBlock;
    id /* block */ _vipBtnShowedBlock;
    id /* block */ _lynxViewHeightUpdateBlock;
    id /* block */ _filterCardListBlock;
    id /* block */ _requestCardListBlock;
    UIView *_backgroundView;
    UILabel *_headerLabel;
    UILabel *_multiShopTitle;
    AWELiveShelfHeaderPoiDetailView *_poiDetailView;
    AWELiveShelfCustomButton *_orderBtn;
    AWELiveShelfCustomButton *_consultBtn;
    AWELiveShelfCustomButton *_vipBtn;
    AWELiveShelfCustomButton *_moreOPtionBtn;
    AWELiveShelfMoreOptionViewController *_moreOPtionController;
    UIStackView *_btnContainerView;
    AWELiveShelfHeaderViewModel *_viewModel;
    NSString *_vipShowedAggCardId;
    AWELiveLifeLynxView *_lynxHeaderView;
    AWEPOICubeModel *_lynxHeaderModel;
    NSDictionary *_updateParams;
    double _lynxLoadDuration;
    NSMutableArray *_storedTrackers;
    double _initBeginTime;
    double _initBeginTimeOnPreload;
}

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UILabel *multiShopTitle;
@property (retain, nonatomic) AWELiveShelfHeaderPoiDetailView *poiDetailView;
@property (retain, nonatomic) AWELiveShelfCustomButton *orderBtn;
@property (retain, nonatomic) AWELiveShelfCustomButton *consultBtn;
@property (retain, nonatomic) AWELiveShelfCustomButton *vipBtn;
@property (retain, nonatomic) AWELiveShelfCustomButton *moreOPtionBtn;
@property (retain, nonatomic) AWELiveShelfMoreOptionViewController *moreOPtionController;
@property (retain, nonatomic) UIStackView *btnContainerView;
@property (retain, nonatomic) AWELiveShelfHeaderViewModel *viewModel;
@property (copy, nonatomic) NSString *vipShowedAggCardId;
@property (retain, nonatomic) AWELiveLifeLynxView *lynxHeaderView;
@property (retain, nonatomic) NSNumber *lynxViewHeight;
@property (retain, nonatomic) AWEPOICubeModel *lynxHeaderModel;
@property (copy, nonatomic) NSDictionary *updateParams;
@property (nonatomic) BOOL lynxLoadFinished;
@property (nonatomic) double lynxLoadDuration;
@property (retain, nonatomic) NSMutableArray *storedTrackers;
@property (nonatomic) double initBeginTime;
@property (nonatomic) double initBeginTimeOnPreload;
@property (copy, nonatomic) id /* block */ ceilingOffsetUpdateBlock;
@property (copy, nonatomic) id /* block */ poiDetailTapActionBlock;
@property (copy, nonatomic) id /* block */ poiTitleClickedBlock;
@property (copy, nonatomic) id /* block */ orderBtnClickedBlock;
@property (copy, nonatomic) id /* block */ consultBtnClickedBlock;
@property (copy, nonatomic) id /* block */ vipBtnClickedBlock;
@property (copy, nonatomic) id /* block */ vipBtnShowedBlock;
@property (copy, nonatomic) id /* block */ lynxViewHeightUpdateBlock;
@property (copy, nonatomic) id /* block */ filterCardListBlock;
@property (copy, nonatomic) id /* block */ requestCardListBlock;
@property (weak, nonatomic) UIView *backgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setButton:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 vertical:(BOOL)arg2 spacing:(double)arg3;

- (void)configWithModel:(id)arg0;
- (void)trackWithEvent:(id)arg0 param:(id)arg1;
- (id)updateParams;
- (double)lynxLoadDuration;
- (void)setLynxLoadDuration:(double)arg0;
- (id)lynxViewHeight;
- (void)setLynxViewHeight:(id)arg0;
- (void)trackWithEvent:(id)arg0;
- (void)cubeView:(id)arg0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)cubeViewWillStartLoading:(id)arg0;
- (void)cubeView:(id)arg0 didStartFetchResourceWithURL:(id)arg1;
- (void)cubeView:(id)arg0 didFetchedResource:(id)arg1 error:(id)arg2;
- (void)cubeViewDidFirstScreen:(id)arg0;
- (void)cubeView:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)cubeView:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)cubeView:(id)arg0 didReceiveError:(id)arg1;
- (id)poiDetailView;
- (void)setPoiDetailView:(id)arg0;
- (void)setLynxLoadFinished:(BOOL)arg0;
- (void)setUpdateParams:(id)arg0;
- (BOOL)lynxLoadFinished;
- (BOOL)setupLynxUI;
- (double)initBeginTime;
- (void)setInitBeginTime:(double)arg0;
- (void)filterCardListWithTabId:(long long)arg0 showExplainingItem:(BOOL)arg1;
- (void)viewClosed;
- (void)viewOpen;
- (void)checkAndTrackerLynxHeight;
- (BOOL)enableLynxHeightTracker;
- (id /* block */)poiTitleClickedBlock;
- (void)setPoiTitleClickedBlock:(id /* block */)arg0;
- (void)setupNativeUI;
- (void)setLynxHeaderModel:(id)arg0;
- (id /* block */)ceilingOffsetUpdateBlock;
- (void)requestCardListWithExtraParams:(id)arg0 forPageType:(id)arg1;
- (id)lynxHeaderModel;
- (void)setLynxHeaderView:(id)arg0;
- (id)lynxHeaderView;
- (id)btnContainerView;
- (id)consultBtn;
- (id)orderBtn;
- (id)vipBtn;
- (id)moreOPtionBtn;
- (id)multiShopTitle;
- (void)configRightButtonsWithModel:(id)arg0;
- (id)vipShowedAggCardId;
- (void)setVipShowedAggCardId:(id)arg0;
- (id /* block */)vipBtnShowedBlock;
- (id)moreOPtionController;
- (id /* block */)orderBtnClickedBlock;
- (id /* block */)consultBtnClickedBlock;
- (id /* block */)vipBtnClickedBlock;
- (id /* block */)filterCardListBlock;
- (id /* block */)poiDetailTapActionBlock;
- (id /* block */)requestCardListBlock;
- (id /* block */)lynxViewHeightUpdateBlock;
- (void)poiDetailTapGestureAction;
- (void)orderBtnClicked:(id)arg0;
- (void)consultBtnClicked:(id)arg0;
- (void)vipBtnClicked:(id)arg0;
- (void)moreOptionBtnClicked:(id)arg0;
- (void)moreOptionConsultBtnClicked;
- (void)moreOptionVipBtnClicked;
- (double)topbarLynxMinHeight;
- (BOOL)optionBtnViewIsShowing;
- (void)dismissOptionBtnView;
- (void)dealOutsideScrollWithDirection:(unsigned long long)arg0 offset:(double)arg1 contentHeight:(double)arg2;
- (void)sendShelfTopbarResumeEvent;
- (void)setCeilingOffsetUpdateBlock:(id /* block */)arg0;
- (void)setPoiDetailTapActionBlock:(id /* block */)arg0;
- (void)setOrderBtnClickedBlock:(id /* block */)arg0;
- (void)setConsultBtnClickedBlock:(id /* block */)arg0;
- (void)setVipBtnClickedBlock:(id /* block */)arg0;
- (void)setVipBtnShowedBlock:(id /* block */)arg0;
- (void)setLynxViewHeightUpdateBlock:(id /* block */)arg0;
- (void)setFilterCardListBlock:(id /* block */)arg0;
- (void)setRequestCardListBlock:(id /* block */)arg0;
- (void)setMultiShopTitle:(id)arg0;
- (void)setOrderBtn:(id)arg0;
- (void)setConsultBtn:(id)arg0;
- (void)setVipBtn:(id)arg0;
- (void)setMoreOPtionBtn:(id)arg0;
- (void)setMoreOPtionController:(id)arg0;
- (void)setBtnContainerView:(id)arg0;
- (id)storedTrackers;
- (void)setStoredTrackers:(id)arg0;
- (double)initBeginTimeOnPreload;
- (void)setInitBeginTimeOnPreload:(double)arg0;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setBackgroundView:(id)arg0;
- (void)setupUI;
- (id)headerLabel;
- (void)setHeaderLabel:(id)arg0;
- (double)renderDuration;

@end
