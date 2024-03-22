//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UILabel, UIView, UIButton;

@interface CJPayCreditCertOCRViewController : CJPayCardOCRViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate, CJPayPhotoViewControllerDelegate> {
    BOOL _needCaptureNow;
    NSString *_ocrURL;
    NSString *_certName;
    long long _pageType;
    long long _photoCompressSize;
    long long _ocrCompressSize;
    NSDictionary *_extParams;
    double _lastErrorTipsTime;
    NSString *_lastOCRErrorCode;
    long long _lastPageType;
    UILabel *_tipsLabel;
    UIView *_bottomGradientLayerView;
    UIButton *_uploadPhotoButton;
    UIButton *_scanCertButton;
    UIButton *_takePhotoButton;
    UIButton *_captureButton;
    UIButton *_captureInnerButton;
}

@property (nonatomic) double lastErrorTipsTime;
@property (copy, nonatomic) NSString *lastOCRErrorCode;
@property (nonatomic) BOOL needCaptureNow;
@property (nonatomic) long long lastPageType;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *bottomGradientLayerView;
@property (retain, nonatomic) UIButton *uploadPhotoButton;
@property (retain, nonatomic) UIButton *scanCertButton;
@property (retain, nonatomic) UIButton *takePhotoButton;
@property (retain, nonatomic) UIButton *captureButton;
@property (retain, nonatomic) UIButton *captureInnerButton;
@property (retain, nonatomic) NSString *ocrURL;
@property (retain, nonatomic) NSString *certName;
@property (nonatomic) long long pageType;
@property (nonatomic) long long photoCompressSize;
@property (nonatomic) long long ocrCompressSize;
@property (retain, nonatomic) NSDictionary *extParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (id)extParams;
- (void)setExtParams:(id)arg0;
- (void)p_showImagePicker;
- (void)alertTimeOut;
- (void)p_selectPhotoToOCR;
- (void)p_addMask;
- (void)setOcrURL:(id)arg0;
- (void)setPhotoCompressSize:(long long)arg0;
- (void)setOcrCompressSize:(long long)arg0;
- (void)setLastErrorTipsTime:(double)arg0;
- (void)setLastPageType:(long long)arg0;
- (id)bottomGradientLayerView;
- (id)uploadPhotoButton;
- (id)scanCertButton;
- (id)takePhotoButton;
- (void)p_showOCRTipsWithMsg:(id)arg0 ocrErrorCode:(id)arg1;
- (id)captureInnerButton;
- (double)lastErrorTipsTime;
- (id)lastOCRErrorCode;
- (void)setLastOCRErrorCode:(id)arg0;
- (long long)lastPageType;
- (id)p_buildCreditCertOCRRequestParam:(id)arg0 ocrType:(unsigned long long)arg1;
- (id)ocrURL;
- (void)p_alertPhotoOCRFail:(id)arg0 ocrType:(unsigned long long)arg1;
- (long long)photoCompressSize;
- (void)p_scanWithPhotoImgData:(id)arg0 ocrType:(unsigned long long)arg1;
- (BOOL)needCaptureNow;
- (void)setNeedCaptureNow:(BOOL)arg0;
- (long long)ocrCompressSize;
- (void)p_scanWithOCRImageData:(id)arg0;
- (void)uploadPhotoButtonOnClick:(id)arg0;
- (void)scanCertButtonOnClick:(id)arg0;
- (void)takePhotoButtonOnClick:(id)arg0;
- (void)captureButtonOnClick:(id)arg0;
- (void)didPhotoCancelled:(id)arg0;
- (void)didPhotoSelected:(id)arg0;
- (void)setBottomGradientLayerView:(id)arg0;
- (void)setUploadPhotoButton:(id)arg0;
- (void)setScanCertButton:(id)arg0;
- (void)setTakePhotoButton:(id)arg0;
- (void)setCaptureInnerButton:(id)arg0;
- (long long)pageType;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setPageType:(long long)arg0;
- (void)viewDidLoad;
- (void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg1 fromConnection:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg0;
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (void)setupUI;
- (void)picker:(id)arg0 didFinishPicking:(id)arg1;
- (id)captureButton;
- (void)setCaptureButton:(id)arg0;
- (id)certName;
- (void)setCertName:(id)arg0;

@end