//
//     Generated by private class-dump
//

@class BDNovelReaderBrightnessView, BDNovelReaderBaseCatalogContainer, NSString, BDNovelReaderFontView, BDNovelReadingProgressTipView, BDNovelBottomToolView, BDNovelReadingProgressView, BDNovelReaderEyeCareView, BDNovelReadingSettingView;

@interface BDNovelReaderToolViewPlugin : BDNovelReaderBasePlugin <BDNovelReadingProgressViewDelegate, BDNovelSettingViewDelegate, BDNovelReadingCatalogViewDelegate> {
    BOOL _isToolShow;
    BOOL _isProgressShow;
    BOOL _isSettingShow;
    BOOL _isCatalogShow;
    BDNovelReadingProgressView *_progressView;
    BDNovelBottomToolView *_toolView;
    BDNovelReadingSettingView *_settingView;
    BDNovelReadingProgressTipView *_progressTipView;
    BDNovelReaderBaseCatalogContainer *_catalogContainer;
    BDNovelReaderBrightnessView *_brightnessView;
    BDNovelReaderEyeCareView *_eyeCareView;
    BDNovelReaderFontView *_fontView;
}

@property (retain, nonatomic) BDNovelReadingProgressView *progressView;
@property (retain, nonatomic) BDNovelBottomToolView *toolView;
@property (retain, nonatomic) BDNovelReadingSettingView *settingView;
@property (retain, nonatomic) BDNovelReadingProgressTipView *progressTipView;
@property (retain, nonatomic) BDNovelReaderBaseCatalogContainer *catalogContainer;
@property (retain, nonatomic) BDNovelReaderBrightnessView *brightnessView;
@property (retain, nonatomic) BDNovelReaderEyeCareView *eyeCareView;
@property (retain, nonatomic) BDNovelReaderFontView *fontView;
@property (nonatomic) BOOL isToolShow;
@property (nonatomic) BOOL isProgressShow;
@property (nonatomic) BOOL isSettingShow;
@property (nonatomic) BOOL isCatalogShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)managerDidFirstStart;

- (id)pluginRequestReaderUI:(id)arg0;
- (void)setIsToolShow:(BOOL)arg0;
- (void)setSettingView:(id)arg0;
- (id)settingView;
- (BOOL)isCatalogShow;
- (BOOL)isSettingShow;
- (void)setIsCatalogShow:(BOOL)arg0;
- (void)setIsSettingShow:(BOOL)arg0;
- (void)setProgressTipView:(id)arg0;
- (id)progressTipView;
- (BOOL)isToolShow;
- (void)pluginReaderBookInfoDidReady;
- (void)pluginReaderToolViewStateChange:(BOOL)arg0;
- (void)pluginReaderCategoryUpdate;
- (void)pluginReaderChapterDataDidReady;
- (void)pluginReaderConfigChange:(id)arg0;
- (void)onChapterClick:(id)arg0 clickIndex:(unsigned long long)arg1;
- (void)p_updateShowState;
- (void)onBookDescClick:(id)arg0;
- (void)onChapterClick:(id)arg0 clickIndex:(unsigned long long)arg1 progress:(double)arg2;
- (void)p_updateCatalogView;
- (void)setCatalogContainer:(id)arg0;
- (id)catalogContainer;
- (id)getToolView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBrightnessView:(id)arg0;
- (id)brightnessView;
- (void)setEyeCareView:(id)arg0;
- (id)eyeCareView;
- (id)fontView;
- (void)setIsProgressShow:(BOOL)arg0;
- (BOOL)isProgressShow;
- (void)p_switchDarkMode:(BOOL)arg0;
- (void)p_switchBackgroundType:(unsigned long long)arg0 fromDarkMode:(BOOL)arg1;
- (id)getToolViewV2:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)getToolViewV1:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)p_showCatalog:(BOOL)arg0;
- (void)p_showSetting:(BOOL)arg0;
- (void)p_showProgress:(BOOL)arg0;
- (void)p_switchDarkMode;
- (void)p_switchDarkModeFromSetting;
- (void)setFontView:(id)arg0;
- (void)onSelectSettingView:(id)arg0 fontSize:(double)arg1;
- (void)onSelectSettingView:(id)arg0 screenBrightness:(double)arg1 oldScreenBrightness:(double)arg2 isTracking:(BOOL)arg3;
- (void)onSelectSettingView:(id)arg0 eyeCare:(BOOL)arg1;
- (void)onSelectSettingViewMoreFont:(id)arg0 showRedPoint:(BOOL)arg1 showFontTip:(BOOL)arg2;
- (void)switchDarkMode;
- (void)progressJumpWithView:(id)arg0 curIndex:(unsigned long long)arg1 jumpType:(unsigned long long)arg2;
- (void)onSelectSettingView:(id)arg0 backgroundType:(unsigned long long)arg1;
- (void)onSelectSettingView:(id)arg0 pageMode:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (id)toolView;
- (void)setToolView:(id)arg0;

@end
