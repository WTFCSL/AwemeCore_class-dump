//
//     Generated by private class-dump
//

@class HTSEventContext, IESLiveAudioKTVThemePanelViewModel, NSArray, IESLiveGuideModel, RACDisposable, RACSubject, HTSLiveAudioBGData, RACSignal, IESLiveGuideAudioKTVApi, IESLiveInteractThemeManager, IESLiveKtvAtmosphereVideoInfo, UIColor;

@interface IESLiveGuideAudioKTVBackgroundViewModel : NSObject {
    BOOL _loadingTheme;
    NSArray *_imageStaticBg;
    NSArray *_imageAnimatedBg;
    NSArray *_imageNormalAvatar;
    UIColor *_contentBackgroundColor;
    unsigned long long _previousScene;
    unsigned long long _currentScene;
    IESLiveGuideModel *_guideModel;
    IESLiveKtvAtmosphereVideoInfo *_defaultInfo;
    HTSEventContext *_trackContext;
    IESLiveAudioKTVThemePanelViewModel *_panelViewModel;
    RACDisposable *_themeDisposable;
    RACSubject *_backgroundChangedSubject;
    IESLiveInteractThemeManager *_manager;
    HTSLiveAudioBGData *_currentTheme;
    IESLiveGuideAudioKTVApi *_api;
}

@property (copy, nonatomic) NSArray *imageStaticBg;
@property (copy, nonatomic) NSArray *imageAnimatedBg;
@property (copy, nonatomic) NSArray *imageNormalAvatar;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveAudioKTVThemePanelViewModel *panelViewModel;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) RACDisposable *themeDisposable;
@property (retain, nonatomic) RACSubject *backgroundChangedSubject;
@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (weak, nonatomic) IESLiveInteractThemeManager *manager;
@property (retain, nonatomic) HTSLiveAudioBGData *currentTheme;
@property (nonatomic) BOOL loadingTheme;
@property (retain, nonatomic) IESLiveGuideAudioKTVApi *api;
@property (retain, nonatomic) IESLiveKtvAtmosphereVideoInfo *defaultInfo;
@property (readonly, nonatomic) BOOL themeEnabled;
@property (readonly, nonatomic) RACSignal *backgroundChangedSignal;
@property (nonatomic) unsigned long long previousScene;
@property (nonatomic) unsigned long long currentScene;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)guideModel;
- (void)setGuideModel:(id)arg0;
- (unsigned long long)previousScene;
- (void)setCurrentScene:(unsigned long long)arg0;
- (id)panelViewModel;
- (id)imageAnimatedBg;
- (void)setImageAnimatedBg:(id)arg0;
- (id)imageStaticBg;
- (void)setImageStaticBg:(id)arg0;
- (id)imageNormalAvatar;
- (void)setImageNormalAvatar:(id)arg0;
- (void)setPanelViewModel:(id)arg0;
- (void)setCurrentTheme:(id)arg0;
- (void)setPreviousScene:(unsigned long long)arg0;
- (id)willOpenThemePanel;
- (BOOL)themeEnabled;
- (id)initWithGuideModel:(id)arg0 trackContext:(id)arg1 themeManager:(id)arg2;
- (BOOL)isCustomTheme;
- (id)backgroundChangedSignal;
- (void)didSwitchToAudioTab;
- (void)reloadDefaultInfo;
- (void)reloadPanelViewModelIfNeeded:(unsigned long long)arg0;
- (id)generateThemePanelViewModel;
- (id)backgroundChangedSubject;
- (void)setDefaultInfo:(id)arg0;
- (id)themeDisposable;
- (void)setThemeDisposable:(id)arg0;
- (void)setLoadingTheme:(BOOL)arg0;
- (void)setBackgroundChangedSubject:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)currentScene;
- (void)setManager:(id)arg0;
- (void)dealloc;
- (id)manager;
- (id)currentTheme;
- (id)defaultInfo;
- (void)setContentBackgroundColor:(id)arg0;
- (id)contentBackgroundColor;
- (id)api;
- (BOOL)loadingTheme;
- (void)setApi:(id)arg0;

@end
