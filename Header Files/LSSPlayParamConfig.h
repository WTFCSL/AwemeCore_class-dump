//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface LSSPlayParamConfig : NSObject {
    int _minStartPlayBuffer;
    int _maxStartPlayBuffer;
    int _attenuationTimeOffset;
    int _liveCurrentVbitrate;
    id /* block */ _appInfoRequest;
    NSMutableDictionary *_netWorkLevelAndStartPlayBufferMap;
    NSMutableDictionary *_playSessionMap;
    NSString *_lastSessionId;
    double _coefficient;
    NSString *_liveCurrentNeptuneName;
    NSMutableDictionary *_mHistoryDownloadSpeedMap;
    NSMutableDictionary *_mPitayaTransParamsRes;
}

@property (retain, nonatomic) NSMutableDictionary *netWorkLevelAndStartPlayBufferMap;
@property (retain, nonatomic) NSMutableDictionary *playSessionMap;
@property (copy, nonatomic) NSString *lastSessionId;
@property (nonatomic) int minStartPlayBuffer;
@property (nonatomic) int maxStartPlayBuffer;
@property (nonatomic) double coefficient;
@property (nonatomic) int attenuationTimeOffset;
@property (nonatomic) int liveCurrentVbitrate;
@property (retain, nonatomic) NSString *liveCurrentNeptuneName;
@property (retain, nonatomic) NSMutableDictionary *mHistoryDownloadSpeedMap;
@property (retain, nonatomic) NSMutableDictionary *mPitayaTransParamsRes;
@property (copy, nonatomic) id /* block */ appInfoRequest;

+ (id)shareInstance;

- (void)setMinStartPlayBuffer:(int)arg0;
- (void)setMaxStartPlayBuffer:(int)arg0;
- (void)setAttenuationTimeOffset:(int)arg0;
- (void)setNetWorkLevelAndStartPlayBufferMap:(id)arg0;
- (void)setPlaySessionMap:(id)arg0;
- (void)configWithSettings;
- (int)maxStartPlayBuffer;
- (int)minStartPlayBuffer;
- (id)netWorkLevelAndStartPlayBufferMap;
- (id /* block */)appInfoRequest;
- (void)setLastSessionId:(id)arg0;
- (id)playSessionMap;
- (long long)getStartPlayBuffer:(long long)arg0 stallTotalCount:(int)arg1 retryTotalCount:(int)arg2;
- (id)lastSessionId;
- (int)attenuationTimeOffset;
- (void)initWithSettings;
- (void)updatePlaySessionInfo:(id)arg0 sessionInfo:(id)arg1;
- (id)playConfigWithKey:(id)arg0 userInfo:(id)arg1;
- (void)setAppInfoRequest:(id /* block */)arg0;
- (void)updateStartPlayStrategyInfo:(id)arg0;
- (id)currentPersonalTransParams:(BOOL)arg0;
- (void)computeStartPlaybuffer;
- (id)liveCurrentNeptuneName;
- (void)setLiveCurrentNeptuneName:(id)arg0;
- (int)liveCurrentVbitrate;
- (void)setLiveCurrentVbitrate:(int)arg0;
- (id)mHistoryDownloadSpeedMap;
- (void)setMHistoryDownloadSpeedMap:(id)arg0;
- (id)mPitayaTransParamsRes;
- (void)configWithVpaasSettings;
- (void)initWithVpaasSettings;
- (void)setMPitayaTransParamsRes:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (double)coefficient;
- (void)setCoefficient:(double)arg0;

@end
