//
//     Generated by private class-dump
//

@class AWENaviDuetActionPoseView, NSArray, AWENaviDuetActionPoseModel, NSURL, NSString;
@protocol IESServiceProvider, AWENaviDuetRenderServiceProtocol, AWENaviDuetViewContainerProtocol;

@interface AWENaviDuetActionPoseComponent : AWENaviDuetBaseFeatureComponent <TTKNaviRenderMessageDelegate> {
    BOOL _hasSwitched;
    id<IESServiceProvider> _serviceProvider;
    AWENaviDuetActionPoseView *_sceneView;
    id<AWENaviDuetViewContainerProtocol> _viewContainer;
    id<AWENaviDuetRenderServiceProtocol> _renderService;
    NSArray *_originActionPoses;
    NSArray *_actionPoses;
    AWENaviDuetActionPoseModel *_currentActionPose;
    NSURL *_musicPath;
    NSArray *_ownLimitedActionNameArray;
}

@property (retain, nonatomic) AWENaviDuetActionPoseView *sceneView;
@property (retain, nonatomic) id<AWENaviDuetViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<AWENaviDuetRenderServiceProtocol> renderService;
@property (copy, nonatomic) NSArray *originActionPoses;
@property (copy, nonatomic) NSArray *actionPoses;
@property (retain, nonatomic) AWENaviDuetActionPoseModel *currentActionPose;
@property (retain, nonatomic) NSURL *musicPath;
@property (copy, nonatomic) NSArray *ownLimitedActionNameArray;
@property (nonatomic) BOOL hasSwitched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMusicPath:(id)arg0;
- (id)musicPath;
- (void)p_setupBinding;
- (void)p_showSceneViewIfNeeded;
- (void)setupActionsData;
- (id)renderService;
- (void)musicPlayNeedsReset:(BOOL)arg0;
- (void)fetchActionsCompletion:(id /* block */)arg0;
- (void)setOwnLimitedActionNameArray:(id)arg0;
- (BOOL)isOwnLimitedActionEffect:(id)arg0;
- (BOOL)isNeedsExclusiveAction:(id)arg0;
- (void)setOriginActionPoses:(id)arg0;
- (id)filterActionPoseWithOthers:(id)arg0;
- (void)setActionPoses:(id)arg0;
- (void)setupInitialActionPose;
- (id)actionPoses;
- (id)originActionPoses;
- (id)currentActionPose;
- (void)applyActionScence:(id)arg0;
- (BOOL)hasSwitched;
- (BOOL)isDefaultAction:(id)arg0;
- (void)setHasSwitched:(BOOL)arg0;
- (BOOL)unloadSceneIfNeeded;
- (void)resetMusic:(id)arg0;
- (void)setCurrentActionPose:(id)arg0;
- (void)p_recoveryMusicIfNeeded;
- (void)needsPauseMusic;
- (id)ownLimitedActionNameArray;
- (void)didFinishLoadAvatarPlugin;
- (void)didRebuidRecorder;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (unsigned long long)preferredLoadPhase;
- (void)setRenderService:(id)arg0;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)serviceProvider;
- (id)viewModel;
- (void)appWillEnterForeground:(id)arg0;
- (id)sceneView;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (void)setSceneView:(id)arg0;
- (void)p_registerNotifications;

@end
