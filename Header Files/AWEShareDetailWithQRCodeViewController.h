//
//     Generated by private class-dump
//

@class AWESharePanelView, AWEShareContext, NSString, AWEShareDetailWithQRCodeBaseContentView, NSArray, AWEUILoadingView, MASConstraint, NSNumber, UIColor;

@interface AWEShareDetailWithQRCodeViewController : UIViewController <AWESharePanelViewDelegate> {
    BOOL _isFromQRCode;
    BOOL _darkSharePanel;
    BOOL _canShowInnerPush;
    BOOL _preparingShare;
    NSString *_activityName;
    UIColor *_customBackgroundColor;
    id /* block */ _customDismissalHandler;
    id /* block */ _completionHandler;
    AWEShareContext *_context;
    long long _sharePlatformType;
    AWEShareDetailWithQRCodeBaseContentView *_contentView;
    AWEUILoadingView *_loadingView;
    AWESharePanelView *_sharePanelView;
    NSString *_enterFrom;
    long long _settingShareMode;
    NSNumber *_qrcodeType;
    MASConstraint *_topContainerViewCenterY;
    MASConstraint *_topContainerViewTopAlignToViewBottom;
    MASConstraint *_topContainerViewSharePanelSpace;
    MASConstraint *_sharePanelTopAlignToViewBottom;
    MASConstraint *_sharePanelBottomAlignToViewBottom;
    double _saveImageBeginTime;
}

@property (retain, nonatomic) AWEShareContext *context;
@property (nonatomic) long long sharePlatformType;
@property (retain, nonatomic) AWEShareDetailWithQRCodeBaseContentView *contentView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWESharePanelView *sharePanelView;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long settingShareMode;
@property (retain, nonatomic) NSNumber *qrcodeType;
@property (nonatomic) BOOL preparingShare;
@property (retain, nonatomic) MASConstraint *topContainerViewCenterY;
@property (retain, nonatomic) MASConstraint *topContainerViewTopAlignToViewBottom;
@property (retain, nonatomic) MASConstraint *topContainerViewSharePanelSpace;
@property (retain, nonatomic) MASConstraint *sharePanelTopAlignToViewBottom;
@property (retain, nonatomic) MASConstraint *sharePanelBottomAlignToViewBottom;
@property (nonatomic) double saveImageBeginTime;
@property (nonatomic) BOOL isFromQRCode;
@property (nonatomic) BOOL darkSharePanel;
@property (retain, nonatomic) NSString *activityName;
@property (readonly, copy, nonatomic) NSArray *sharePlatforms;
@property (retain, nonatomic) UIColor *customBackgroundColor;
@property (nonatomic) BOOL canShowInnerPush;
@property (copy, nonatomic) id /* block */ customDismissalHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__expireTimeDescriptionWithTimeStamp:(long long)arg0;
+ (id)dateFormatterForExpireTime;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (BOOL)canShowInnerPush;
- (void)setCanShowInnerPush:(BOOL)arg0;
- (void)showSharePanel;
- (BOOL)isFromQRCode;
- (void)prepareToShare;
- (void)trackShare;
- (void)imageSavedToPhotosAlbum:(id)arg0 didFinishSavingWithError:(id)arg1 contextInfo:(void *)arg2;
- (id)initWithShareContext:(id)arg0 platformType:(long long)arg1 settingShareMode:(long long)arg2;
- (void)setIsFromQRCode:(BOOL)arg0;
- (void)setDarkSharePanel:(BOOL)arg0;
- (void)doAppearAnimation;
- (void)configSharePanelMask;
- (void)setTopContainerViewTopAlignToViewBottom:(id)arg0;
- (void)setTopContainerViewCenterY:(id)arg0;
- (id)topContainerViewCenterY;
- (id)allSharePlatforms;
- (BOOL)isSharePlatformAvailable:(long long)arg0;
- (BOOL)darkSharePanel;
- (void)setSharePanelView:(id)arg0;
- (id)sharePanelView;
- (void)setSharePanelTopAlignToViewBottom:(id)arg0;
- (void)setSharePanelBottomAlignToViewBottom:(id)arg0;
- (void)setTopContainerViewSharePanelSpace:(id)arg0;
- (id)topContainerViewSharePanelSpace;
- (id)sharePanelBottomAlignToViewBottom;
- (id)topContainerViewTopAlignToViewBottom;
- (id)sharePanelTopAlignToViewBottom;
- (id)p_maskLayerForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)preparingShare;
- (void)setPreparingShare:(BOOL)arg0;
- (long long)sharePlatformType;
- (id)saveSuccessfullyMessageForShareType:(long long)arg0;
- (void)openAppWithShareType:(long long)arg0;
- (id)getPlatformString:(long long)arg0;
- (void)setSharePlatformType:(long long)arg0;
- (id)sharePlatformUnavailableMessage:(long long)arg0;
- (void)onImageSaveSuccessfully;
- (void)shareItemTapped:(long long)arg0;
- (id)sharePlatforms;
- (long long)settingShareMode;
- (void)setSettingShareMode:(long long)arg0;
- (void)onTouchDismiss;
- (void)configureData;
- (BOOL)shouldUseClearBackgroundColor;
- (BOOL)isProfileQRCodeUseRebrandStyle;
- (BOOL)shouldDisableContainerViewClip;
- (double)sharePanelTopSpace;
- (void)actionCalled:(id)arg0;
- (void)fetchQRCodeImage;
- (BOOL)shouldHiddenLoadingView;
- (BOOL)shouldRequestSpecialQRCode;
- (void)qrCodeImageCompletionWithQRCodeImage:(id)arg0 avatarImage:(id)arg1 error:(id)arg2 expireTime:(long long)arg3;
- (void)sendIronManWithType:(long long)arg0;
- (void)sendShareMessageWithType:(long long)arg0;
- (void)shareToIM;
- (BOOL)precheckSharingWithType:(long long)arg0;
- (BOOL)isImagesLoaded;
- (void)setSaveImageBeginTime:(double)arg0;
- (void)monitorQRCodeSaveResult:(id)arg0 albumGrant:(BOOL)arg1;
- (id)trackPlatformStringForShareType:(long long)arg0;
- (id /* block */)customDismissalHandler;
- (id)generalTrackParams;
- (void)trackQRCodeSave;
- (id)shareEventName;
- (id)itemIDParamNameWithQRCodeType:(unsigned long long)arg0;
- (double)saveImageBeginTime;
- (void)qrCodeImageCompletionWithUrlList:(id)arg0 avatarUrlList:(id)arg1 error:(id)arg2 placeholder:(id)arg3 expireTime:(long long)arg4;
- (void)setCustomDismissalHandler:(id /* block */)arg0;
- (id)qrcodeType;
- (void)setQrcodeType:(id)arg0;
- (void)dismiss;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setCompletionHandler:(id /* block */)arg0;
- (id)customBackgroundColor;
- (id)contentView;
- (void)setCustomBackgroundColor:(id)arg0;
- (id)context;
- (id /* block */)completionHandler;
- (void)viewDidLoad;
- (void)dismissWithCompletion:(id /* block */)arg0;
- (void)setContentView:(id)arg0;
- (void)closeButtonTapped:(id)arg0;
- (void)setUpSubviews;
- (void)cancelButtonTapped;
- (id)activityName;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)showOnViewController:(id)arg0;
- (void)setActivityName:(id)arg0;

@end
