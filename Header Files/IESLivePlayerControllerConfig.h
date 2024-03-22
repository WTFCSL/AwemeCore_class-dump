//
//     Generated by private class-dump
//

@class IESLivePlayerTrackerConfig, NSString, IESLivePlayerClarityStrategyInfo, NSNumber;

@interface IESLivePlayerControllerConfig : NSObject <IESLivePlayerControllerConfigProtocol> {
    BOOL _prepareForReuse;
    BOOL _muted;
    NSNumber *_roomID;
    NSNumber *_anchorID;
    IESLivePlayerTrackerConfig *_trackerConfig;
    NSString *_streamData;
    NSString *_streamURL;
    long long _scaleType;
    NSString *_sdkKey;
    IESLivePlayerClarityStrategyInfo *_clarityStrategyInfo;
    NSString *_roomIDStr;
    NSString *_anchorIDStr;
}

@property (retain, nonatomic) NSString *roomIDStr;
@property (retain, nonatomic) NSString *anchorIDStr;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *anchorID;
@property (retain, nonatomic) IESLivePlayerTrackerConfig *trackerConfig;
@property (retain, nonatomic) NSString *streamData;
@property (retain, nonatomic) NSString *streamURL;
@property (nonatomic) BOOL prepareForReuse;
@property (nonatomic) long long scaleType;
@property (copy, nonatomic) NSString *sdkKey;
@property (retain, nonatomic) IESLivePlayerClarityStrategyInfo *clarityStrategyInfo;
@property (nonatomic) BOOL muted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultConfig;

- (id)initWithRoomID:(id)arg0;
- (id)anchorID;
- (id)trackerConfig;
- (void)setAnchorID:(id)arg0;
- (void)setTrackerConfig:(id)arg0;
- (void)setStreamData:(id)arg0;
- (id)stainedTrackInfo;
- (id)sdkKey;
- (void)setSdkKey:(id)arg0;
- (id)initWithTrackConfig:(id)arg0;
- (void)setPrepareForReuse:(BOOL)arg0;
- (id)clarityStrategyInfo;
- (id)roomIDStr;
- (id)anchorIDStr;
- (void)setRoomIDStr:(id)arg0;
- (void)setAnchorIDStr:(id)arg0;
- (void)setClarityStrategyInfo:(id)arg0;
- (void).cxx_destruct;
- (BOOL)muted;
- (void)setMuted:(BOOL)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (BOOL)prepareForReuse;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)streamURL;
- (id)streamData;
- (long long)scaleType;
- (void)setScaleType:(long long)arg0;
- (void)setStreamURL:(id)arg0;

@end