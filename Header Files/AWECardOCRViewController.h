//
//     Generated by private class-dump
//

@class AWECardOCRGuideInfoView, DUXLoadingToast, UIImageView, NSString, UIView, UILabel, UIButton;
@protocol AWEHttpTask;

@interface AWECardOCRViewController : AWEOCRBaseViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate> {
    UIView *_topContainerView;
    UIButton *_questionBtn;
    UIButton *_closeBtn;
    UIView *_bottomContainerView;
    UIView *_flashLightView;
    UIImageView *_flashLightImageView;
    UILabel *_flashLightLabel;
    UIImageView *_cameraView;
    UIView *_albumView;
    UIImageView *_albumIcon;
    UILabel *_albumLabel;
    AWECardOCRGuideInfoView *_guideInfoView;
    UILabel *_tipsLabel;
    UIButton *_cameraAuthorityBtn;
    DUXLoadingToast *_loadingToast;
    double _lastScanTime;
    id<AWEHttpTask> _task;
}

@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) UIButton *questionBtn;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) UIView *flashLightView;
@property (retain, nonatomic) UIImageView *flashLightImageView;
@property (retain, nonatomic) UILabel *flashLightLabel;
@property (retain, nonatomic) UIImageView *cameraView;
@property (retain, nonatomic) UIView *albumView;
@property (retain, nonatomic) UIImageView *albumIcon;
@property (retain, nonatomic) UILabel *albumLabel;
@property (retain, nonatomic) AWECardOCRGuideInfoView *guideInfoView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *cameraAuthorityBtn;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (nonatomic) double lastScanTime;
@property (retain, nonatomic) id<AWEHttpTask> task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)topContainerView;
- (void)setTopContainerView:(id)arg0;
- (id)tipsLabel;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (void)setTipsLabel:(id)arg0;
- (void)setAlbumView:(id)arg0;
- (id)loadingToast;
- (void)setLoadingToast:(id)arg0;
- (id)albumIcon;
- (void)setAlbumIcon:(id)arg0;
- (id)cameraAuthorityBtn;
- (id)albumLabel;
- (void)setAlbumLabel:(id)arg0;
- (void)updateAlbumImageIfNeeds;
- (id)guideInfoView;
- (void)p_turnFlashLight:(BOOL)arg0;
- (id)questionBtn;
- (id)flashLightView;
- (id)flashLightImageView;
- (id)flashLightLabel;
- (void)p_showImagePicker;
- (void)p_scanWithSelectPhotoImgData:(id)arg0;
- (id)cutContentImage:(id)arg0;
- (void)p_startRequestWithImage:(id)arg0 mode:(unsigned long long)arg1;
- (id)p_buildCardOCRRequestParam:(id)arg0;
- (void)p_alertPhotoOCRFail:(id)arg0;
- (void)startScanWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)alertTimeOut;
- (void)didClickedQuestionBtn;
- (void)didClickedCloseBtn;
- (void)didClickedCameraAuthorityBtn;
- (void)switchFlashLight;
- (void)didClickedCameraView;
- (void)p_selectPhotoToOCR;
- (void)setQuestionBtn:(id)arg0;
- (void)setFlashLightView:(id)arg0;
- (void)setFlashLightImageView:(id)arg0;
- (void)setFlashLightLabel:(id)arg0;
- (void)setGuideInfoView:(id)arg0;
- (void)setCameraAuthorityBtn:(id)arg0;
- (void)presentationControllerDidDismiss:(id)arg0;
- (void)stopScan;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setTask:(id)arg0;
- (id)task;
- (void)viewDidLoad;
- (void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg1 fromConnection:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg0;
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (void)setupUI;
- (void)picker:(id)arg0 didFinishPicking:(id)arg1;
- (id)cameraView;
- (void)setCameraView:(id)arg0;
- (id)bottomContainerView;
- (void)setBottomContainerView:(id)arg0;
- (double)lastScanTime;
- (void)setLastScanTime:(double)arg0;
- (id)albumView;

@end