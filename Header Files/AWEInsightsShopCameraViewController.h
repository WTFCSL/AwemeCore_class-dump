//
//     Generated by private class-dump
//

@class UIImageView, UILabel, AVCaptureVideoPreviewLayer, AVCaptureStillImageOutput, NSObject, AVCaptureDevice, AWEInsightsShopPhotoUploadViewController, UIButton, UIView, AVCaptureDeviceInput, NSString, AWEInsightsShopCameraCornerView, AVCaptureSession, YYLabel, UIImage;
@protocol OS_dispatch_queue;

@interface AWEInsightsShopCameraViewController : UIViewController <AWEMotionItemConfigProtocol> {
    BOOL _showMaskStyleImageView;
    BOOL _disableGallery;
    BOOL _isShooting;
    BOOL _isSessionRunningBeforeApplicationResignActive;
    BOOL _isSafeApi;
    AWEInsightsShopCameraCornerView *_fourCornersView;
    UIImageView *_centerBackgroundImageView;
    UIView *_topView;
    UIView *_topMaskView;
    UIView *_bottomMaskView;
    UIView *_bottomView;
    UIImageView *_tipsImageView;
    UILabel *_tipsLabel;
    YYLabel *_linkLabel;
    UIButton *_actionBtn;
    AVCaptureDevice *_device;
    AVCaptureDeviceInput *_input;
    AVCaptureStillImageOutput *_imageOutput;
    AVCaptureSession *_session;
    AVCaptureVideoPreviewLayer *_previewLayer;
    UIImage *_image;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _currentOrientation;
    NSString *_linkURL;
    NSString *_linkText;
    NSString *_tapText;
    NSString *_previousPage;
    NSString *_cameraPage;
    NSString *_uploadPage;
    NSString *_titleString;
    NSString *_horizontalCameraTips;
    NSString *_verticalCameraTips;
    unsigned long long _maskStyle;
    AWEInsightsShopPhotoUploadViewController *_uploadVC;
    id /* block */ _completion;
}

@property (retain, nonatomic) AWEInsightsShopCameraCornerView *fourCornersView;
@property (retain, nonatomic) UIImageView *centerBackgroundImageView;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *topMaskView;
@property (retain, nonatomic) UIView *bottomMaskView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIImageView *tipsImageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) YYLabel *linkLabel;
@property (retain, nonatomic) UIButton *actionBtn;
@property (retain, nonatomic) AVCaptureDevice *device;
@property (retain, nonatomic) AVCaptureDeviceInput *input;
@property (retain, nonatomic) AVCaptureStillImageOutput *imageOutput;
@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long currentOrientation;
@property (retain, nonatomic) NSString *linkURL;
@property (retain, nonatomic) NSString *linkText;
@property (retain, nonatomic) NSString *tapText;
@property (retain, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSString *cameraPage;
@property (retain, nonatomic) NSString *uploadPage;
@property (retain, nonatomic) NSString *titleString;
@property (retain, nonatomic) NSString *horizontalCameraTips;
@property (retain, nonatomic) NSString *verticalCameraTips;
@property (nonatomic) BOOL showMaskStyleImageView;
@property (nonatomic) BOOL disableGallery;
@property (nonatomic) BOOL isShooting;
@property (nonatomic) BOOL isSessionRunningBeforeApplicationResignActive;
@property (nonatomic) BOOL isSafeApi;
@property (nonatomic) unsigned long long maskStyle;
@property (retain, nonatomic) AWEInsightsShopPhotoUploadViewController *uploadVC;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backBtnClicked;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (void)setLinkLabel:(id)arg0;
- (id)motionItemConfig;
- (BOOL)enableShake;
- (double)shakeTimeInterval;
- (long long)motionLevel;
- (void)p_setupUI;
- (id)topMaskView;
- (id)bottomMaskView;
- (void)setTopMaskView:(id)arg0;
- (void)setBottomMaskView:(id)arg0;
- (void)didReceiveShakeEvent:(id)arg0 error:(id)arg1 from:(id)arg2;
- (id)tapText;
- (id)actionBtn;
- (void)setActionBtn:(id)arg0;
- (void)setTapText:(id)arg0;
- (void)setCameraPage:(id)arg0;
- (void)setUploadPage:(id)arg0;
- (void)setHorizontalCameraTips:(id)arg0;
- (void)setVerticalCameraTips:(id)arg0;
- (void)setShowMaskStyleImageView:(BOOL)arg0;
- (void)setMaskStyle:(unsigned long long)arg0;
- (void)setDisableGallery:(BOOL)arg0;
- (void)setIsSafeApi:(BOOL)arg0;
- (void)setIsShooting:(BOOL)arg0;
- (void)p_cameraDistrict;
- (id)cameraPage;
- (void)openPhotoAlbum;
- (void)setImageOutput:(id)arg0;
- (id)imageOutput;
- (BOOL)disableGallery;
- (void)setCenterBackgroundImageView:(id)arg0;
- (id)centerBackgroundImageView;
- (void)setFourCornersView:(id)arg0;
- (id)fourCornersView;
- (void)photoBtnDidClick;
- (void)p_jumpToLinkURL;
- (BOOL)showMaskStyleImageView;
- (unsigned long long)maskStyle;
- (void)setTipsImageView:(id)arg0;
- (id)tipsImageView;
- (id)verticalCameraTips;
- (BOOL)p_forbidVertical;
- (void)p_cameraRotation:(unsigned long long)arg0;
- (id)horizontalCameraTips;
- (void)p_trackCameraRotation;
- (id)p_currentDirection;
- (BOOL)isShooting;
- (void)setUploadVC:(id)arg0;
- (id)uploadVC;
- (id)uploadPage;
- (BOOL)isSessionRunningBeforeApplicationResignActive;
- (void)setIsSessionRunningBeforeApplicationResignActive:(BOOL)arg0;
- (id)initWithParams:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)isSafeApi;
- (id)input;
- (void)viewDidAppear:(BOOL)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setInput:(id)arg0;
- (void)setSession:(id)arg0;
- (unsigned long long)currentOrientation;
- (void)setCompletion:(id /* block */)arg0;
- (id)session;
- (id)image;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)applicationWillResignActive;
- (void)setImage:(id)arg0;
- (void)setDevice:(id)arg0;
- (id)queue;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)applicationDidBecomeActive;
- (void)setQueue:(id)arg0;
- (id)device;
- (id)topView;
- (id)bottomView;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (id)titleString;
- (void)setTitleString:(id)arg0;
- (void)setTopView:(id)arg0;
- (void)setBottomView:(id)arg0;
- (void)startRunning;
- (id)linkText;
- (id)linkURL;
- (void)setLinkText:(id)arg0;
- (void)setLinkURL:(id)arg0;
- (id)linkLabel;
- (void)stopRunning:(id /* block */)arg0;
- (id)previewLayer;
- (void)setPreviewLayer:(id)arg0;
- (void)setCurrentOrientation:(unsigned long long)arg0;

@end
