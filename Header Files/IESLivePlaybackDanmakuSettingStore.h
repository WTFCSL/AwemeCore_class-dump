//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, HTSEventForwardingView, NSObject, IESLivePlaybackNewStyleDanmakuSettingConfiguration;
@protocol IESLivePlaybackDanmakuEngineSettingsAdapter;

@interface IESLivePlaybackDanmakuSettingStore : NSObject <IESLivePlaybackDanmakuSettingStoreProtocol> {
    BOOL _enablePortraitSetting;
    BOOL _filterSwitchEnabled;
    NSObject<IESLivePlaybackDanmakuEngineSettingsAdapter> *_danmukuEngineSettings;
    HTSEventContext *_trackContext;
    IESLivePlaybackNewStyleDanmakuSettingConfiguration *_playbackNewStyleConfiguration;
    HTSEventForwardingView *_contentView;
}

@property (retain, nonatomic) IESLivePlaybackNewStyleDanmakuSettingConfiguration *playbackNewStyleConfiguration;
@property (retain, nonatomic) HTSEventForwardingView *contentView;
@property (readonly, nonatomic) NSObject<IESLivePlaybackDanmakuEngineSettingsAdapter> *danmukuEngineSettings;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL enablePortraitSetting;
@property (nonatomic) BOOL filterSwitchEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)loadConfig;
- (long long)speedType;
- (long long)fontSizeType;
- (long long)alphaPercentValue;
- (double)channelHeight;
- (id)danmukuEngineSettings;
- (void)setDanmakuContentView:(id)arg0;
- (void)reloadSettingsIfNeeded;
- (void)changeFontSizeType:(long long)arg0;
- (void)changeAplhaPercenValue:(long long)arg0;
- (void)fastEnableDanmaku;
- (void)fastDisableDanmaku;
- (void)loadDanmakuSettingConfig;
- (void)changeFontSizeType:(long long)arg0 saveSetting:(BOOL)arg1;
- (double)channelHeightFromFontSizeType:(long long)arg0;
- (double)normalFontSizeFromType:(long long)arg0;
- (double)giftFontSizeFromType:(long long)arg0;
- (double)giftLinkCharFontSizeFromType:(long long)arg0;
- (double)giftComboNumberFontSizeFromType:(long long)arg0;
- (double)giftImageSizeFromType:(long long)arg0;
- (double)danmakuHeightFromFontSizeType:(long long)arg0;
- (double)avatarImageSizeFromType:(long long)arg0;
- (double)badgeSizeFromType:(long long)arg0;
- (id)initWithDanmukuEngineSettings:(id)arg0 context:(id)arg1;
- (double)channelAreaHeight;
- (void)resetFontSizeTypeWithOrientation:(long long)arg0;
- (void)setEnablePortraitSetting:(BOOL)arg0;
- (void)changeSpeedType:(long long)arg0;
- (void)changeAreaPercentValue:(long long)arg0;
- (long long)areaPercentValue;
- (id)playbackNewStyleConfiguration;
- (void)applyNewStyleDanmakuSettingsWithConfiguration:(id)arg0;
- (BOOL)enablePortraitSetting;
- (void)setPlaybackNewStyleConfiguration:(id)arg0;
- (BOOL)filterSwitchEnabled;
- (void)setFilterSwitchEnabled:(BOOL)arg0;
- (void).cxx_destruct;
- (id)contentView;
- (id)defaultConfig;
- (void)setContentView:(id)arg0;
- (void)resetSettings;

@end
