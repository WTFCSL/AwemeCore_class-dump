//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, IESLivePEStrategyDataManager, IESLivePEStrategyDataParser;

@interface IESLivePolicyEngineService : IESLiveGeneralBaseService <IESLiveRoomWatchTimeDelegate, IESLiveStrategyCharacterObserver, IESLiveMessageInteractionStrategyResultProvider, IESLiveMessageInteractionStrategyFactorChangeProvider> {
    IESLivePEStrategyDataManager *_dataManager;
    IESLivePEStrategyDataParser *_dataParser;
    NSMutableDictionary *_factorDic;
    NSMutableDictionary *_subscriberDic;
}

@property (retain, nonatomic) IESLivePEStrategyDataManager *dataManager;
@property (retain, nonatomic) IESLivePEStrategyDataParser *dataParser;
@property (retain, nonatomic) NSMutableDictionary *factorDic;
@property (retain, nonatomic) NSMutableDictionary *subscriberDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)arg0;
+ (id)serviceProtocolsWithParam:(id)arg0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (id)subscriberDic;
- (void)setSubscriberDic:(id)arg0;
- (void)liveRoomWatchMinitTick:(unsigned long long)arg0;
- (void)registerStrategyModel:(id)arg0;
- (void)registerStrategyWithJSONDictionary:(id)arg0;
- (id)strategyModelWith:(id)arg0;
- (void)addSubscriber:(id)arg0 forStrategy:(id)arg1 withDefaultFactor:(id)arg2;
- (void)removeSubscriber:(id)arg0 forStrategy:(id)arg1;
- (id)factorValueWithKey:(id)arg0;
- (void)addSubscriberForPublicScreenHistoryMessageStrategy:(id)arg0;
- (void)strategyFactorChange:(id)arg0 withFactorKey:(id)arg1;
- (void)strategyFactorsChange:(id)arg0;
- (id)historyMessageDynamicLoadStrategy;
- (void)setupDecisionEnv;
- (void)subscribeStrategyFromBackEndData;
- (id)factorDic;
- (id)dataParser;
- (id)relatedFactorsWithStrategyModel:(id)arg0;
- (id)publicScreenHistoryCommentLoadStrategyDefaultFactor;
- (BOOL)factorDidChangeWithFactorKey:(id)arg0 currentValue:(id)arg1;
- (void)executeStrategyWithStrategyModels:(id)arg0;
- (void)characterDidChange:(id)arg0 withCharacterKey:(id)arg1;
- (void)setDataParser:(id)arg0;
- (void)setFactorDic:(id)arg0;
- (id)dataManager;
- (void).cxx_destruct;
- (void)setDataManager:(id)arg0;

@end
