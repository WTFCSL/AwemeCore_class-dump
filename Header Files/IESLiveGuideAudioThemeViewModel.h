//
//     Generated by private class-dump
//

@class HTSEventContext, RACDisposable, NSArray, IESLiveGuideModel, IESLiveAudioBackgroundViewModel, HTSLiveAudioBGData, UIImage, IESLiveInteractThemeManager, IESLiveAudioThemePanelViewModel;

@interface IESLiveGuideAudioThemeViewModel : NSObject {
    BOOL _loadingTheme;
    NSArray *_imageNormalAvatar;
    UIImage *_ugcImage;
    unsigned long long _previousScene;
    unsigned long long _currentScene;
    IESLiveGuideModel *_guideModel;
    IESLiveAudioBackgroundViewModel *_backgroundViewModel;
    IESLiveInteractThemeManager *_manager;
    HTSEventContext *_trackContext;
    IESLiveAudioThemePanelViewModel *_panelViewModel;
    RACDisposable *_themeDisposable;
    HTSLiveAudioBGData *_currentTheme;
}

@property (copy, nonatomic) NSArray *imageNormalAvatar;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveAudioThemePanelViewModel *panelViewModel;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) RACDisposable *themeDisposable;
@property (retain, nonatomic) HTSLiveAudioBGData *currentTheme;
@property (nonatomic) BOOL loadingTheme;
@property (retain, nonatomic) IESLiveAudioBackgroundViewModel *backgroundViewModel;
@property (readonly, nonatomic) BOOL themeEnabled;
@property (readonly, nonatomic) UIImage *ugcImage;
@property (nonatomic) unsigned long long previousScene;
@property (nonatomic) unsigned long long currentScene;
@property (weak, nonatomic) IESLiveInteractThemeManager *manager;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)guideModel;
- (void)setGuideModel:(id)arg0;
- (void)didSetAttachingDIContext;
- (unsigned long long)previousScene;
- (void)componentDidMount;
- (id)backgroundViewModel;
- (void)setCurrentScene:(unsigned long long)arg0;
- (id)panelViewModel;
- (id)imageNormalAvatar;
- (void)setImageNormalAvatar:(id)arg0;
- (void)setPanelViewModel:(id)arg0;
- (void)setCurrentTheme:(id)arg0;
- (void)setPreviousScene:(unsigned long long)arg0;
- (void)setBackgroundViewModel:(id)arg0;
- (id)initWithGuideModel:(id)arg0 trackContext:(id)arg1;
- (id)willOpenThemePanel;
- (BOOL)themeEnabled;
- (id)ugcImage;
- (id)themeDisposable;
- (void)setThemeDisposable:(id)arg0;
- (void)setLoadingTheme:(BOOL)arg0;
- (void)reloadPanelViewModelIfNeeded:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)fetchBgListIfNeeded:(unsigned long long)arg0;
- (void)fetchBgListIfNeeded:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)updateCurrentTheme:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)currentScene;
- (void)setManager:(id)arg0;
- (id)manager;
- (id)currentTheme;
- (void)reload:(id /* block */)arg0;
- (BOOL)loadingTheme;

@end
