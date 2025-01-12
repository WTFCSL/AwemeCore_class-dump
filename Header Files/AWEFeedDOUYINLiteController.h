//
//     Generated by private class-dump
//

@class UITableViewCell, BDXBridgeEventSubscriber, AWEAwemeModel, AWEBinding;

@interface AWEFeedDOUYINLiteController : AWEBaseController {
    BOOL _isViewAppear;
    BOOL _isColdStartPlay;
    AWEAwemeModel *_taskGuideModel;
    BDXBridgeEventSubscriber *_openSubscriber;
    AWEAwemeModel *_experiGuideModel;
    BDXBridgeEventSubscriber *_deleteGuideSubscriber;
    BDXBridgeEventSubscriber *_feedCardSubscriber;
    BDXBridgeEventSubscriber *_removeFeedCardSubscriber;
    BDXBridgeEventSubscriber *_feedCardEnterTaskSceneSubscriber;
    AWEAwemeModel *_uninsertedFeedTaskModel;
    UITableViewCell *_willDisPlayCell;
    AWEAwemeModel *_willDisplayModel;
    AWEBinding *_lynxLoadBinding;
}

@property (retain, nonatomic) AWEAwemeModel *taskGuideModel;
@property (retain, nonatomic) BDXBridgeEventSubscriber *openSubscriber;
@property (retain, nonatomic) AWEAwemeModel *experiGuideModel;
@property (retain, nonatomic) BDXBridgeEventSubscriber *deleteGuideSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *feedCardSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *removeFeedCardSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *feedCardEnterTaskSceneSubscriber;
@property (retain, nonatomic) AWEAwemeModel *uninsertedFeedTaskModel;
@property (weak, nonatomic) UITableViewCell *willDisPlayCell;
@property (weak, nonatomic) AWEAwemeModel *willDisplayModel;
@property (weak, nonatomic) AWEBinding *lynxLoadBinding;
@property (nonatomic) BOOL isViewAppear;
@property (nonatomic) BOOL isColdStartPlay;

+ (Class)aAWEFeedModuleServiceDOUYINLiteAdaperClass;
+ (Class)aAWEFeedTaskGuideDOUYINLiteAdapterClass;
+ (Class)aAWEBalanceExchangeManagerDOUYINLiteAdapterClass;
+ (Class)aAWELiteStudioModuleAdapterClass;
+ (Class)aAWEMainModuleDOUYINLiteAdapterClass;

- (void)willRefresh;
- (BOOL)isViewAppear;
- (void)setIsViewAppear:(BOOL)arg0;
- (void)configureCell:(id)arg0 withModel:(id)arg1 atIndexPath:(id)arg2;
- (void)setWillDisplayModel:(id)arg0;
- (id)willDisplayModel;
- (void)initialFetchCompletion:(id)arg0 error:(id)arg1;
- (void)loadMoreCompletion:(id)arg0 error:(id)arg1 isFooterRefreshing:(BOOL)arg2;
- (void)refreshCompletion:(id)arg0 error:(id)arg1 needAnimation:(BOOL)arg2;
- (id)aAWEFeedModuleServiceDOUYINLiteAdaper;
- (void)setWillDisPlayCell:(id)arg0;
- (id)willDisPlayCell;
- (void)setIsColdStartPlay:(BOOL)arg0;
- (void)addJsEvent;
- (void)showFeedEcommercePopupIfNeeded;
- (void)sendCardAppearEvent;
- (void)sendCardDisappearEvent;
- (BOOL)isColdStartPlay;
- (id)aAWEMainModuleDOUYINLiteAdapter;
- (id)uninsertedFeedTaskModel;
- (void)insertTaskGuideModel:(id)arg0 taskType:(long long)arg1;
- (void)setUninsertedFeedTaskModel:(id)arg0;
- (void)removeOutdatedFeedTaskCardIfNeeded;
- (BOOL)validLegalGuideCell:(id)arg0;
- (BOOL)isNewFeedTaskCardCell:(id)arg0;
- (id)aAWEFeedTaskGuideDOUYINLiteAdapter;
- (id)lynxLoadBinding;
- (void)setLynxLoadBinding:(id)arg0;
- (BOOL)isFeedGuideTaskCardCell:(id)arg0;
- (id)aAWELiteStudioModuleAdapter;
- (id)aAWEBalanceExchangeManagerDOUYINLiteAdapter;
- (void)requestFeedTaskCardIfNeeded;
- (void)registerPitayaAlgorithmCallback;
- (id)openSubscriber;
- (id)taskGuideModel;
- (void)taskGuideDeleteIfNeeded:(id)arg0 taskType:(long long)arg1;
- (void)taskGuideSkipIfNeeded:(id)arg0;
- (void)setOpenSubscriber:(id)arg0;
- (id)deleteGuideSubscriber;
- (void)setDeleteGuideSubscriber:(id)arg0;
- (id)feedCardSubscriber;
- (void)feedTaskDone:(id)arg0;
- (void)setFeedCardSubscriber:(id)arg0;
- (id)removeFeedCardSubscriber;
- (void)feedCardRemoveIfNeeded:(id)arg0 taskType:(long long)arg1;
- (void)setRemoveFeedCardSubscriber:(id)arg0;
- (id)feedCardEnterTaskSceneSubscriber;
- (void)setFeedCardEnterTaskSceneSubscriber:(id)arg0;
- (void)setTaskGuideModel:(id)arg0;
- (void)setExperiGuideModel:(id)arg0;
- (id)experiGuideModel;
- (void)willResignActive;
- (void)didBecomeActive;
- (id)init;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)viewDidLoad;
- (void)viewWillDisappear;

@end
