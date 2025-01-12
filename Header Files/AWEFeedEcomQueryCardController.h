//
//     Generated by private class-dump
//

@class AWEFeedEcomQueryCardTriggerPlayConfig, NSMutableDictionary, NSString, AWEAwemeModel, AWEFeedEcomQueryCardTriggerRefreshConfig;
@protocol AWESpecialCardContextProtocol, AWESpecialCardDelegate;

@interface AWEFeedEcomQueryCardController : AWEBaseController <AWEFeedControllerProtocol, AWESpecialCardControllerProtocol> {
    BOOL _queryRan;
    id<AWESpecialCardContextProtocol> cardContext;
    id<AWESpecialCardDelegate> cardDelegate;
    NSMutableDictionary *_insertedModels;
    AWEAwemeModel *_currentModel;
    long long _feedRecommendRequestIndex;
    AWEFeedEcomQueryCardTriggerPlayConfig *_playConfig;
    AWEFeedEcomQueryCardTriggerRefreshConfig *_refreshConfig;
    NSMutableDictionary *_signParams;
}

@property (retain, nonatomic) NSMutableDictionary *insertedModels;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (nonatomic) BOOL queryRan;
@property (nonatomic) long long feedRecommendRequestIndex;
@property (retain, nonatomic) AWEFeedEcomQueryCardTriggerPlayConfig *playConfig;
@property (retain, nonatomic) AWEFeedEcomQueryCardTriggerRefreshConfig *refreshConfig;
@property (retain, nonatomic) NSMutableDictionary *signParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;

- (id)cardContext;
- (void)setCardContext:(id)arg0;
- (id)getSettings;
- (id)playConfig;
- (id)refreshConfig;
- (void)videoPlayer:(id)arg0 updatePlayTime:(double)arg1 totalTime:(double)arg2;
- (void)initialFetchCompletion:(id)arg0 error:(id)arg1;
- (void)loadMoreCompletion:(id)arg0 error:(id)arg1 isFooterRefreshing:(BOOL)arg2;
- (void)refreshCompletion:(id)arg0 error:(id)arg1 needAnimation:(BOOL)arg2;
- (id)cardDelegate;
- (void)setCardDelegate:(id)arg0;
- (void)cardWillDisplay:(id)arg0 withAweme:(id)arg1;
- (void)cardDidEndDisplaying:(id)arg0 withAweme:(id)arg1;
- (void)cardDidAppear:(id)arg0 withAweme:(id)arg1;
- (void)cardDidDisappear:(id)arg0 withAweme:(id)arg1;
- (BOOL)shouldCancelInsertCard:(id)arg0 withAweme:(id)arg1 isFromFeed:(BOOL)arg2 willInsertForRowAtIndexPath:(id)arg3;
- (void)registerPitayaService;
- (long long)feedRecommendRequestIndex;
- (void)setFeedRecommendRequestIndex:(long long)arg0;
- (void)triggerWithMethod:(id)arg0 params:(id)arg1;
- (void)setQueryRan:(BOOL)arg0;
- (void)setSignParams:(id)arg0;
- (BOOL)queryRan;
- (id)signParams;
- (id)inProgressByType:(long long)arg0 progress:(long long)arg1 params:(id)arg2;
- (id)runPiyataTaskSync:(id)arg0 params:(id)arg1 extra:(id)arg2;
- (void)setRefreshConfig:(id)arg0;
- (void)setPlayConfig:(id)arg0;
- (void)requsetInsertCard:(id)arg0 index:(long long)arg1 extraParam:(id)arg2;
- (void)deleteCard:(id)arg0 transTypes:(id)arg1;
- (id)insertedModels;
- (void)setInsertedModels:(id)arg0;
- (id)runSearchQueryTask;
- (long long)getOffset;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;

@end
