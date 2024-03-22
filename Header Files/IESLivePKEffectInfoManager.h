//
//     Generated by private class-dump
//

@class NSString, NSMapTable, NSDictionary, BattleEffectInfo, AnchorEffect_EffectInfo;
@protocol IESLiveCompoundSubscription, IESLiveRevenueInteractProvider;

@interface IESLivePKEffectInfoManager : NSObject {
    BOOL _isNewPropEffectInfoSendByCurrentLoginUser;
    BOOL _resolveFromMessage;
    BattleEffectInfo *_battleEffectInfo;
    NSString *_rawBattleEffectInfo;
    AnchorEffect_EffectInfo *_lastPropEffectInfoSendByCurrentLoginUser;
    long long _lastReportEffectInfoStartTime;
    NSMapTable *_activePropEffectInfoMap;
    NSDictionary *_fontSizeDict;
    id<IESLiveRevenueInteractProvider> _interactProvider;
    id<IESLiveCompoundSubscription> _disposable;
}

@property (retain, nonatomic) BattleEffectInfo *battleEffectInfo;
@property (retain, nonatomic) NSString *rawBattleEffectInfo;
@property (nonatomic) BOOL resolveFromMessage;
@property (weak, nonatomic) AnchorEffect_EffectInfo *lastPropEffectInfoSendByCurrentLoginUser;
@property (nonatomic) long long lastReportEffectInfoStartTime;
@property (retain, nonatomic) NSMapTable *activePropEffectInfoMap;
@property (retain, nonatomic) NSDictionary *fontSizeDict;
@property (weak, nonatomic) id<IESLiveRevenueInteractProvider> interactProvider;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (nonatomic) BOOL isNewPropEffectInfoSendByCurrentLoginUser;

+ (BOOL)shouldLoadEffectInfoForInteractProvider:(id)arg0;
+ (BOOL)isPropEffectType:(long long)arg0;
+ (id)schemaForEffectType:(long long)arg0;

- (id)initWithDIContext:(id)arg0;
- (double)currentServerTimestampInMS;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (id)battleEffectInfo;
- (id)interactProvider;
- (id)firstActivePropEffectInfoForUserId:(id)arg0;
- (void)setInteractProvider:(id)arg0;
- (void)openDescPageForEffectInfo:(id)arg0 source:(id)arg1;
- (long long)remainSecondsFor:(id)arg0;
- (long long)numberOfSameKindForEffectInfo:(id)arg0 inAnchorEffect:(id)arg1;
- (id)executePropsMakeEffectQueueAnimationFromStart:(struct CGPoint { double x0; double x1; })arg0 toTarget:(struct CGPoint { double x0; double x1; })arg1;
- (id)executePropsMakeEffectBreathAnimationWithTimeOffset:(double)arg0;
- (BOOL)hasEffectInfo;
- (void)setActivePropEffectInfoMap:(id)arg0;
- (void)setFontSizeDict:(id)arg0;
- (id)fontSizeDict;
- (id)activePropEffectInfoMap;
- (void)setBattleEffectInfo:(id)arg0;
- (void)setIsNewPropEffectInfoSendByCurrentLoginUser:(BOOL)arg0;
- (void)setResolveFromMessage:(BOOL)arg0;
- (void)resolveRawBattleEffectInfo:(id)arg0 battleId:(long long)arg1;
- (id)logArrayForBattleEffectInfo:(id)arg0;
- (id)lastPropEffectInfoSendByCurrentLoginUser;
- (void)setLastPropEffectInfoSendByCurrentLoginUser:(id)arg0;
- (BOOL)useLocalUpdateBattleEffectInfoIfExpired:(id)arg0;
- (void)resetLastPropEffectInfoSendByCurrentLoginUserWithBattleEffectInfo:(id)arg0;
- (BOOL)resolveFromMessage;
- (void)setRawBattleEffectInfo:(id)arg0;
- (void)reportEffectInfo:(id)arg0 userId:(id)arg1 checkLast:(BOOL)arg2;
- (void)setLastReportEffectInfoStartTime:(long long)arg0;
- (void)cleanInvalidEffectInfo;
- (long long)lastReportEffectInfoStartTime;
- (double)fontSizeForBuffScoreRatio:(long long)arg0;
- (id)anchorEffectForUserId:(id)arg0;
- (void)resolveBattleEffectContainerMessage:(id)arg0;
- (void)clearBattleEffectInfo;
- (id)executePropsMakeEffectAnimationFromStart:(struct CGPoint { double x0; double x1; })arg0 toTarget:(struct CGPoint { double x0; double x1; })arg1;
- (id)executePropsMakeFierceAnimationWithCenterPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)executePropsMakeBorrowedAnimationWithCenterPoint:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)isNewPropEffectInfoSendByCurrentLoginUser;
- (id)rawBattleEffectInfo;
- (void).cxx_destruct;
- (void)clean;

@end
