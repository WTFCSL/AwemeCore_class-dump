//
//     Generated by private class-dump
//

@class NSString, IESLiveResourceUploadApi, UIImage, IESLiveGameOpenPlatformReportReason, IESLiveAnchorAudienceInteractiveGameModel;
@protocol IESLivePhotoLibraryService, IESLiveGameOpenPlatformFoundationAPIServiceInterface;

@interface IESLiveGameOpenPlatformReportDescViewModel : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    BOOL _rechoose;
    BOOL _submitSuccess;
    IESLiveAnchorAudienceInteractiveGameModel *_gameModel;
    UIImage *_uploadImage;
    IESLiveGameOpenPlatformReportReason *_reportReason;
    id<IESLiveGameOpenPlatformFoundationAPIServiceInterface> _api;
    id<IESLivePhotoLibraryService> _photoService;
    IESLiveResourceUploadApi *_uploadApi;
    NSString *_uploadUri;
    NSString *_reportId;
    NSString *_reportDescription;
}

@property (retain, nonatomic) id<IESLiveGameOpenPlatformFoundationAPIServiceInterface> api;
@property (retain, nonatomic) id<IESLivePhotoLibraryService> photoService;
@property (retain, nonatomic) IESLiveResourceUploadApi *uploadApi;
@property (copy, nonatomic) NSString *uploadUri;
@property (copy, nonatomic) NSString *reportId;
@property (retain, nonatomic) UIImage *uploadImage;
@property (copy, nonatomic) NSString *reportDescription;
@property (retain, nonatomic) IESLiveGameOpenPlatformReportReason *reportReason;
@property (nonatomic) BOOL rechoose;
@property (nonatomic) BOOL submitSuccess;
@property (retain, nonatomic) IESLiveAnchorAudienceInteractiveGameModel *gameModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)uploadImage;
- (id)uploadUri;
- (void)setUploadUri:(id)arg0;
- (id)photoService;
- (void)setPhotoService:(id)arg0;
- (id)initWithApi:(id)arg0;
- (void)setUploadImage:(id)arg0;
- (void)handleDescriptionOverLength;
- (void)updateReportDescription:(id)arg0;
- (void)handleRechooseAction;
- (void)handleUploadImageActionWithPrivacyCert:(id)arg0 withPrivacyCert:(id)arg1;
- (void)handleDiscardImageAction;
- (void)setRechoose:(BOOL)arg0;
- (void)p_performUploadUserPickedImage:(id)arg0 completion:(id /* block */)arg1;
- (void)setSubmitSuccess:(BOOL)arg0;
- (id)uploadApi;
- (void)updateReportReason:(id)arg0;
- (void)updateReportImage:(id)arg0;
- (void)handleReportSubmitAction;
- (BOOL)rechoose;
- (BOOL)submitSuccess;
- (void)setUploadApi:(id)arg0;
- (void).cxx_destruct;
- (id)reportReason;
- (void)setReportReason:(id)arg0;
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (id)reportId;
- (void)setReportId:(id)arg0;
- (id)api;
- (void)setApi:(id)arg0;
- (id)reportDescription;
- (void)setReportDescription:(id)arg0;
- (id)gameModel;
- (void)setGameModel:(id)arg0;

@end
