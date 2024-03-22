//
//     Generated by private class-dump
//

@class DolphinRerankService, NSTimer, NSMutableIndexSet, NSArray, NSString;
@protocol AWEDolphinSyncDataDelegate;

@interface AWEFeedDolphinAdapter : NSObject <DolphinRerankDataSource, AWEFeedDolphinAdapter> {
    id<AWEDolphinSyncDataDelegate> _syncDelegate;
    NSString *_satiParamsForPitayaCommerce;
    NSString *_liveInnerEnterSource;
    DolphinRerankService *_service;
    NSMutableIndexSet *_showSet;
    NSTimer *_timer;
    long long _sceneType;
}

@property (retain, nonatomic) DolphinRerankService *service;
@property (retain, nonatomic) NSMutableIndexSet *showSet;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long sceneType;
@property (copy, nonatomic) NSArray *dataKeyPathsForDataSource;
@property (copy, nonatomic) NSArray *dataKeyPathsForSupplementSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEDolphinSyncDataDelegate> syncDelegate;
@property (copy, nonatomic) NSString *satiParamsForPitayaCommerce;
@property (copy, nonatomic) NSString *liveInnerEnterSource;

+ (id)makeAwemeDataDictMethod:(id)arg0;
+ (id)jsonStringToDictionaryMethod:(id)arg0;
+ (BOOL)pitayaEnable:(long long)arg0;

- (long long)currentAwemeIndex;
- (id)satiParamsForPitayaCommerce;
- (void)setSatiParamsForPitayaCommerce:(id)arg0;
- (void)registerReRankBridgeWhenReady;
- (void)unregisterReRankBridge;
- (id)requestParamForCommercePitayaReRank;
- (void)registerReRankBridge;
- (void)setShowSet:(id)arg0;
- (void)startRerank:(unsigned long long)arg0 withClientParams:(id)arg1;
- (id)liveInnerEnterSource;
- (void)startRerank:(unsigned long long)arg0;
- (id)transferModeltoDataDict:(id)arg0 dataType:(long long)arg1;
- (id)htsTransferModeltoDataDict:(id)arg0 dataType:(long long)arg1;
- (id)showSet;
- (id)lastShowedAdModelConfig;
- (void)saveLastShowedAdModelConfigWithModel:(id)arg0;
- (void)updateLastshowedAdModelConfigWithModel:(id)arg0;
- (id)currentIndexIdentifier;
- (long long)dolphinResultAnalyzeType;
- (id)initDolphinService:(long long)arg0;
- (void)recordAwemeShowStatus:(BOOL)arg0 index:(long long)arg1;
- (void)trackAdGapInfoWithIndex:(long long)arg0;
- (void)trackFindResultDeduplication:(id)arg0;
- (void)setLiveInnerEnterSource:(id)arg0;
- (id)timer;
- (void)updateTimer;
- (void)startTimer;
- (void).cxx_destruct;
- (void)setService:(id)arg0;
- (void)cancelTimer;
- (void)setTimer:(id)arg0;
- (void)pauseTimer;
- (void)dealloc;
- (id)currentDataSource;
- (id)service;
- (long long)sceneType;
- (void)setSceneType:(long long)arg0;
- (void)setSyncDelegate:(id)arg0;
- (id)syncDelegate;

@end