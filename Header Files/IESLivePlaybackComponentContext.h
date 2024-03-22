//
//     Generated by private class-dump
//

@class NSString, HTSLiveEpisode, NSDictionary, NSNumber, IESLivePlaybackEnterRoomTraceContext;

@interface IESLivePlaybackComponentContext : NSObject <IESVSMessageActionContextProtocol, IESLivePlaybackComponentContextService> {
    BOOL _isSmoothEnterRoom;
    BOOL _startHighlightFirst;
    BOOL _standardHighlight;
    BOOL _modelMatchedStandard;
    BOOL _isLogin;
    BOOL _isFromLocal;
    unsigned long long _initOrientation;
    NSNumber *_episodeID;
    HTSLiveEpisode *_episode;
    NSString *_multiTabSelectTabId;
    NSString *_collectionId;
    unsigned long long _enterType;
    double _historyLocation;
    NSString *_highlightDescription;
    double _highlightLocation;
    double _playerStartDuration;
    double _playbackCreateTime;
    NSString *_modelMatchedDescription;
    double _modelMatchedLocation;
    NSString *_videoPreLoadVid;
    NSString *_nextEpisodeID;
    IESLivePlaybackEnterRoomTraceContext *_enterTrace;
    NSString *_searchParams;
    NSDictionary *_originParams;
    double _liveAbsoluteDuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (retain, nonatomic) IESLivePlaybackEnterRoomTraceContext *enterTrace;
@property (retain, nonatomic) NSNumber *episodeID;
@property (copy, nonatomic) NSString *multiTabSelectTabId;
@property (copy, nonatomic) NSString *collectionId;
@property (nonatomic) unsigned long long enterType;
@property (nonatomic) double historyLocation;
@property (nonatomic) BOOL startHighlightFirst;
@property (nonatomic) BOOL standardHighlight;
@property (copy, nonatomic) NSString *highlightDescription;
@property (nonatomic) double highlightLocation;
@property (nonatomic) double liveAbsoluteDuration;
@property (nonatomic) double playerStartDuration;
@property (nonatomic) double playbackCreateTime;
@property (nonatomic) BOOL modelMatchedStandard;
@property (copy, nonatomic) NSString *modelMatchedDescription;
@property (nonatomic) double modelMatchedLocation;
@property (copy, nonatomic) NSString *videoPreLoadVid;
@property (nonatomic) BOOL isLogin;
@property (nonatomic) unsigned long long initOrientation;
@property (readonly, nonatomic) BOOL isStreamVertical;
@property (nonatomic) BOOL isSmoothEnterRoom;
@property (readonly, copy, nonatomic) NSString *nextEpisodeID;
@property (retain, nonatomic) NSString *searchParams;
@property (nonatomic) BOOL isFromLocal;
@property (copy, nonatomic) NSDictionary *originParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextWithParameters:(id)arg0;
+ (BOOL)verifiedLegalityParameters:(id)arg0;
+ (BOOL)verifiedLegalityParams:(id)arg0;
+ (id)contextForEpisode:(id)arg0 withParameters:(id)arg1 enterTrace:(id)arg2;

- (id)searchParams;
- (void)setSearchParams:(id)arg0;
- (void)setIsLogin:(BOOL)arg0;
- (void)setEpisodeID:(id)arg0;
- (void)setEnterTrace:(id)arg0;
- (id)enterTrace;
- (double)historyLocation;
- (BOOL)startHighlightFirst;
- (void)setStartHighlightFirst:(BOOL)arg0;
- (void)setIsSmoothEnterRoom:(BOOL)arg0;
- (BOOL)isSmoothEnterRoom;
- (id)nextEpisodeID;
- (void)setOriginParams:(id)arg0;
- (id)originParams;
- (BOOL)isFromLocal;
- (void)setIsFromLocal:(BOOL)arg0;
- (BOOL)isStreamVertical;
- (void)setInitOrientation:(unsigned long long)arg0;
- (void)setPlaybackCreateTime:(double)arg0;
- (double)playbackCreateTime;
- (unsigned long long)initOrientation;
- (void)setHistoryLocation:(double)arg0;
- (void)setHighlightLocation:(double)arg0;
- (void)setStandardHighlight:(BOOL)arg0;
- (void)setPlayerStartDuration:(double)arg0;
- (void)setMultiTabSelectTabId:(id)arg0;
- (void)setModelMatchedStandard:(BOOL)arg0;
- (void)setModelMatchedLocation:(double)arg0;
- (void)setModelMatchedDescription:(id)arg0;
- (void)setVideoPreLoadVid:(id)arg0;
- (void)updateContextWithParams:(id)arg0;
- (void)updateContextForEpisode:(id)arg0;
- (void)updateContextWithParameters:(id)arg0;
- (id)multiTabSelectTabId;
- (BOOL)standardHighlight;
- (double)highlightLocation;
- (double)playerStartDuration;
- (BOOL)modelMatchedStandard;
- (id)modelMatchedDescription;
- (double)modelMatchedLocation;
- (id)videoPreLoadVid;
- (double)liveAbsoluteDuration;
- (void)setLiveAbsoluteDuration:(double)arg0;
- (void).cxx_destruct;
- (id)collectionId;
- (void)setCollectionId:(id)arg0;
- (void)setEpisode:(id)arg0;
- (id)episode;
- (unsigned long long)enterType;
- (void)setEnterType:(unsigned long long)arg0;
- (BOOL)isLogin;
- (id)episodeID;
- (id)highlightDescription;
- (void)setHighlightDescription:(id)arg0;

@end