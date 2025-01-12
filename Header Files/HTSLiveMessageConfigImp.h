//
//     Generated by private class-dump
//

@class NSDictionary, NSString, NSNumber;

@interface HTSLiveMessageConfigImp : NSObject <IESLiveMessageConfig> {
    BOOL _useUnifiedChannel;
    BOOL _enableWS;
    BOOL _enableExtraFrontier;
    BOOL _enableZstdDict;
    BOOL _enableWRDS;
    BOOL _websocketFirst;
    BOOL _httpFirstFetchEnabled;
    BOOL _needFetchHistoryMessage;
    BOOL _isAnchor;
    int episodeStage;
    long long _businessService;
    long long _businessMethod;
    NSDictionary *_customParams;
    NSString *_websocketUrl;
    NSString *_httpUrl;
    long long _liveRoomScene;
    NSNumber *_roomID;
    NSString *_subRoomID;
    NSString *_subChannelID;
    NSString *_identityString;
    NSString *_livePlatformSource;
    NSNumber *_systemType;
    unsigned long long decoderSceneType;
}

@property (nonatomic) BOOL enableWS;
@property (nonatomic) BOOL enableExtraFrontier;
@property (nonatomic) BOOL enableZstdDict;
@property (nonatomic) BOOL enableWRDS;
@property (nonatomic) BOOL useUnifiedChannel;
@property (nonatomic) long long businessService;
@property (nonatomic) long long businessMethod;
@property (retain, nonatomic) NSDictionary *customParams;
@property (copy, nonatomic) NSString *websocketUrl;
@property (nonatomic) BOOL websocketFirst;
@property (copy, nonatomic) NSString *httpUrl;
@property (nonatomic) BOOL httpFirstFetchEnabled;
@property (nonatomic) BOOL needFetchHistoryMessage;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSString *subRoomID;
@property (retain, nonatomic) NSString *subChannelID;
@property (copy) NSString *identityString;
@property (copy, nonatomic) NSString *livePlatformSource;
@property (retain, nonatomic) NSNumber *systemType;
@property (nonatomic) long long liveRoomScene;
@property (nonatomic) unsigned long long decoderSceneType;
@property (nonatomic) int episodeStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsAnchor:(BOOL)arg0;
- (id)livePlatformSource;
- (void)setLivePlatformSource:(id)arg0;
- (void)setCustomParams:(id)arg0;
- (id)customParams;
- (int)episodeStage;
- (void)setEpisodeStage:(int)arg0;
- (void)setSystemType:(id)arg0;
- (void)setWebsocketUrl:(id)arg0;
- (void)setUseUnifiedChannel:(BOOL)arg0;
- (long long)businessMethod;
- (void)setWebsocketFirst:(BOOL)arg0;
- (void)setIdentityString:(id)arg0;
- (void)setDecoderSceneType:(unsigned long long)arg0;
- (BOOL)enableWRDS;
- (void)setEnableWRDS:(BOOL)arg0;
- (void)setHttpFirstFetchEnabled:(BOOL)arg0;
- (void)setBusinessMethod:(long long)arg0;
- (void)setEnableZstdDict:(BOOL)arg0;
- (void)setLiveRoomScene:(long long)arg0;
- (void)setEnableWS:(BOOL)arg0;
- (BOOL)enableWS;
- (id)getLiveSceneStringFromLiveRoomScene;
- (void)setEnableExtraFrontier:(BOOL)arg0;
- (id)websocketUrl;
- (BOOL)useUnifiedChannel;
- (BOOL)enableExtraFrontier;
- (void)setNeedFetchHistoryMessage:(BOOL)arg0;
- (long long)liveRoomScene;
- (void)setSubRoomID:(id)arg0;
- (long long)businessService;
- (void)setBusinessService:(long long)arg0;
- (BOOL)enableZstdDict;
- (BOOL)websocketFirst;
- (BOOL)httpFirstFetchEnabled;
- (BOOL)needFetchHistoryMessage;
- (id)subRoomID;
- (id)subChannelID;
- (void)setSubChannelID:(id)arg0;
- (unsigned long long)decoderSceneType;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (id)httpUrl;
- (id)identityString;
- (id)systemType;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (void)setHttpUrl:(id)arg0;

@end
