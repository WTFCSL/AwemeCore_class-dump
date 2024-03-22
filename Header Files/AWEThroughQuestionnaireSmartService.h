//
//     Generated by private class-dump
//

@class NSSet, NSDictionary, NSString, NSArray, AWEAwemeModel, AWEQuestionnaireResponse;
@protocol FurionSmartCommonServiceProtocol, AWEStorageServiceKVInterface;

@interface AWEThroughQuestionnaireSmartService : NSObject <IESFCEventObserver, AWESmartQuestionnaireReverseMessage, FurionSmartServiceProtocol> {
    BOOL _isRunning;
    BOOL _shouldRun;
    BOOL _hasHappen;
    id<FurionSmartCommonServiceProtocol> _smartCommonService;
    long long _skipTimes;
    long long _lastRunTime;
    NSDictionary *_configMap;
    NSSet *_triggerEvents;
    NSDictionary *_commonEventMap;
    NSDictionary *_reverseCommonEventMap;
    long long _checkQuestionnaireFailedTimes;
    long long _errorTimes;
    NSString *_lastTaskId;
    NSDictionary *_cacheQuestionnaireInput;
    NSString *_lastAwemeId;
    NSDictionary *_cacheAwemeInput;
    NSArray *_shownTaskIDs;
    NSString *_sceneName;
    NSString *_modelName;
    long long _runCount;
    NSString *_lastHappenQuestionnarieVersion;
    AWEAwemeModel *_lastHappenTargetAweme;
    AWEQuestionnaireResponse *_lastHappenQuestionnarie;
    NSString *_lastHappenTargetAction;
    id<AWEStorageServiceKVInterface> _kvStorage;
}

@property (retain, nonatomic) id<FurionSmartCommonServiceProtocol> smartCommonService;
@property (nonatomic) long long skipTimes;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL shouldRun;
@property (nonatomic) long long lastRunTime;
@property (retain, nonatomic) NSDictionary *configMap;
@property (retain, nonatomic) NSSet *triggerEvents;
@property (retain, nonatomic) NSDictionary *commonEventMap;
@property (retain, nonatomic) NSDictionary *reverseCommonEventMap;
@property (nonatomic) long long checkQuestionnaireFailedTimes;
@property (nonatomic) long long errorTimes;
@property (nonatomic) BOOL hasHappen;
@property (copy, nonatomic) NSString *lastTaskId;
@property (copy, nonatomic) NSDictionary *cacheQuestionnaireInput;
@property (copy, nonatomic) NSString *lastAwemeId;
@property (copy, nonatomic) NSDictionary *cacheAwemeInput;
@property (copy, nonatomic) NSArray *shownTaskIDs;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *modelName;
@property (nonatomic) long long runCount;
@property (retain, nonatomic) NSString *lastHappenQuestionnarieVersion;
@property (retain, nonatomic) AWEAwemeModel *lastHappenTargetAweme;
@property (retain, nonatomic) AWEQuestionnaireResponse *lastHappenQuestionnarie;
@property (retain, nonatomic) NSString *lastHappenTargetAction;
@property (retain, nonatomic) id<AWEStorageServiceKVInterface> kvStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getConfigMap;
+ (id)sharedInstance;

- (void)setupObserver;
- (id)kvStorage;
- (void)setKvStorage:(id)arg0;
- (void)setConfigMap:(id)arg0;
- (id)configMap;
- (void)onTriggerEvent:(unsigned long long)arg0 params:(id)arg1;
- (void)setSmartCommonService:(id)arg0;
- (id)smartCommonService;
- (void)runWithConfigBuilder:(id /* block */)arg0 completion:(id /* block */)arg1;
- (long long)skipTimes;
- (void)setSkipTimes:(long long)arg0;
- (BOOL)ignoreRun:(id)arg0;
- (void)shouldIgnoreShow:(id /* block */)arg0 withModelID:(id)arg1;
- (long long)errorTimes;
- (void)removeCommonEventObservers;
- (id)commonEventMap;
- (void)saveQuestionnaireTaskShown:(id)arg0;
- (id)reverseCommonEventMap;
- (void)triggerQuestionnairePredictWithAction:(id)arg0 params:(id)arg1;
- (BOOL)hasQuestionnaireTaskShown:(id)arg0;
- (void)cleanServiceAsNotNeedRun;
- (id)lastTaskId;
- (void)setLastTaskId:(id)arg0;
- (void)setCacheQuestionnaireInput:(id)arg0;
- (id)cacheQuestionnaireInput;
- (id)lastAwemeId;
- (void)setLastAwemeId:(id)arg0;
- (void)setCacheAwemeInput:(id)arg0;
- (id)cacheAwemeInput;
- (BOOL)checkQuestionnaire:(id)arg0;
- (long long)checkQuestionnaireFailedTimes;
- (void)setCheckQuestionnaireFailedTimes:(long long)arg0;
- (id)getCacheQuestionnaireInput:(id)arg0;
- (id)getCacheAwemeInputWithAwemeModel:(id)arg0 itemID:(id)arg1;
- (void)setErrorTimes:(long long)arg0;
- (BOOL)hasHappen;
- (void)setHasHappen:(BOOL)arg0;
- (void)setLastHappenQuestionnarieVersion:(id)arg0;
- (void)setLastHappenTargetAweme:(id)arg0;
- (void)setLastHappenQuestionnarie:(id)arg0;
- (void)setLastHappenTargetAction:(id)arg0;
- (double)getCurrentTimeMs;
- (void)setRunCount:(long long)arg0;
- (void)setShownTaskIDs:(id)arg0;
- (id)getShownTaskIDs;
- (id)lastHappenTargetAweme;
- (id)lastHappenQuestionnarie;
- (id)lastHappenTargetAction;
- (id)lastHappenQuestionnarieVersion;
- (void)setCommonEventMap:(id)arg0;
- (void)setReverseCommonEventMap:(id)arg0;
- (id)shownTaskIDs;
- (void)setIsRunning:(BOOL)arg0;
- (BOOL)isRunning;
- (id)init;
- (BOOL)enabled;
- (void).cxx_destruct;
- (void)setModelName:(id)arg0;
- (id)modelName;
- (id)serviceName;
- (void)prepare;
- (id)sceneName;
- (void)dealloc;
- (long long)lastRunTime;
- (BOOL)shouldRun;
- (void)setLastRunTime:(long long)arg0;
- (void)setShouldRun:(BOOL)arg0;
- (void)setSceneName:(id)arg0;
- (id)triggerEvents;
- (void)setTriggerEvents:(id)arg0;
- (long long)runCount;
- (id)lastResult;

@end
