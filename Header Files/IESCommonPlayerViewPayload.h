//
//     Generated by private class-dump
//

@class NSString;

@interface IESCommonPlayerViewPayload : NSObject {
    BOOL _enableHardDecode;
    BOOL _enableH256Decode;
    BOOL _enableTTPlayer;
    BOOL _repeated;
    BOOL _useCache;
    BOOL _ownPlayerPlayWithURLs;
    BOOL _truncateTailWhenRepeated;
    BOOL _showDefaultVolumeLoading;
    BOOL _mute;
    BOOL _useTTNetUtility;
    BOOL _disableTracker;
    BOOL _disablePreemptAudioFocusIfMute;
    unsigned long long _playerType;
    double _verticalBottomOffset;
    id /* block */ _preCheckBlockBeforPlay;
    NSString *_noxusFirstFrameLogKey;
    NSString *_noxusPlayErrorLogKey;
    NSString *_noxusPlayBlockLogKey;
    NSString *_outBackgroundColor;
    unsigned long long _netWorkType;
}

@property (nonatomic) unsigned long long playerType;
@property (nonatomic) BOOL enableHardDecode;
@property (nonatomic) BOOL enableH256Decode;
@property (nonatomic) BOOL enableTTPlayer;
@property (nonatomic) BOOL repeated;
@property (nonatomic) BOOL useCache;
@property (nonatomic) BOOL ownPlayerPlayWithURLs;
@property (nonatomic) BOOL truncateTailWhenRepeated;
@property (nonatomic) double verticalBottomOffset;
@property (copy, nonatomic) id /* block */ preCheckBlockBeforPlay;
@property (nonatomic) BOOL showDefaultVolumeLoading;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL useTTNetUtility;
@property (nonatomic) BOOL disableTracker;
@property (copy, nonatomic) NSString *noxusFirstFrameLogKey;
@property (copy, nonatomic) NSString *noxusPlayErrorLogKey;
@property (copy, nonatomic) NSString *noxusPlayBlockLogKey;
@property (copy, nonatomic) NSString *outBackgroundColor;
@property (nonatomic) unsigned long long netWorkType;
@property (nonatomic) BOOL disablePreemptAudioFocusIfMute;

- (unsigned long long)netWorkType;
- (BOOL)truncateTailWhenRepeated;
- (BOOL)ownPlayerPlayWithURLs;
- (void)setOwnPlayerPlayWithURLs:(BOOL)arg0;
- (void)setTruncateTailWhenRepeated:(BOOL)arg0;
- (BOOL)useTTNetUtility;
- (void)setNetWorkType:(unsigned long long)arg0;
- (BOOL)enableHardDecode;
- (void)setEnableHardDecode:(BOOL)arg0;
- (BOOL)enableH256Decode;
- (void)setEnableH256Decode:(BOOL)arg0;
- (void)setPlayerType:(unsigned long long)arg0;
- (void)setEnableTTPlayer:(BOOL)arg0;
- (void)setDisableTracker:(BOOL)arg0;
- (void)setUseTTNetUtility:(BOOL)arg0;
- (BOOL)disableTracker;
- (BOOL)disablePreemptAudioFocusIfMute;
- (void)setDisablePreemptAudioFocusIfMute:(BOOL)arg0;
- (BOOL)showDefaultVolumeLoading;
- (id /* block */)preCheckBlockBeforPlay;
- (BOOL)enableTTPlayer;
- (id)outBackgroundColor;
- (double)verticalBottomOffset;
- (void)setVerticalBottomOffset:(double)arg0;
- (void)setShowDefaultVolumeLoading:(BOOL)arg0;
- (id)noxusPlayErrorLogKey;
- (id)noxusPlayBlockLogKey;
- (id)noxusFirstFrameLogKey;
- (void)setPreCheckBlockBeforPlay:(id /* block */)arg0;
- (void)setOutBackgroundColor:(id)arg0;
- (void)setNoxusFirstFrameLogKey:(id)arg0;
- (void)setNoxusPlayErrorLogKey:(id)arg0;
- (void)setNoxusPlayBlockLogKey:(id)arg0;
- (BOOL)mute;
- (void).cxx_destruct;
- (void)setMute:(BOOL)arg0;
- (BOOL)useCache;
- (void)setUseCache:(BOOL)arg0;
- (BOOL)repeated;
- (void)setRepeated:(BOOL)arg0;
- (unsigned long long)playerType;

@end
