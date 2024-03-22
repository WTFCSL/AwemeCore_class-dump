//
//     Generated by private class-dump
//

@class IESLiveKtvSongStruct, HTSEventContext, NSDictionary, NSString, IESLiveComponentContext, IESLiveInteractFeedbackViewModel;
@protocol IESLiveRoomService, IESLiveKTVMusicManagerProtocol;

@interface IESLiveSongPanelSoloKTVStore : NSObject {
    BOOL _isSecondCut;
    BOOL _isOrderPanlShow;
    BOOL _isSecondShow;
    BOOL _isSearching;
    BOOL _isPlaying;
    BOOL _enableKTVToneChange;
    NSString *_enterFrom;
    NSString *_orderSongId;
    NSString *_inplaceCollectionId;
    id<IESLiveKTVMusicManagerProtocol> _ktvMusicManager;
    NSString *_designatedTabName;
    id /* block */ _onClickWaitingPromptsCompletion;
    IESLiveInteractFeedbackViewModel *_feedbackViewModel;
    IESLiveInteractFeedbackViewModel *_musicFeedbackViewModel;
    NSString *_fastStartTabName;
    long long _fastStartFirstLevelIndex;
    NSString *_thirdPartyScene;
    NSString *_topSongId;
    id<IESLiveRoomService> _room;
    HTSEventContext *_trackContext;
    IESLiveComponentContext *_componentContext;
    NSDictionary *_settingConfig;
    IESLiveKtvSongStruct *_currentPlayKTVMusic;
    double _currentPlayTime;
    long long _requestMode;
    NSString *_source;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLiveKTVMusicManagerProtocol> ktvMusicManager;
@property (retain, nonatomic) NSDictionary *settingConfig;
@property (retain, nonatomic) IESLiveKtvSongStruct *currentPlayKTVMusic;
@property (nonatomic) double currentPlayTime;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL enableKTVToneChange;
@property (nonatomic) long long requestMode;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL isSecondCut;
@property (nonatomic) BOOL isOrderPanlShow;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isSecondShow;
@property (copy, nonatomic) NSString *orderSongId;
@property (copy, nonatomic) NSString *inplaceCollectionId;
@property (nonatomic) BOOL isSearching;
@property (copy, nonatomic) NSString *designatedTabName;
@property (copy, nonatomic) id /* block */ onClickWaitingPromptsCompletion;
@property (retain, nonatomic) IESLiveInteractFeedbackViewModel *feedbackViewModel;
@property (retain, nonatomic) IESLiveInteractFeedbackViewModel *musicFeedbackViewModel;
@property (copy, nonatomic) NSString *fastStartTabName;
@property (nonatomic) long long fastStartFirstLevelIndex;
@property (copy, nonatomic) NSString *thirdPartyScene;
@property (copy, nonatomic) NSString *topSongId;

- (void)setEnterFrom:(id)arg0;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)enterFrom;
- (double)currentPlayTime;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)setCurrentPlayTime:(double)arg0;
- (void)setSettingConfig:(id)arg0;
- (id)settingConfig;
- (id)feedbackViewModel;
- (void)setFeedbackViewModel:(id)arg0;
- (void)setRequestMode:(long long)arg0;
- (void)setTopSongId:(id)arg0;
- (id)topSongId;
- (id)currentPlayKTVMusic;
- (id)ktvMusicManager;
- (void)setIsSecondCut:(BOOL)arg0;
- (id)interactiveConnectionTrackParam;
- (BOOL)isOrderPanlShow;
- (id)fastStartTabName;
- (void)setFastStartTabName:(id)arg0;
- (long long)fastStartFirstLevelIndex;
- (void)setFastStartFirstLevelIndex:(long long)arg0;
- (void)setIsOrderPanlShow:(BOOL)arg0;
- (void)setKtvMusicManager:(id)arg0;
- (BOOL)enableKTVToneChange;
- (void)prefetchMusicFeedbackListModelIfNeeded;
- (void)setCurrentPlayKTVMusic:(id)arg0;
- (void)setDesignatedTabName:(id)arg0;
- (id)musicFeedbackViewModel;
- (void)setMusicFeedbackViewModel:(id)arg0;
- (BOOL)isSecondCut;
- (void)setEnableKTVToneChange:(BOOL)arg0;
- (BOOL)isSecondShow;
- (void)setIsSecondShow:(BOOL)arg0;
- (id)designatedTabName;
- (id /* block */)onClickWaitingPromptsCompletion;
- (void)setOnClickWaitingPromptsCompletion:(id /* block */)arg0;
- (id)orderSongId;
- (void)setOrderSongId:(id)arg0;
- (void)setThirdPartyScene:(id)arg0;
- (void)setInplaceCollectionId:(id)arg0;
- (id)inplaceCollectionId;
- (id)thirdPartyScene;
- (long long)requestMode;
- (BOOL)isSearching;
- (id)source;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (void)setSource:(id)arg0;
- (void)setIsPlaying:(BOOL)arg0;
- (void)setIsSearching:(BOOL)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)initWithRoom:(id)arg0;

@end
