//
//     Generated by private class-dump
//

@class IESLiveCommonKTVOrderPanelModel, UIView, NSArray, IESLiveKTVControlBar, IESLiveKTVOrderPanelCollectionView, NSString, UIButton, IESLiveSegmentedControl, IESLiveKTVCommonStore, IESLiveKTVOptimizeSettingPanel, UILabel, IESLiveInteractionKTVMusicFeedbackView;
@protocol IESLiveKTVTuningViewProtocol;

@interface IESLiveKTVHomePanel : UIView <IESLiveKTVControlBarDelegate, IESLiveKTVOptimizeCellDelegate, IESLiveKTVPopUpViewProtocol> {
    BOOL _isFeedbackPanelShowing;
    id /* block */ _hideCallback;
    IESLiveKTVCommonStore *_store;
    IESLiveKTVControlBar *_controlBar;
    IESLiveKTVOrderPanelCollectionView *_orderPanel;
    UIView<IESLiveKTVTuningViewProtocol> *_tuningView;
    UIView *_tuningTopEmptyView;
    IESLiveInteractionKTVMusicFeedbackView *_musicFeedbackView;
    double _startTime;
    UIView *_musicFeedbackViewEmptyClickedView;
    IESLiveCommonKTVOrderPanelModel *_panelModel;
    IESLiveSegmentedControl *_segControl;
    NSArray *_unReadLabels;
    long long _orderCount;
    UIView *_segView;
    UIButton *_closeButton;
    UIButton *_settingButton;
    IESLiveKTVOptimizeSettingPanel *_settingPanel;
    UILabel *_settingUnReadLabel;
    NSArray *_panelModelArray;
}

@property (weak, nonatomic) IESLiveKTVCommonStore *store;
@property (retain, nonatomic) IESLiveKTVControlBar *controlBar;
@property (retain, nonatomic) IESLiveKTVOrderPanelCollectionView *orderPanel;
@property (retain, nonatomic) UIView<IESLiveKTVTuningViewProtocol> *tuningView;
@property (retain, nonatomic) UIView *tuningTopEmptyView;
@property (retain, nonatomic) IESLiveInteractionKTVMusicFeedbackView *musicFeedbackView;
@property (nonatomic) double startTime;
@property (retain, nonatomic) UIView *musicFeedbackViewEmptyClickedView;
@property (retain, nonatomic) IESLiveCommonKTVOrderPanelModel *panelModel;
@property (retain, nonatomic) IESLiveSegmentedControl *segControl;
@property (retain, nonatomic) NSArray *unReadLabels;
@property (nonatomic) long long orderCount;
@property (retain, nonatomic) UIView *segView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *settingButton;
@property (retain, nonatomic) IESLiveKTVOptimizeSettingPanel *settingPanel;
@property (retain, nonatomic) UILabel *settingUnReadLabel;
@property (retain, nonatomic) NSArray *panelModelArray;
@property (copy, nonatomic) id /* block */ hideCallback;
@property (nonatomic) BOOL isFeedbackPanelShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)settingButton;
- (void)setSettingButton:(id)arg0;
- (void)didClickCloseButton;
- (long long)orderCount;
- (void)setOrderCount:(long long)arg0;
- (void)p_addObserver;
- (void)didClickSettingButton;
- (id)panelModel;
- (void)setSegView:(id)arg0;
- (id)segView;
- (void)setPanelModel:(id)arg0;
- (id)settingPanel;
- (void)setSettingPanel:(id)arg0;
- (void)hideMusicListFeedbackViewWithAnimated:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 store:(id)arg1;
- (id)segControl;
- (void)setSegControl:(id)arg0;
- (void)startSongIconMoveToTabAnimationWithCellType:(long long)arg0 songInfoCell:(id)arg1;
- (void)addMusicToRecentWithMusicId:(id)arg0 source:(id)arg1;
- (void)showMusicListFeedbackInHomePanelViewWithSongName:(id)arg0 singerName:(id)arg1;
- (void)barWillShowTurningViewController:(id)arg0;
- (void)p_setupOptimizeOrderPanelUI;
- (void)p_setEmptyView;
- (void)p_fetchDefaultTabIfNeed;
- (void)updateTabUnreadLableWithCellType:(long long)arg0 count:(long long)arg1 showCount:(BOOL)arg2 showUnReadLabel:(BOOL)arg3;
- (void)updateTabUnreadLableWithCellType:(long long)arg0 isHidden:(BOOL)arg1;
- (void)p_orderListChange;
- (void)p_updateUIAfterFetchDefaultTabWithTarget:(long long)arg0;
- (void)p_resetToDefaultTabWithTarget:(long long)arg0;
- (id)orderPanel;
- (void)dissMissSettingPanel;
- (id)tuningView;
- (void)setTuningView:(id)arg0;
- (id)musicFeedbackView;
- (id)createUnReadLabel;
- (void)setSettingUnReadLabel:(id)arg0;
- (id)settingUnReadLabel;
- (void)trackKsongSettingClick;
- (void)setupSegView;
- (void)setupUnReadLabels;
- (void)p_setupGuideUI;
- (id)panelModelArray;
- (id)getAudienceSingSectionArray;
- (double)tabTitleRightWithTabIndex:(long long)arg0;
- (void)setUnReadLabels:(id)arg0;
- (id)tuningTopEmptyView;
- (void)setTuningTopEmptyView:(id)arg0;
- (void)p_dismissPanel;
- (void)hideTuningViewWithDuration:(double)arg0 completion:(id /* block */)arg1;
- (void)showTurningViewWithAnimationDuration:(double)arg0;
- (void)updateKTVOptimizeOrderPanelHiddenStatus:(BOOL)arg0 animationDuration:(double)arg1 completion:(id /* block */)arg2;
- (id /* block */)hideCallback;
- (id)unReadLabels;
- (void)setMusicFeedbackView:(id)arg0;
- (void)p_hideMusicListFeedbackView;
- (id)musicFeedbackViewEmptyClickedView;
- (void)setMusicFeedbackViewEmptyClickedView:(id)arg0;
- (void)p_clickFeedBackViewEmptyView;
- (void)setIsFeedbackPanelShowing:(BOOL)arg0;
- (void)didClickSoloKTVEntrance;
- (BOOL)p_shouldHideTopControlBar;
- (id)getPanelModelArray;
- (void)setPanelModelArray:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getOrderPanelFrameWithOffset:(double)arg0;
- (id)getOrderedSectionArray;
- (id)getListenSectionArray;
- (id)getOrderSectionArray;
- (id)getMySectionArray;
- (void)addCommonSectionWithArray:(id)arg0 needScroll:(BOOL)arg1 topHeight:(long long)arg2;
- (long long)addSoloEntranceIfNeedWithSectionArray:(id)arg0;
- (id)createSoloKTVEntrance;
- (void)onPanelHide;
- (void)updateTabTitleWithCellType:(long long)arg0 count:(long long)arg1;
- (void)addCommonSectionWithArray:(id)arg0 needScroll:(BOOL)arg1;
- (void)setHideCallback:(id /* block */)arg0;
- (BOOL)isFeedbackPanelShowing;
- (void)setControlBar:(id)arg0;
- (void)setOrderPanel:(id)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;
- (double)startTime;
- (void)layoutSubviews;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)controlBar;

@end
