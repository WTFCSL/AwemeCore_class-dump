//
//     Generated by private class-dump
//

@class HTSLiveEpisode, NSString;
@protocol IESLiveVisibleScopePreferenceServiceAdapter, IESLivePlaybackSettingsAPI;

@interface IESLivePlaybackSettingsFragment : IESLivePlaybackComponent <IESLivePlaybackComponentLifeCycle> {
    BOOL _disableGestures;
    BOOL _isAlertShowing;
    id<IESLivePlaybackSettingsAPI> _settingsApi;
    id<IESLiveVisibleScopePreferenceServiceAdapter> _visibleService;
    long long _orientation;
}

@property (nonatomic) BOOL disableGestures;
@property (nonatomic) BOOL isAlertShowing;
@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (retain, nonatomic) id<IESLivePlaybackSettingsAPI> settingsApi;
@property (retain, nonatomic) id<IESLiveVisibleScopePreferenceServiceAdapter> visibleService;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (BOOL)isAlertShowing;
- (void)setIsAlertShowing:(BOOL)arg0;
- (void)componentOrientationChanged:(long long)arg0;
- (id)visibleService;
- (void)setVisibleService:(id)arg0;
- (void)didUpdatePlaybackEpisode:(id)arg0;
- (BOOL)disableGestures;
- (void)setDisableGestures:(BOOL)arg0;
- (id)settingsApi;
- (void)setSettingsApi:(id)arg0;
- (void)initVisibleAndDeleteToolBarIfNeed;
- (id)createToolBarWithType:(long long)arg0;
- (void)deleteCurrentEpisode;
- (void)exitCurrentRoom;
- (void)openVisibleSettingsPanel;
- (void)tryDeleteCurrentEpisode;
- (void)visibleSettigsWillShow;
- (void)deleteWillShow;
- (void).cxx_destruct;
- (long long)orientation;
- (void)setOrientation:(long long)arg0;
- (BOOL)isOwner;

@end
