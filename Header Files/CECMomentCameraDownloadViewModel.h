//
//     Generated by private class-dump
//

@class AFDMomentCameraContext, CECExchangeRandomAlbumViewModel, CECMomentCameraTextViewModel;
@protocol AFDMomentCameraPerformanceTrackService, AFDMomentContextService, CECMomentCameraFlowService, AFDMCEditService, CECMomentCameraSwitchTabService, CECMomentCameraSubModeService;

@interface CECMomentCameraDownloadViewModel : AFDMomentCameraBaseViewModel {
    BOOL _shouldShowDownloadButton;
    BOOL _shouldDisable;
    BOOL _disableShowDownloadButton;
    AFDMomentCameraContext *_cameraContext;
    id<CECMomentCameraFlowService> _flowService;
    id<AFDMomentContextService> _contextService;
    id<AFDMCEditService> _editService;
    id<CECMomentCameraSwitchTabService> _switchTabService;
    id<AFDMomentCameraPerformanceTrackService> _trackService;
    id<CECMomentCameraSubModeService> _subModeService;
}

@property (nonatomic) BOOL shouldShowDownloadButton;
@property (nonatomic) BOOL shouldDisable;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<AFDMomentContextService> contextService;
@property (weak, nonatomic) id<AFDMCEditService> editService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (weak, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (retain, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (readonly, weak, nonatomic) CECMomentCameraTextViewModel *textViewModel;
@property (readonly, weak, nonatomic) CECExchangeRandomAlbumViewModel *randomViewModel;
@property (nonatomic) BOOL disableShowDownloadButton;
@property (retain, nonatomic) AFDMomentCameraContext *cameraContext;

- (void)setupViewModel;
- (id)cameraContext;
- (void)setCameraContext:(id)arg0;
- (id)editService;
- (void)setEditService:(id)arg0;
- (id)flowService;
- (id)trackService;
- (void)setFlowService:(id)arg0;
- (void)setTrackService:(id)arg0;
- (id)addExifAuthorDataForImage:(id)arg0;
- (void)trackEditUserSettingButtonClicked;
- (id)textViewModel;
- (void)didTapDownloadButton;
- (id)switchTabService;
- (void)setSwitchTabService:(id)arg0;
- (id)contextService;
- (id)subModeService;
- (void)setContextService:(id)arg0;
- (void)setSubModeService:(id)arg0;
- (void)p_updateWithState:(long long)arg0;
- (BOOL)shouldShowDownloadButton;
- (BOOL)disableShowDownloadButton;
- (void)setShouldShowDownloadButton:(BOOL)arg0;
- (void)setDisableShowDownloadButton:(BOOL)arg0;
- (id)randomViewModel;
- (void)trackDownloadFromPublish:(BOOL)arg0;
- (void)trackPermissionToastShow:(id)arg0;
- (void)savePictureWithCompletion:(id /* block */)arg0;
- (void)trackPermissionToastClick:(id)arg0 clickPosition:(id)arg1 clickType:(id)arg2;
- (void)savePictureWithEffect:(id)arg0 withCompletion:(id /* block */)arg1;
- (id)p_mixtureImageForMultiCamera;
- (id)p_mixtureMapAndAvatarWithMapImage:(id)arg0 withAvatarView:(id)arg1;
- (void)p_saveToPhotoLibraryWithImageArray:(id)arg0 videoURLArray:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)p_saveImageWithWatermark:(id)arg0;
- (void).cxx_destruct;
- (BOOL)shouldDisable;
- (void)setShouldDisable:(BOOL)arg0;

@end