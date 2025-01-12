//
//     Generated by private class-dump
//

@class NSString, IESLiveAuthorizationViewModel, IESLiveAuthorizationGuidePanel;
@protocol IESLiveInternalRouter;

@interface IESLiveAuthorizationFragment : IESLiveRoomComponent <IESLiveAuthorizationReaction, IESLiveAuthorizationGuideRouter> {
    IESLiveAuthorizationViewModel *_viewModel;
    id<IESLiveInternalRouter> _internalRouter;
    IESLiveAuthorizationGuidePanel *_currentPanel;
}

@property (retain, nonatomic) IESLiveAuthorizationViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) IESLiveAuthorizationGuidePanel *currentPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)internalRouter;
- (void)setInternalRouter:(id)arg0;
- (void)componentDidAppear;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)setCurrentPanel:(id)arg0;
- (id)currentPanel;
- (void)checkAndShowAuthorizationGuideWithSource:(unsigned long long)arg0 completeBlock:(id /* block */)arg1;
- (void)showAuthorizationGuideViewWith:(id)arg0 source:(unsigned long long)arg1 completeBlock:(id /* block */)arg2;
- (void)showAuthorizationGuideTopViewWithSource:(id)arg0 labelText:(id)arg1 content:(id)arg2 showRelation:(BOOL)arg3 relationContent:(id)arg4;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end
