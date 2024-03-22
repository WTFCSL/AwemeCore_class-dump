//
//     Generated by private class-dump
//

@class NSLock, NSString, AWENaviEmotionRecordSequence, TTKNaviFeatureDraftModel, AWENaviEffectContextModel, AWEBinding, NSDictionary, NSArray, AWENaviLocalAvatar, NSMutableArray, UIViewController;
@protocol TTKNaviEditorViewContainerProtocol, TTKNaviEditorRenderServiceProtocol, AWENaviModuleService;

@interface TTKNaviEditorEditComponentViewModel : TTKNaviEditorBaseFeatureComponentViewModel <TTKNaviRenderMessageDelegate, AWENaviCategoryChangeObserver> {
    NSLock *_lock;
    TTKNaviFeatureDraftModel *_featureDraft;
    TTKNaviFeatureDraftModel *_previousFeatureDraft;
    NSDictionary *_effectNameToEffectMapping;
    NSDictionary *_categoryKeyToNaviCategoryMapping;
    AWENaviEffectContextModel *_contextModel;
    NSArray *_highTabArray;
    NSDictionary *_tabKeyToCategoryArrayMapping;
    NSArray *_orderedCategoryTabMetaDataArray;
    BOOL _renderFinished;
    BOOL _emotionShouldHidden;
    BOOL _initialized;
    BOOL _isFirstCreate;
    UIViewController *_containerControler;
    AWEBinding *_didLoadEffectSignal;
    AWEBinding *_onSaveFailedSignal;
    AWEBinding *_onSaveSuccessSignal;
    id<TTKNaviEditorRenderServiceProtocol> _renderService;
    AWENaviEmotionRecordSequence *_recordSequence;
    id<TTKNaviEditorViewContainerProtocol> _viewContainer;
    NSString *_enterWithEmotionName;
    AWENaviLocalAvatar *_avatar;
    NSString *_avatarPath;
    id<AWENaviModuleService> _moduleService;
    NSMutableArray *_actionRecords;
}

@property (retain, nonatomic) id<TTKNaviEditorRenderServiceProtocol> renderService;
@property (nonatomic) BOOL emotionShouldHidden;
@property (retain, nonatomic) AWENaviEmotionRecordSequence *recordSequence;
@property (retain, nonatomic) id<TTKNaviEditorViewContainerProtocol> viewContainer;
@property (retain, nonatomic) AWEBinding *didLoadEffectSignal;
@property (retain, nonatomic) AWEBinding *onSaveSuccessSignal;
@property (copy, nonatomic) NSString *enterWithEmotionName;
@property (nonatomic) BOOL initialized;
@property (nonatomic) BOOL isFirstCreate;
@property (retain, nonatomic) AWENaviLocalAvatar *avatar;
@property (copy, nonatomic) NSString *avatarPath;
@property (retain, nonatomic) id<AWENaviModuleService> moduleService;
@property (nonatomic, getter=isRenderFinished) BOOL renderFinished;
@property (retain, nonatomic) NSMutableArray *actionRecords;
@property (weak, nonatomic) UIViewController *containerControler;
@property (readonly, nonatomic) AWEBinding *onSaveFailedSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_initializeData;
- (void)reportData;
- (id)collectionStatus;
- (void)category:(id)arg0 willApplyCollection:(id)arg1;
- (void)category:(id)arg0 didApplyCollection:(id)arg1;
- (void)category:(id)arg0 applyOrphanEffect:(id)arg1;
- (void)didClickCategory:(id)arg0 data:(id)arg1;
- (void)componentDidLoad;
- (id)renderService;
- (void)didFinishLoadPackedMessages;
- (void)didLoad:(BOOL)arg0 effect:(id)arg1;
- (void)setRenderService:(id)arg0;
- (void)componentWillAppear;
- (void)componentDidDisappear;
- (void)setRenderFinished:(BOOL)arg0;
- (void)applyAvatarBusinessEffectWithContextModel:(id)arg0;
- (BOOL)isFirstCreate;
- (void)recordStepForward;
- (id)avatarPath;
- (void)recordStepReset;
- (void)setAvatarPath:(id)arg0;
- (id)moduleService;
- (void)applyEffect:(id)arg0 categoryKey:(id)arg1;
- (void)applyInspirationWithKey:(id)arg0 categoryKey:(id)arg1;
- (void)applyColor:(id)arg0 categoryKey:(id)arg1;
- (void)setModuleService:(id)arg0;
- (id)highTabArray;
- (id)onSaveSuccessSignal;
- (void)setContainerControler:(id)arg0;
- (void)componentDidUnload;
- (id)onSaveFailedSignal;
- (id)tabInputDataFromCurrentSelection;
- (void)componentDidFirstAppear;
- (id)didLoadEffectSignal;
- (void)handleNextStepWithEmotionCache:(id)arg0;
- (BOOL)isRenderFinished;
- (id)appliedEffectDictionary;
- (id)selectedEmotion;
- (void)p_initialContext;
- (void)setIsFirstCreate:(BOOL)arg0;
- (void)restoreFromDraft:(id)arg0;
- (BOOL)emotionShouldHidden;
- (void)applyEffect:(id)arg0 categoryKey:(id)arg1 restore:(BOOL)arg2;
- (void)applyInspirationWithKey:(id)arg0 categoryKey:(id)arg1 restore:(BOOL)arg2;
- (void)applyColor:(id)arg0 categoryKey:(id)arg1 restore:(BOOL)arg2;
- (id)enterWithEmotionName;
- (void)setEmotionShouldHidden:(BOOL)arg0;
- (void)runStepsWithEmotion:(id)arg0 emotionCache:(id)arg1;
- (void)setRecordSequence:(id)arg0;
- (id)recordSequence;
- (void)coverCaptureAvatar;
- (void)captureAvatarWithRemoveCaptureCover:(BOOL)arg0;
- (void)captureEffectImage:(unsigned long long)arg0 removeCaptureCover:(BOOL)arg1;
- (void)uploadNaviData:(id)arg0;
- (void)enterPublishPage:(id)arg0;
- (void)removeCaptureCover;
- (BOOL)hasChangeAvatarAfterEnterEditPage;
- (BOOL)hasChangeEmotion;
- (id)generateNaviModel:(id)arg0;
- (void)checkNecessaryEffects:(id)arg0;
- (void)setupLocalAvatar;
- (void)configAvatarEmotionInfoWithModel:(id)arg0;
- (id)containerControler;
- (id)actionRecords;
- (id)generatePublishResult:(id)arg0;
- (id)publishActivityExtraJson;
- (void)p_buildTabDataWithUIConfigModel:(id)arg0 categoryKeyToCategoryMapping:(id)arg1;
- (void)setupCollectionCategory:(id)arg0 categoryMapping:(id)arg1;
- (void)setEnterWithEmotionName:(id)arg0;
- (void)setDidLoadEffectSignal:(id)arg0;
- (void)setOnSaveSuccessSignal:(id)arg0;
- (void)setActionRecords:(id)arg0;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)avatar;
- (void)setAvatar:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end