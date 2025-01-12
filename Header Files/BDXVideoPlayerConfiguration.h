//
//     Generated by private class-dump
//

@class NSString, UIColor;

@interface BDXVideoPlayerConfiguration : NSObject {
    BOOL _enableHardDecode;
    BOOL _enableBytevc1Decode;
    BOOL _enableTTPlayer;
    BOOL _repeated;
    BOOL _outerRotate;
    BOOL _showDefaultVolumeLoading;
    BOOL _mute;
    BOOL _useTTNetUtility;
    BOOL _disableTracker;
    BOOL _useCustomLoadingView;
    long long _videoMode;
    id /* block */ _preCheckBlockBeforPlay;
    NSString *_outCoverName;
    NSString *_outBackgroundColor;
    UIColor *_backUIColor;
    long long _customScaleMode;
}

@property (nonatomic) long long videoMode;
@property (nonatomic) BOOL enableHardDecode;
@property (nonatomic) BOOL enableBytevc1Decode;
@property (nonatomic) BOOL enableTTPlayer;
@property (nonatomic) BOOL repeated;
@property (nonatomic) BOOL outerRotate;
@property (copy, nonatomic) id /* block */ preCheckBlockBeforPlay;
@property (nonatomic) BOOL showDefaultVolumeLoading;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL useTTNetUtility;
@property (nonatomic) BOOL disableTracker;
@property (copy, nonatomic) NSString *outCoverName;
@property (copy, nonatomic) NSString *outBackgroundColor;
@property (retain, nonatomic) UIColor *backUIColor;
@property (nonatomic) BOOL useCustomLoadingView;
@property (nonatomic) long long customScaleMode;

- (BOOL)enableBytevc1Decode;
- (void)setEnableBytevc1Decode:(BOOL)arg0;
- (BOOL)useTTNetUtility;
- (BOOL)enableHardDecode;
- (void)setEnableHardDecode:(BOOL)arg0;
- (void)setVideoMode:(long long)arg0;
- (long long)videoMode;
- (void)setCustomScaleMode:(long long)arg0;
- (void)setUseCustomLoadingView:(BOOL)arg0;
- (void)setBackUIColor:(id)arg0;
- (void)setEnableTTPlayer:(BOOL)arg0;
- (void)setDisableTracker:(BOOL)arg0;
- (void)setUseTTNetUtility:(BOOL)arg0;
- (BOOL)disableTracker;
- (BOOL)useCustomLoadingView;
- (long long)customScaleMode;
- (id)backUIColor;
- (BOOL)showDefaultVolumeLoading;
- (BOOL)outerRotate;
- (id /* block */)preCheckBlockBeforPlay;
- (BOOL)enableTTPlayer;
- (id)outBackgroundColor;
- (id)outCoverName;
- (void)setShowDefaultVolumeLoading:(BOOL)arg0;
- (void)setOuterRotate:(BOOL)arg0;
- (void)setPreCheckBlockBeforPlay:(id /* block */)arg0;
- (void)setOutCoverName:(id)arg0;
- (void)setOutBackgroundColor:(id)arg0;
- (BOOL)mute;
- (void).cxx_destruct;
- (void)setMute:(BOOL)arg0;
- (BOOL)repeated;
- (void)setRepeated:(BOOL)arg0;

@end
