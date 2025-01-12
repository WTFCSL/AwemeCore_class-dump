//
//     Generated by private class-dump
//

@class NSString, ACCEditViewControllerInputData;

@interface AWETeenVideoEditViewController : ACCViewController <ACCEditTransitionContainerViewControllerProtocol, AWEMediaBigAnimationProtocol>

@property (readonly, nonatomic) ACCEditViewControllerInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishModel;
- (id)editService;
- (id)handleTargetViewControllerInputData;
- (id)initWithBusinessConfiguration:(id)arg0;
- (id)sequenceEditService;
- (id)stickerService;
- (void)prepareForLoadComponent;
- (id)beforeTransitionSnapshotView;
- (id)creatComponentManager;
- (void)beforeLoadLazyComponent;
- (void)configWithInputData:(id)arg0;
- (void)registerViewService;
- (void)p_continuePlayWhenBack;
- (BOOL)p_isOpenNewPageInEditorAndBack;
- (long long)mediaBigMediaContentMode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaBigMediaFrame;
- (id)beforeTransitionMediaSnapshotView;
- (id)mediaBigMediaSnap;
- (id)mediaBigButtonsContainerSnap;
- (id)mediaBigButtonsContainer;
- (void)popSelf;
- (void)viewDidAppear:(BOOL)arg0;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;

@end
