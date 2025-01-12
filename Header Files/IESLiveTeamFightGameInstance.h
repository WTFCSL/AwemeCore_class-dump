//
//     Generated by private class-dump
//

@class IESLiveTeamFightGameModel, NSString, IESLiveTeamFightUIComponentManager, HTSEventForwardingView, UIView;
@protocol IESLiveSubscription, IESLiveTeamFightGameDelegate;

@interface IESLiveTeamFightGameInstance : NSObject <HTSLiveMessageSubscriber, IESLiveTeamFightModelDelegate, IESLiveTeamFightGameAdapterActions> {
    BOOL _isTeamFightLayoutReady;
    long long _teamFightType;
    IESLiveTeamFightGameModel *_teamFightGameModel;
    HTSEventForwardingView *_contaienrView;
    UIView *_lowerView;
    UIView *_upperView;
    id<IESLiveTeamFightGameDelegate> _delegate;
    IESLiveTeamFightUIComponentManager *_componentManager;
    id /* block */ _readyAction;
    id<IESLiveSubscription> _layoutSubscription;
}

@property (nonatomic) long long teamFightType;
@property (weak, nonatomic) id<IESLiveTeamFightGameDelegate> delegate;
@property (retain, nonatomic) IESLiveTeamFightUIComponentManager *componentManager;
@property (retain, nonatomic) IESLiveTeamFightGameModel *teamFightGameModel;
@property (retain, nonatomic) HTSEventForwardingView *contaienrView;
@property (retain, nonatomic) UIView *lowerView;
@property (retain, nonatomic) UIView *upperView;
@property (copy, nonatomic) id /* block */ readyAction;
@property (retain, nonatomic) id<IESLiveSubscription> layoutSubscription;
@property (nonatomic) BOOL isTeamFightLayoutReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)setComponentManager:(id)arg0;
- (id)upperView;
- (void)setUpperView:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfSlotView;
- (long long)teamFightType;
- (BOOL)isTeamFightFlexible;
- (void)didStatusChangeToPrepare;
- (void)didStatusChangeToFinish;
- (void)loadBackgroundView;
- (void)updateLayoutTopOffset:(double)arg0;
- (id)teamFightGameModel;
- (void)enterLayoutWithTeamFightType:(long long)arg0;
- (void)leaveLayoutWithTeamFightType:(long long)arg0;
- (void)updateTeamFightInfo:(id)arg0;
- (void)transitionToFinished:(long long)arg0;
- (id)initWithDelegate:(id)arg0 teamFightType:(long long)arg1 DIContext:(id)arg2;
- (void)transitionToCreate:(id)arg0;
- (void)didStatusChangeToTeamFighting;
- (void)transitionToShowResult;
- (BOOL)isTeamFightLayoutReady;
- (void)transitionToStart:(id)arg0;
- (id)lowerView;
- (void)setTeamFightType:(long long)arg0;
- (void)onReceivedTeamFightMessage:(id)arg0;
- (void)onReceivedTeamfightScoreMessage:(id)arg0;
- (void)updateFightInfoWithMessage:(id)arg0;
- (void)performAfterGuestListReady:(id /* block */)arg0;
- (void)setIsTeamFightLayoutReady:(BOOL)arg0;
- (void)updateStatusByTeamFightLayoutNonsupport;
- (void)setupTeamFightWithCacheInfoIfNeeded;
- (void)setLayoutSubscription:(id)arg0;
- (BOOL)enableChangeLayout;
- (id)layoutSubscription;
- (void)monitorStartWithEnterRoom:(id)arg0;
- (void)updateBackgroundFrame;
- (void)updateTeamFightInfoWith:(id)arg0 type:(long long)arg1;
- (void)didStatusChangeToPunish;
- (void)didStatusChangeToShowResult;
- (void)setupSourceScene;
- (void)cleanBakcgoundView;
- (void)setTeamFightGameModel:(id)arg0;
- (id /* block */)readyAction;
- (void)setReadyAction:(id /* block */)arg0;
- (void)setContaienrView:(id)arg0;
- (void)setLowerView:(id)arg0;
- (id)contaienrView;
- (void)teamFightStatusDidChange:(long long)arg0 preStatus:(long long)arg1;
- (void)teamFightStatusDidTeamFightTimeOut;
- (void)teamFightStatusDidPunishTimeEnd;
- (void)teamFightStatusDidPunishTimeOut;
- (void)teamFightStatusDidShowResultTimeOut;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)messageReceived:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentViewFrame;
- (id)componentManager;

@end
