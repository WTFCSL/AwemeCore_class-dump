//
//     Generated by private class-dump
//

@class HTSLiveRoomAuthStatus, NSArray, IESLivePlaybackDoubleSpeedPortraitButton, IESLivePlaybackDoubleSpeedLandscapeButton, NSString;

@interface IESLivePlaybackDoubleSpeedFragment : IESLivePlaybackComponent <IESLiveAirPlayAction, IESVSVideoPlayAction, IESLivePlaybackCustomAutoHideAnimService> {
    BOOL _btnShowDidTracked;
    int _durationLast;
    HTSLiveRoomAuthStatus *_roomAuth;
    IESLivePlaybackDoubleSpeedPortraitButton *_portraitBtn;
    IESLivePlaybackDoubleSpeedLandscapeButton *_landscapeBtn;
    IESLivePlaybackDoubleSpeedLandscapeButton *_localLandscapeBtn;
    NSArray *_dataList;
    unsigned long long _state;
}

@property (retain, nonatomic) HTSLiveRoomAuthStatus *roomAuth;
@property (retain, nonatomic) IESLivePlaybackDoubleSpeedPortraitButton *portraitBtn;
@property (retain, nonatomic) IESLivePlaybackDoubleSpeedLandscapeButton *landscapeBtn;
@property (retain, nonatomic) IESLivePlaybackDoubleSpeedLandscapeButton *localLandscapeBtn;
@property (retain, nonatomic) NSArray *dataList;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL btnShowDidTracked;
@property (nonatomic) int durationLast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)roomAuth;
- (void)setDataList:(id)arg0;
- (void)componentDidMount;
- (void)componentBindService;
- (void)componentOrientationChanged:(long long)arg0;
- (void)setRoomAuth:(id)arg0;
- (void)landscapeViewsTransformToHidden:(BOOL)arg0;
- (void)portraitViewsTransformToHidden:(BOOL)arg0;
- (void)airplayStateDidChange:(BOOL)arg0;
- (void)didUpdatePlaybackEpisode:(id)arg0;
- (BOOL)usePadNewStyle;
- (void)onVideoFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setDurationLast:(int)arg0;
- (int)durationLast;
- (void)vsPlayBackTrackEvent:(id)arg0 extraParams:(id)arg1;
- (void)updateWithConnectedAirplay:(BOOL)arg0;
- (id)portraitBtn;
- (id)landscapeBtn;
- (void)p_trackName:(id)arg0;
- (void)setPortraitBtn:(id)arg0;
- (void)showLandscapeSelect;
- (void)showPortraitSelect;
- (void)setLandscapeBtn:(id)arg0;
- (void)setLocalLandscapeBtn:(id)arg0;
- (id)localLandscapeBtn;
- (BOOL)btnShowDidTracked;
- (void)setBtnShowDidTracked:(BOOL)arg0;
- (id)getSpeedsList:(BOOL)arg0;
- (void)stateChangeTrack:(long long)arg0;
- (void)updateSpeedState:(id)arg0;
- (void)stateDidChange:(long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg0;
- (void)setupUI;
- (id)dataList;

@end
