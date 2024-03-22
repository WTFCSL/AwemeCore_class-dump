//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;
@protocol IESLiveStrategyService;

@interface IESLiveAnchorDuringLiveStrategyFactorDealFragment : IESLiveRoomComponent <HTSLiveAnchorActions, IESLiveDynamicClarityAction, IESLiveAnchorStartLiveStrategyAction, IESLiveInteractAction, IESLiveStreamConfigActions, IESLiveAnchorRoomStatusChangeEvents> {
    BOOL _isStartLive;
    id<IESLiveStrategyService> _strategyService;
    NSMutableArray *_registerModels;
    NSMutableArray *_registerActions;
}

@property (retain, nonatomic) id<IESLiveStrategyService> strategyService;
@property (retain, nonatomic) NSMutableArray *registerModels;
@property (retain, nonatomic) NSMutableArray *registerActions;
@property (nonatomic) BOOL isStartLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)setIsStartLive:(BOOL)arg0;
- (BOOL)isStartLive;
- (void)stopLive;
- (void)componentBindService;
- (void)startLive;
- (void)startAnchorLiveWithRoom:(id)arg0;
- (void)stopAnchorLive;
- (id)strategyService;
- (void)setStrategyService:(id)arg0;
- (void)pushStreamConfigDidUpdate:(id)arg0 type:(id)arg1;
- (void)updateStartLiveStrategyFinishedMaxBitrate:(long long)arg0 minBitrate:(long long)arg1 defaultBitrate:(long long)arg2;
- (void)updateStartLiveStrategyFinishedFrameRate:(long long)arg0;
- (void)updateStartLiveStrategyFinishedDegradeBitrate;
- (void)updateStartLiveStrategyAllFactorFinished;
- (void)willUpdateStreamConfigWithParams:(id *)arg0;
- (void)didUpdateStreamConfigWithParams:(id)arg0;
- (void)didUpdateStreamWithDefaultBitrate:(long long)arg0 minBit:(long long)arg1 maxBit:(long long)arg2;
- (void)didUpdateStreamWithFrameRate:(long long)arg0;
- (void)startInteractiveWithScene:(unsigned long long)arg0;
- (void)endInteractiveWithScene:(unsigned long long)arg0;
- (void)_setupRegisterActionsWhenStartStrategyDisable;
- (void)_setupRegisterModels;
- (id)registerActions;
- (id)registerModels;
- (void)setRegisterModels:(id)arg0;
- (void)setRegisterActions:(id)arg0;
- (void)_removeObservers;
- (void).cxx_destruct;
- (void)_registerObservers;

@end
