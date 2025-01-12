//
//     Generated by private class-dump
//

@class IESLiveMultiLinkerBaseBattleScoreView, UIView, IESMultiLinkerTeamTaskNoticeView, NSString, AnchorEffect_EffectInfo, IESLiveRevenueInteractPlayAnchorModel, IESLiveMultiLinkerTeamTaskViewModel, IESLiveMultiLinkerTeamTaskView;
@protocol IESLiveCompoundSubscription;

@interface IESLiveMultiLinkerBattleScoreWidget : NSObject <IESLiveRevenueInteractPlayStateAction> {
    BOOL _isTeamBattle;
    BOOL _showedToast;
    BOOL _isFocus;
    BOOL _hadReportMissionShow;
    BOOL _isOptimizedPad;
    BOOL _isBreakthrough;
    UIView *_containerView;
    IESLiveMultiLinkerBaseBattleScoreView *_scoreView;
    AnchorEffect_EffectInfo *_activePropEffectInfo;
    IESLiveMultiLinkerTeamTaskView *_teamTaskView;
    IESMultiLinkerTeamTaskNoticeView *_noticeView;
    IESLiveMultiLinkerTeamTaskViewModel *_taskViewModel;
    IESLiveRevenueInteractPlayAnchorModel *_anchorModel;
    NSString *_playName;
    id<IESLiveCompoundSubscription> _disposable;
    long long _taskBeginTime;
}

@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESLiveMultiLinkerBaseBattleScoreView *scoreView;
@property (retain, nonatomic) AnchorEffect_EffectInfo *activePropEffectInfo;
@property (retain, nonatomic) IESLiveMultiLinkerTeamTaskView *teamTaskView;
@property (retain, nonatomic) IESMultiLinkerTeamTaskNoticeView *noticeView;
@property (retain, nonatomic) IESLiveMultiLinkerTeamTaskViewModel *taskViewModel;
@property (retain, nonatomic) IESLiveRevenueInteractPlayAnchorModel *anchorModel;
@property (nonatomic) BOOL isTeamBattle;
@property (nonatomic) BOOL showedToast;
@property (nonatomic) BOOL isFocus;
@property (nonatomic) BOOL hadReportMissionShow;
@property (nonatomic) BOOL isOptimizedPad;
@property (nonatomic) BOOL isBreakthrough;
@property (copy, nonatomic) NSString *playName;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (nonatomic) long long taskBeginTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDisposable:(id)arg0;
- (id)disposable;
- (id)anchorModel;
- (void)setAnchorModel:(id)arg0;
- (id)noticeView;
- (void)setNoticeView:(id)arg0;
- (void)setTaskViewModel:(id)arg0;
- (id)taskViewModel;
- (void)bindAction;
- (void)updateContainerView;
- (id)scoreView;
- (void)setScoreView:(id)arg0;
- (BOOL)isOptimizedPad;
- (void)setIsOptimizedPad:(BOOL)arg0;
- (void)didChangeStateFrom:(unsigned long long)arg0 to:(unsigned long long)arg1;
- (id)playName;
- (void)setPlayName:(id)arg0;
- (void)updateScoreWithModel:(id)arg0;
- (BOOL)isEffectInfoFog;
- (BOOL)isTeamBattle;
- (void)personalBattleInfoViewHiddenScore:(BOOL)arg0 hiddenRank:(BOOL)arg1;
- (void)refreshPropEffectInfoShowContent;
- (id)activePropEffectInfo;
- (BOOL)needObserveTeamTaskMessage;
- (long long)taskBeginTime;
- (void)setTaskBeginTime:(long long)arg0;
- (void)bindTeamTaskAction;
- (void)updateTeamTaskView;
- (void)trackIndividualMissionResultShow;
- (id)teamTaskView;
- (BOOL)isBreakthrough;
- (void)doBackgroundColorAnimationFromRank:(long long)arg0 toRank:(long long)arg1;
- (BOOL)needTeamTaskSmallSize;
- (struct CGColor { } *)colorForBorderWithRank:(long long)arg0 isFog:(BOOL)arg1;
- (id)colorForBackground;
- (void)clickScoreInfoView;
- (void)hideTeammateProfileView:(BOOL)arg0;
- (void)showNoticeOrTipsViewInTeamBattle;
- (void)showNoticeOrTipsView;
- (void)showTeamTaskViewWithAnimate:(BOOL)arg0;
- (void)removeTeamTaskView;
- (void)showBattleScoreView;
- (void)setTeamTaskView:(id)arg0;
- (void)clickTeamTaskView;
- (void)hideNoticeOrTipsView;
- (BOOL)shouldShowRedBackground;
- (void)updateLayoutToFocusStyle:(BOOL)arg0;
- (void)trackMissionShowIfNeeded;
- (void)setShowedToast:(BOOL)arg0;
- (void)setActivePropEffectInfo:(id)arg0;
- (void)updateUIToPunishStatus;
- (id)colorForBackgroundWithRank:(long long)arg0 isFog:(BOOL)arg1;
- (BOOL)hadReportMissionShow;
- (void)setHadReportMissionShow:(BOOL)arg0;
- (BOOL)showedToast;
- (void)showTeamTaskToast;
- (id)initWithModel:(id)arg0 battleView:(id)arg1 diContext:(id)arg2;
- (void)rankChangedFromRank:(long long)arg0 toRank:(long long)arg1 completion:(id /* block */)arg2;
- (void)refreshPlayContainerValueView;
- (void)setIsTeamBattle:(BOOL)arg0;
- (void)setIsBreakthrough:(BOOL)arg0;
- (void).cxx_destruct;
- (void)updateWithResult:(unsigned long long)arg0;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)setupViews;
- (void)setIsFocus:(BOOL)arg0;
- (BOOL)isFocus;

@end
