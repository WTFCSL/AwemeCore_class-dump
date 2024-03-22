//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWEAntiAddictDailyAlertConfigModel, AWEAntiAddictDailyAlertBaseViewModel, UIView, IESLiveVideoGiftController;
@protocol AWEAntiAddictDailyAlertViewProtocol, AWEAntiAddictDailyAlertViewControllerDelegate;

@interface AWEAntiAddictDailyAlertViewController : UIViewController <AWEAntiAddictDailyAlertViewDelegate, IESLiveVideoGiftControllerDelegate> {
    BOOL _hasDismiss;
    BOOL _shouldTransfer;
    BOOL _isDay;
    NSString *_enterFrom;
    double _VCHeight;
    NSString *_transferUrl;
    unsigned long long _viewType;
    id /* block */ _handler;
    UIImageView *_defaultImgView;
    AWEAntiAddictDailyAlertBaseViewModel *_viewModel;
    AWEAntiAddictDailyAlertConfigModel *_configModel;
    UIView<AWEAntiAddictDailyAlertViewProtocol> *_alertView;
    IESLiveVideoGiftController *_videoController;
    id<AWEAntiAddictDailyAlertViewControllerDelegate> _delegate;
}

@property (nonatomic) double VCHeight;
@property (nonatomic) BOOL hasDismiss;
@property (nonatomic) BOOL shouldTransfer;
@property (retain, nonatomic) NSString *transferUrl;
@property (nonatomic) BOOL isDay;
@property (nonatomic) unsigned long long viewType;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) UIImageView *defaultImgView;
@property (retain, nonatomic) AWEAntiAddictDailyAlertBaseViewModel *viewModel;
@property (retain, nonatomic) AWEAntiAddictDailyAlertConfigModel *configModel;
@property (retain, nonatomic) UIView<AWEAntiAddictDailyAlertViewProtocol> *alertView;
@property (retain, nonatomic) IESLiveVideoGiftController *videoController;
@property (weak, nonatomic) id<AWEAntiAddictDailyAlertViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)didFinishPlayingWithError:(id)arg0;
- (void)videoGiftController:(id)arg0 didEndPlayingFrame:(id)arg1;
- (void)didClickConfirmButton;
- (void)trackShow;
- (void)setConfigModel:(id)arg0;
- (id)configModel;
- (void)setupBinding;
- (id)initWithTimeType:(BOOL)arg0 viewType:(unsigned long long)arg1 configModel:(id)arg2 delegate:(id)arg3;
- (double)VCHeight;
- (void)didClickCancelButton;
- (void)didClickMaskView;
- (void)didClickOptionButton:(id)arg0;
- (void)didClickLinkText;
- (void)setHasDismiss:(BOOL)arg0;
- (void)setShouldTransfer:(BOOL)arg0;
- (void)configView;
- (id)setupAlertView;
- (void)setupIconForAlertView:(id)arg0;
- (void)setVCHeight:(double)arg0;
- (void)updateSimplifyAlertViewWithSelectedIndex:(long long)arg0;
- (id)iconAlphaPlayerFilePath;
- (id)iconLottieFilePath;
- (id)iconImageFilePath;
- (id)setupDefaultImage;
- (void)setDefaultImgView:(id)arg0;
- (id)defaultImgView;
- (void)layoutIconView:(id)arg0 forAlertView:(id)arg1;
- (void)updateAntiAddictRemindStatWithValue:(id)arg0 OfDay:(BOOL)arg1;
- (void)updateAntiAddictRemindValueTo:(id)arg0 ofDay:(BOOL)arg1;
- (void)setTransferUrl:(id)arg0;
- (id)transferUrl;
- (void)trackSetRemindSuccessForDay:(BOOL)arg0 withValue:(id)arg1;
- (id)geckoFilePath;
- (BOOL)hasDismiss;
- (BOOL)shouldTransfer;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setAlertView:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (void)setHandler:(id /* block */)arg0;
- (id)delegate;
- (id)viewModel;
- (id /* block */)handler;
- (unsigned long long)viewType;
- (BOOL)isDay;
- (void)setDelegate:(id)arg0;
- (id)alertView;
- (id)videoController;
- (void)setVideoController:(id)arg0;
- (void)setViewType:(unsigned long long)arg0;
- (void)setIsDay:(BOOL)arg0;

@end