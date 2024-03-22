//
//     Generated by private class-dump
//

@class AWELeftSideBarActivityCellDataModel, AWELeftSideBarListCellDataModel, MMKV, UIView, NSTimer, AWELeftSideBarTimeManager;
@protocol AWELeftSideBarStencilViewProtocol;

@interface AWELeftSideBarActivityPresenter : AWELeftSideBarBasePresenter {
    UIView<AWELeftSideBarStencilViewProtocol> *_listView;
    AWELeftSideBarActivityCellDataModel *_cellDataModel;
    AWELeftSideBarListCellDataModel *_viewModel;
    MMKV *_mmkv;
    NSTimer *_redDotTimer;
    NSTimer *_subTitleTimer;
    NSTimer *_entranceTimer;
    AWELeftSideBarTimeManager *_timeManager;
}

@property (retain, nonatomic) UIView<AWELeftSideBarStencilViewProtocol> *listView;
@property (retain, nonatomic) AWELeftSideBarActivityCellDataModel *cellDataModel;
@property (retain, nonatomic) AWELeftSideBarListCellDataModel *viewModel;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSTimer *redDotTimer;
@property (retain, nonatomic) NSTimer *subTitleTimer;
@property (retain, nonatomic) NSTimer *entranceTimer;
@property (retain, nonatomic) AWELeftSideBarTimeManager *timeManager;

- (void)showRedDot;
- (void)setMmkv:(id)arg0;
- (id)mmkv;
- (void)updateSubTitle;
- (void)hideRedDot;
- (id)redDotTimer;
- (void)setRedDotTimer:(id)arg0;
- (void)leftSideBarPresenterOnReload:(id)arg0;
- (BOOL)needLoadPresenter;
- (void)onLeftSideBarOpen;
- (id)bussinessTrackInfo;
- (void)leftSideBarEntranceViewOnCreate;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:(long long)arg0;
- (void)leftSideBarCellClick;
- (id)initWithContext:(id)arg0 extraData:(id)arg1;
- (id)leftSideBarActivityCellDataModel:(id)arg0;
- (void)setCellDataModel:(id)arg0;
- (id)leftSideBarListCellDataModel;
- (void)updateRedDotAndSubTitle;
- (id)cellDataModel;
- (void)checkRedDotWhetherTheCurrentTimeNeedMonitorWithStartTime:(double)arg0 endTime:(double)arg1;
- (void)stopRedDotTimer;
- (void)checkSubTitleWhetherTheCurrentTimeNeedMonitorWithStartTime:(double)arg0 endTime:(double)arg1;
- (id)subTitleTimer;
- (void)stopSubTitleTimer;
- (id)redDotVersionKey;
- (id)subTitleVersionKey;
- (void)hideSubTitle;
- (void)checkRedDotForStart;
- (void)stopEntranceTimer;
- (void)updateRedDot;
- (BOOL)isRedDotDisplayed;
- (BOOL)isSubTitleDisplayed;
- (BOOL)isEntranceRedDotDisplayed;
- (id)entranceRedDotVersionKey;
- (void)startEntranceRemoveRedDotTimer;
- (void)startCellRedDotTimer:(double)arg0 withStart:(BOOL)arg1;
- (void)startCellSubTitleTimer:(double)arg0 withStart:(BOOL)arg1;
- (void)updateRedDotWithTimeForStart:(BOOL)arg0;
- (void)updateSubTitleWithTimeForStart:(BOOL)arg0;
- (void)setSubTitleTimer:(id)arg0;
- (void)setEntranceTimer:(id)arg0;
- (id)entranceTimer;
- (void)setListView:(id)arg0;
- (id)listView;
- (void)setTimeManager:(id)arg0;
- (id)timeManager;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)dealloc;
- (void)showSubTitle;

@end