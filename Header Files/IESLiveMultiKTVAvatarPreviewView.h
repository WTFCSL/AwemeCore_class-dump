//
//     Generated by private class-dump
//

@class IESLiveWebpLoadingView, NSString, UIImage, UIView, UILabel, UIImageView, IESLiveMultiKTVSingModeAPI, UIButton, NSNumber, IESLiveInteractionLocalPreviewCapture;
@protocol IESLiveMultiKTVSingModeSwitch;

@interface IESLiveMultiKTVAvatarPreviewView : UIView <IESLiveInteractionLocalPreviewCaptureDelegate> {
    BOOL _inPreviewMode;
    BOOL _realTimeAvatarEnabled;
    BOOL _avatarModelLoading;
    BOOL _isUploading;
    id /* block */ _triggerRescanAction;
    id /* block */ _avatarSnapshotUpdated;
    id /* block */ _trackCallback;
    NSNumber *_roomID;
    IESLiveInteractionLocalPreviewCapture *_previewCaputre;
    UIImage *_originalImage;
    NSString *_avatarCustomConfig;
    id<IESLiveMultiKTVSingModeSwitch> _singModeSwitch;
    IESLiveMultiKTVSingModeAPI *_singModeAPI;
    IESLiveWebpLoadingView *_loadingView;
    UIImageView *_backgroundImageView;
    UIImageView *_previewImageView;
    UIView *_realTimeContainerView;
    UIView *_realTimeCheckOffView;
    UIImageView *_realTimeCheckOnImageView;
    UILabel *_realTimeSwitchTitleLabel;
    UIButton *_reScanButton;
    UIButton *_confirmButton;
    NSString *_loadedAvatarFilePath;
    id /* block */ _isInVideoModePredicate;
}

@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) BOOL inPreviewMode;
@property (nonatomic) BOOL realTimeAvatarEnabled;
@property (retain, nonatomic) IESLiveInteractionLocalPreviewCapture *previewCaputre;
@property (retain, nonatomic) UIImage *originalImage;
@property (copy, nonatomic) NSString *avatarCustomConfig;
@property (retain, nonatomic) id<IESLiveMultiKTVSingModeSwitch> singModeSwitch;
@property (retain, nonatomic) IESLiveMultiKTVSingModeAPI *singModeAPI;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) UIView *realTimeContainerView;
@property (retain, nonatomic) UIView *realTimeCheckOffView;
@property (retain, nonatomic) UIImageView *realTimeCheckOnImageView;
@property (retain, nonatomic) UILabel *realTimeSwitchTitleLabel;
@property (retain, nonatomic) UIButton *reScanButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (nonatomic) BOOL avatarModelLoading;
@property (copy, nonatomic) NSString *loadedAvatarFilePath;
@property (nonatomic) BOOL isUploading;
@property (copy, nonatomic) id /* block */ isInVideoModePredicate;
@property (copy, nonatomic) id /* block */ triggerRescanAction;
@property (copy, nonatomic) id /* block */ avatarSnapshotUpdated;
@property (copy, nonatomic) id /* block */ trackCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsUploading:(BOOL)arg0;
- (void)p_setupViews;
- (void)setTrackCallback:(id /* block */)arg0;
- (void)p_dismiss;
- (void)p_confirm;
- (id /* block */)trackCallback;
- (id)avatarCustomConfig;
- (void)setAvatarCustomConfig:(id)arg0;
- (BOOL)realTimeAvatarEnabled;
- (void)setRealTimeAvatarEnabled:(BOOL)arg0;
- (void)didRecieveEffectMessage:(unsigned long long)arg0 param1:(unsigned long long)arg1 param2:(unsigned long long)arg2 data:(id)arg3;
- (BOOL)avatarModelLoading;
- (void)setAvatarModelLoading:(BOOL)arg0;
- (id)singModeSwitch;
- (void)setSingModeSwitch:(id)arg0;
- (void)loadCustomAvatarConfig:(id)arg0;
- (id)initWithPreviewCapture:(id)arg0 originalImage:(id)arg1 inPreviewMode:(BOOL)arg2 diContext:(id)arg3 predicate:(id /* block */)arg4;
- (void)setTriggerRescanAction:(id /* block */)arg0;
- (void)setAvatarSnapshotUpdated:(id /* block */)arg0;
- (id /* block */)isInVideoModePredicate;
- (long long)p_currentUserGender;
- (void)p_initializePreview:(id)arg0;
- (id)previewCaputre;
- (void)setRealTimeContainerView:(id)arg0;
- (void)setRealTimeCheckOffView:(id)arg0;
- (id)realTimeCheckOffView;
- (void)setRealTimeCheckOnImageView:(id)arg0;
- (void)p_switchRealTimeOption;
- (id)realTimeContainerView;
- (void)setRealTimeSwitchTitleLabel:(id)arg0;
- (id)realTimeSwitchTitleLabel;
- (id)realTimeCheckOnImageView;
- (void)setReScanButton:(id)arg0;
- (id)reScanButton;
- (void)p_rescan;
- (void)p_updateRealTimeSwitchApperance;
- (void)p_updateUIWithLoadingState:(BOOL)arg0;
- (void)p_applyAvatarResultModel:(id)arg0;
- (void)setLoadedAvatarFilePath:(id)arg0;
- (id /* block */)avatarSnapshotUpdated;
- (id /* block */)triggerRescanAction;
- (void)submit2AuditWithAvatarPixelBuffer:(struct __CVBuffer { } *)arg0;
- (id)p_avatarSnapshotImageWithPixelBuffer:(struct __CVBuffer { } *)arg0;
- (void)p_saveDefaultAvatarFailed;
- (void)p_saveDefaultAvatarSuccess:(id)arg0;
- (void)p_saveCustomAvatarFailed;
- (id)singModeAPI;
- (void)p_saveCustomAvatarSuccess:(id)arg0;
- (void)setPreviewCaputre:(id)arg0;
- (void)setSingModeAPI:(id)arg0;
- (id)loadedAvatarFilePath;
- (void)setIsInVideoModePredicate:(id /* block */)arg0;
- (void)dismiss;
- (void)setOriginalImage:(id)arg0;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (void)dealloc;
- (id)originalImage;
- (id)previewImageView;
- (void)setPreviewImageView:(id)arg0;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (BOOL)isUploading;
- (void)setBackgroundImageView:(id)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (BOOL)inPreviewMode;
- (void)setInPreviewMode:(BOOL)arg0;

@end
