//
//     Generated by private class-dump
//

@class NSMutableDictionary, AWENewFaceStickerModel, NSMutableSet, NSDate, NSString, UIView;
@protocol AWESpecialCardContextProtocol, AWESpecialCardDelegate, HunterContainerProtocol;

@interface AWEFeedCreationCardController : AWEBaseController <AWEFeedControllerProtocol, AWESpecialCardControllerProtocol, AWEFeedCreationCardControllerProtocol> {
    BOOL _enabled;
    BOOL _showFlag;
    BOOL _hasInteracted;
    id<AWESpecialCardContextProtocol> cardContext;
    id<AWESpecialCardDelegate> cardDelegate;
    long long insertAfterCount;
    UIView<HunterContainerProtocol> *hunterContainer;
    long long _currentFetchCount;
    long long _insertFeedCount;
    NSDate *_frequencyCheckDate;
    double _timeDisplayStarted;
    NSMutableSet *_displayedAwemeIDs;
    long long _cardType;
    AWENewFaceStickerModel *_propInfo;
    NSMutableDictionary *_interceptors;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) long long currentFetchCount;
@property (nonatomic) long long insertFeedCount;
@property (nonatomic) BOOL showFlag;
@property (retain, nonatomic) NSDate *frequencyCheckDate;
@property (nonatomic) BOOL hasInteracted;
@property (nonatomic) double timeDisplayStarted;
@property (retain, nonatomic) NSMutableSet *displayedAwemeIDs;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) AWENewFaceStickerModel *propInfo;
@property (retain, nonatomic) NSMutableDictionary *interceptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;
@property (nonatomic) long long insertAfterCount;
@property (weak, nonatomic) UIView<HunterContainerProtocol> *hunterContainer;

- (id)cardContext;
- (void)setCardContext:(id)arg0;
- (id)propInfo;
- (void)setPropInfo:(id)arg0;
- (id)interceptors;
- (void)setInterceptors:(id)arg0;
- (void)initialFetchCompletion:(id)arg0 error:(id)arg1;
- (void)loadMoreCompletion:(id)arg0 error:(id)arg1 isFooterRefreshing:(BOOL)arg2;
- (void)willInitialFetch;
- (id)hunterContainer;
- (void)showDebugToast:(id)arg0;
- (id)cardDelegate;
- (void)setCardDelegate:(id)arg0;
- (void)cardDidAppear:(id)arg0 withAweme:(id)arg1;
- (void)cardDidDisappear:(id)arg0 withAweme:(id)arg1;
- (id)cardClientData:(id)arg0;
- (void)bridgeRegisterWithContainer:(id)arg0 aweme:(id)arg1;
- (void)cardTemplateButtonClickWithParams:(id)arg0;
- (BOOL)isBasicConditionsInvalid;
- (void)resetFrequencyControlFlagIfNeeded;
- (void)setCurrentFetchCount:(long long)arg0;
- (BOOL)isBizConditionsInvalid;
- (void)insertCardIfNeededWithCurrentList:(id)arg0;
- (long long)currentFetchCount;
- (id)interceptorFor:(id)arg0;
- (void)preloadPropIfNeeded;
- (void)markAlreadyShow;
- (void)setShowFlag:(BOOL)arg0;
- (void)setTimeDisplayStarted:(double)arg0;
- (void)handleNegativeFeedbackIfNeededWithAwemeModel:(id)arg0;
- (void)markDislike;
- (void)setHunterContainer:(id)arg0;
- (BOOL)ignoreFrequencyControl;
- (void)markCardTypeAlreadyShow:(long long)arg0 feedType:(long long)arg1;
- (id)displayedAwemeIDs;
- (double)timeDisplayStarted;
- (BOOL)isInFrequencyControl;
- (id)fetchTargetCardType;
- (void)doInsertCardIfNeeded:(id)arg0;
- (BOOL)needDelayInsertWithCurrentList:(id)arg0;
- (BOOL)ignoreInsertDelay;
- (long long)insertFeedCount;
- (void)setInsertFeedCount:(long long)arg0;
- (void)insertCard;
- (id)feedCardParams;
- (void)handleFetchEmptyWithCardType:(long long)arg0 feedType:(long long)arg1;
- (long long)insertAfterCount;
- (void)handleAwemeModel:(id)arg0;
- (BOOL)isCreationCardEnabled;
- (BOOL)deleteCardWithModel:(id)arg0 animated:(BOOL)arg1;
- (BOOL)isTargetAwemeType;
- (void)setInsertAfterCount:(long long)arg0;
- (void)setFrequencyCheckDate:(id)arg0;
- (void)setupInterceptors;
- (BOOL)isCreationCardAlreadyShow;
- (void)fetchCameraCalendarCardWithCompletion:(id /* block */)arg0;
- (void)insertCreationCardWithModel:(id)arg0 atIndex:(long long)arg1 completion:(id /* block */)arg2;
- (BOOL)showFlag;
- (id)frequencyCheckDate;
- (void)setDisplayedAwemeIDs:(id)arg0;
- (BOOL)enabled;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)arg0;
- (void)viewDidLoad;
- (long long)cardType;
- (void)setCardType:(long long)arg0;
- (void)setHasInteracted:(BOOL)arg0;
- (BOOL)hasInteracted;
- (void)setupConfig;

@end