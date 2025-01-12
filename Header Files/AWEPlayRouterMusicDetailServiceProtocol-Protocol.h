//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEAwemeModel;

@protocol AWEPlayRouterMusicDetailServiceProtocol <NSObject>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) double playerAudioEffectTargetLoudnessForPlayer;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) unsigned long long feedType;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (void)setPlayerAudioEffectTargetLoudnessForPlayer:(double)arg0;
- (double)playerAudioEffectTargetLoudnessForPlayer;
- (id)canEnterSimilarMusicDetailPage;
- (BOOL)preconditionEnterMusicDetailWithToastString:(id *)arg0;
- (void)interactorOnEnterMusicDetail:(id)arg0 repostParams:(id)arg1;
- (void)routerMusicDetailWithRouterDict:(id)arg0 musicModel:(id)arg1 enterSimilarDetailPage:(BOOL)arg2;
- (long long)serverPreconditionEnterMusicDetailWithToastString:(id *)arg0;
- (void)setModel:(id)arg0;
- (unsigned long long)feedType;
- (void)setFeedType:(unsigned long long)arg0;
- (id)model;

@end
