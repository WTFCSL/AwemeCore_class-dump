//
//     Generated by private class-dump
//

@class NSLock, NSHashTable, NSArray, IESLiveStrategyFactorResult, NSString, NSDictionary, IESLiveGCDTimer, IESLiveStrategyDataCenter, NSObject, IESLiveStrategyTrackerFilterEntity, NSMapTable;
@protocol OS_dispatch_queue;

@interface IESLiveStrategyCombine : NSObject <IESLiveStrategyDataCenterDelegate> {
    BOOL _executing;
    BOOL _needTriggerAfterFinish;
    BOOL _fixCharacterUpdateInterval;
    IESLiveGCDTimer *_timer;
    NSArray *_combineItems;
    NSDictionary *_itemsDict;
    NSHashTable *_observers;
    NSMapTable *_observerMap;
    NSDictionary *_strategy;
    IESLiveStrategyFactorResult *_resultColletion;
    NSLock *_observersLock;
    IESLiveStrategyDataCenter *_dataCenter;
    NSArray *_constrastGroupItemList;
    id /* block */ _clientDiganoseBlock;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_currentTimerToken;
    IESLiveStrategyTrackerFilterEntity *_trackerFilter;
}

@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (copy, nonatomic) NSArray *combineItems;
@property (copy, nonatomic) NSDictionary *itemsDict;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSMapTable *observerMap;
@property (retain, nonatomic) NSDictionary *strategy;
@property (retain, nonatomic) IESLiveStrategyFactorResult *resultColletion;
@property (retain, nonatomic) NSLock *observersLock;
@property (retain, nonatomic) IESLiveStrategyDataCenter *dataCenter;
@property (copy, nonatomic) NSArray *constrastGroupItemList;
@property (copy, nonatomic) id /* block */ clientDiganoseBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL needTriggerAfterFinish;
@property (copy, nonatomic) NSString *currentTimerToken;
@property (retain, nonatomic) IESLiveStrategyTrackerFilterEntity *trackerFilter;
@property (nonatomic) BOOL fixCharacterUpdateInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateStrategy:(id)arg0;
- (id)dataCenter;
- (void)setDataCenter:(id)arg0;
- (id)getLatestFactor:(id)arg0;
- (void)addStrategyObserver:(id)arg0 InFactor:(id)arg1 withInputValue:(id)arg2;
- (void)removeStrategyObserver:(id)arg0;
- (id)getLatestFactor:(id)arg0 scene:(id)arg1;
- (void)triggerEventWithFactor:(id)arg0 scene:(id)arg1;
- (void)triggerFactorUpdate:(BOOL)arg0;
- (void)setClientDiganoseBlock:(id /* block */)arg0;
- (id /* block */)clientDiganoseBlock;
- (void)setResultColletion:(id)arg0;
- (void)setTrackerFilter:(id)arg0;
- (void)setFixCharacterUpdateInterval:(BOOL)arg0;
- (void)abInfoListAddcombineList;
- (id)parseMockInfo;
- (void)setConstrastGroupItemList:(id)arg0;
- (void)initDynamicTimer;
- (id)resultColletion;
- (void)triggerEventWithFactorName:(id)arg0 model:(id)arg1 scene:(id)arg2;
- (void)updateTrackerEventWithFactor:(id)arg0 scene:(id)arg1;
- (BOOL)needTriggerAfterFinish;
- (id)parseAbInfoWithoutMock;
- (id)parseCombineInfo;
- (void)setItemsDict:(id)arg0;
- (id)parseStrategyList:(id)arg0 itemId:(id)arg1 withInfoType:(unsigned long long)arg2;
- (void)setNeedTriggerAfterFinish:(BOOL)arg0;
- (void)setCurrentTimerToken:(id)arg0;
- (id)currentTimerToken;
- (void)executeStrategyCalculate:(id)arg0 forceSync:(BOOL)arg1;
- (id)constrastGroupItemList;
- (id)itemsDict;
- (BOOL)fixCharacterUpdateInterval;
- (id)trackerFilter;
- (void)dataCenter:(id)arg0 didUpdateUserCount:(long long)arg1;
- (void)dataCenter:(id)arg0 didUpdateVpass:(BOOL)arg1;
- (void)dataCenter:(id)arg0 didUpdateCurrentResolution:(id)arg1;
- (void)dataCenter:(id)arg0 didUpdateStreamSDKKey:(id)arg1;
- (void)dataCenter:(id)arg0 didUpdateStreamQualityLevel:(long long)arg1;
- (void)dataCenter:(id)arg0 didUpdatePublishPoint:(id)arg1;
- (void)dataCenter:(id)arg0 didUpdateVpassSrType:(long long)arg1;
- (void)dataCenter:(id)arg0 didUpdateVpassSrIsOn:(BOOL)arg1;
- (void)didUpdateCharactorInNegativePeriod;
- (id)initWithDataCenter:(id)arg0;
- (id)combineItems;
- (void)setCombineItems:(id)arg0;
- (id)timer;
- (id)strategy;
- (BOOL)executing;
- (void)setObserversLock:(id)arg0;
- (id)observersLock;
- (void).cxx_destruct;
- (id)observers;
- (void)setObservers:(id)arg0;
- (void)setTimer:(id)arg0;
- (id)queue;
- (void)dealloc;
- (void)setExecuting:(BOOL)arg0;
- (void)setQueue:(id)arg0;
- (void)setStrategy:(id)arg0;
- (id)observerMap;
- (void)setObserverMap:(id)arg0;

@end