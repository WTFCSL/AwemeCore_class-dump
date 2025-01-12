//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@interface AWENearbyFeedFMPManager : AWENearbyFMPBaseManager <AWEPlayVideoMessage, AWENearbyFMPInjectProtocol> {
    BOOL _isVideoPreFetch;
    long long _preloadType;
    NSString *_serverLatency;
    AWEAwemeModel *_currentAwemeModel;
    long long _awemeType;
    long long _degradationTime;
}

@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (nonatomic) long long preloadType;
@property (nonatomic) long long awemeType;
@property (nonatomic) long long degradationTime;
@property (nonatomic) BOOL isVideoPreFetch;
@property (copy, nonatomic) NSString *serverLatency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)playerDidReadyForDisplay:(id)arg0;
- (id)currentAwemeModel;
- (long long)awemeType;
- (void)setAwemeType:(long long)arg0;
- (void)setPreloadType:(long long)arg0;
- (void)setCurrentAwemeModel:(id)arg0;
- (id)modelForPlayer:(id)arg0;
- (void)__handleVideoPlayFailed:(id)arg0;
- (BOOL)__isFromNearby:(id)arg0;
- (void)feedRequestFail;
- (void)feedRequestEmpty;
- (void)fmpDidShow;
- (id)injectCustomParams;
- (id)injectEventName;
- (void)injectRegisterFMPMessage;
- (void)injectUnRegisterFMPMessage;
- (void)injectDidTrackerEnd;
- (void)__handleLiveStartPlay:(id)arg0;
- (void)__handleLivePlayFailed:(id)arg0;
- (void)__handleFeedScroll:(id)arg0;
- (BOOL)isVideoPreFetch;
- (long long)degradationTime;
- (void)setDegradationTime:(long long)arg0;
- (void)didLoadAweme:(id)arg0 preloadType:(unsigned long long)arg1;
- (void)feedWillstartRequestWithDegradationTime:(long long)arg0;
- (long long)awemeTypeForModel:(id)arg0;
- (void)setIsVideoPreFetch:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)serverLatency;
- (void)setServerLatency:(id)arg0;
- (long long)preloadType;

@end
