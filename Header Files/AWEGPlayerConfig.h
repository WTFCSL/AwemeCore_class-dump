//
//     Generated by private class-dump
//

@class AWEPageContext, AWEGPlayerInteractionViewConfig;
@protocol AWEGPlayerPageContextProtocol;

@interface AWEGPlayerConfig : NSObject {
    BOOL _useSystemPlayerEngine;
    BOOL _useTTNetUtility;
    BOOL _disableTracker;
    BOOL _useCustomLoadingView;
    BOOL _hideLoadingWhenResume;
    BOOL _disablePreemptAudioFocusIfMute;
    BOOL _enableInteractionView;
    unsigned long long _playerType;
    long long _customScaleMode;
    AWEGPlayerInteractionViewConfig *_interactionViewConfig;
    AWEPageContext<AWEGPlayerPageContextProtocol> *_context;
}

@property (nonatomic) unsigned long long playerType;
@property (nonatomic) BOOL useSystemPlayerEngine;
@property (nonatomic) BOOL useTTNetUtility;
@property (nonatomic) BOOL disableTracker;
@property (nonatomic) BOOL useCustomLoadingView;
@property (nonatomic) long long customScaleMode;
@property (nonatomic) BOOL hideLoadingWhenResume;
@property (nonatomic) BOOL disablePreemptAudioFocusIfMute;
@property (nonatomic) BOOL enableInteractionView;
@property (retain, nonatomic) AWEGPlayerInteractionViewConfig *interactionViewConfig;
@property (retain, nonatomic) AWEPageContext<AWEGPlayerPageContextProtocol> *context;

- (BOOL)useTTNetUtility;
- (void)setPlayerType:(unsigned long long)arg0;
- (void)setCustomScaleMode:(long long)arg0;
- (void)setUseCustomLoadingView:(BOOL)arg0;
- (void)setDisableTracker:(BOOL)arg0;
- (void)setUseTTNetUtility:(BOOL)arg0;
- (BOOL)useSystemPlayerEngine;
- (void)setUseSystemPlayerEngine:(BOOL)arg0;
- (BOOL)disableTracker;
- (BOOL)useCustomLoadingView;
- (long long)customScaleMode;
- (BOOL)hideLoadingWhenResume;
- (void)setHideLoadingWhenResume:(BOOL)arg0;
- (BOOL)disablePreemptAudioFocusIfMute;
- (void)setDisablePreemptAudioFocusIfMute:(BOOL)arg0;
- (BOOL)enableInteractionView;
- (void)setEnableInteractionView:(BOOL)arg0;
- (id)interactionViewConfig;
- (void)setInteractionViewConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (unsigned long long)playerType;

@end
