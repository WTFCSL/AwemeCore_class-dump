//
//     Generated by private class-dump
//

@class DUXToast, UILabel, AWEBatManXToken, NSDictionary, AWEBatManLoadingView, UIButton, UIView, AWEBatManDisConnectedView, NSString, CMCBatManLoadingViewController, CMCBatManBannerView, AWEAwemeModel, NSError;
@protocol AWEAdOperationViewController, AWEBatManProtocol, AWEAdOperationWebViewController;

@interface CMCBatManManager : NSObject <AWEBatManLoadStatusDelegate, CMCBatManManagerProtocol> {
    BOOL _enterBackground;
    BOOL _shouldShowBatMan;
    BOOL _isNotFirstTimeUseXToken;
    BOOL _toastShown;
    BOOL _nativeMaskView;
    int _initStatus;
    int _loadStatus;
    AWEAwemeModel *_awemeModel;
    id<AWEBatManProtocol> _batMan;
    id<AWEAdOperationWebViewController> _adOperationWebViewController;
    id<AWEAdOperationViewController> _adOperationViewController;
    unsigned long long _interval;
    UIView *_batManView;
    UIButton *_closeButton;
    UILabel *_batManCountDownLabel;
    UIButton *_downloadButton;
    UIView *_batManCountDownView;
    CMCBatManBannerView *_bannerView;
    AWEBatManLoadingView *_loadingView;
    AWEBatManDisConnectedView *_disconnectedView;
    double _loadTimeStamp;
    CMCBatManLoadingViewController *_loadingVC;
    NSString *_lastBatManID;
    long long _stayDuration;
    long long _playDuration;
    AWEBatManXToken *_XTokenModel;
    NSError *_backError;
    NSDictionary *_backInfo;
    DUXToast *_toast;
    long long _bannerViewRemainTime;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWEBatManProtocol> batMan;
@property (retain, nonatomic) id<AWEAdOperationWebViewController> adOperationWebViewController;
@property (retain, nonatomic) id<AWEAdOperationViewController> adOperationViewController;
@property (nonatomic) unsigned long long interval;
@property (weak, nonatomic) UIView *batManView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *batManCountDownLabel;
@property (retain, nonatomic) UIButton *downloadButton;
@property (retain, nonatomic) UIView *batManCountDownView;
@property (retain, nonatomic) CMCBatManBannerView *bannerView;
@property (retain, nonatomic) AWEBatManLoadingView *loadingView;
@property (retain, nonatomic) AWEBatManDisConnectedView *disconnectedView;
@property (nonatomic) double loadTimeStamp;
@property (retain, nonatomic) CMCBatManLoadingViewController *loadingVC;
@property (nonatomic) BOOL enterBackground;
@property (nonatomic) BOOL shouldShowBatMan;
@property (copy, nonatomic) NSString *lastBatManID;
@property (nonatomic) int initStatus;
@property (nonatomic) int loadStatus;
@property (nonatomic) long long stayDuration;
@property (nonatomic) long long playDuration;
@property (retain, nonatomic) AWEBatManXToken *XTokenModel;
@property (nonatomic) BOOL isNotFirstTimeUseXToken;
@property (retain, nonatomic) NSError *backError;
@property (retain, nonatomic) NSDictionary *backInfo;
@property (retain, nonatomic) DUXToast *toast;
@property (nonatomic) BOOL toastShown;
@property (nonatomic) BOOL nativeMaskView;
@property (nonatomic) long long bannerViewRemainTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (long long)stayDuration;
- (void)setEnterBackground:(BOOL)arg0;
- (void)setPlayDuration:(long long)arg0;
- (void)setStayDuration:(long long)arg0;
- (int)batManCenterOrientation;
- (void)closeBatManAction:(id)arg0;
- (void)setupBatManConfig;
- (void)playBatManNotification:(id)arg0;
- (void)setBatMan:(id)arg0;
- (void)setLoadTimeStamp:(double)arg0;
- (void)trackFirstOpenBatMan;
- (BOOL)canUseXToken;
- (id)batMan;
- (id)XTokenModel;
- (id)loadingVC;
- (void)setLoadingVC:(id)arg0;
- (void)setInitStatus:(int)arg0;
- (id)batManView;
- (void)setBatManView:(id)arg0;
- (void)setupBatManView;
- (void)preloadAdOperationWebView;
- (void)setBannerViewRemainTime:(long long)arg0;
- (id)batManCountDownView;
- (id)batManCountDownLabel;
- (void)bannerButtonAction:(id)arg0;
- (void)showDownloadButtonAction;
- (BOOL)toastShown;
- (void)setToastShown:(BOOL)arg0;
- (long long)bannerViewRemainTime;
- (id)adOperationViewController;
- (id)adOperationWebViewController;
- (double)loadTimeStamp;
- (int)initStatus;
- (id)checkEnterSource:(long long)arg0;
- (id)lastBatManID;
- (void)setLastBatManID:(id)arg0;
- (void)preloadBatMan;
- (void)closeBatMan;
- (BOOL)shouldShowBatMan;
- (void)beginBatMan;
- (void)setShouldShowBatMan:(BOOL)arg0;
- (id)backError;
- (id)disconnectedView;
- (void)setBackError:(id)arg0;
- (void)setBackInfo:(id)arg0;
- (void)showToastView;
- (void)showDownLoadButton;
- (void)setXTokenModel:(id)arg0;
- (BOOL)isNotFirstTimeUseXToken;
- (void)setIsNotFirstTimeUseXToken:(BOOL)arg0;
- (void)handleCardClickToAppStoreTracker;
- (void)downLoadButtonAction:(id)arg0;
- (void)dragViewMoved:(id)arg0;
- (void)batManCenterStatusDidChanged:(unsigned long long)arg0;
- (void)batManCenterUserDidClosedBatMan;
- (void)batMan:(id)arg0 playTimeCountDown:(unsigned long long)arg1;
- (void)batManCenterErrorDidChanged:(id)arg0 withInfo:(id)arg1;
- (void)firstPlayBatMan;
- (void)setupBatManWithModel:(id)arg0;
- (void)preloadXToken;
- (void)closeBatManNotification:(id)arg0;
- (void)shownDownLoadButton;
- (void)setAdOperationWebViewController:(id)arg0;
- (void)setAdOperationViewController:(id)arg0;
- (void)setBatManCountDownLabel:(id)arg0;
- (void)setBatManCountDownView:(id)arg0;
- (void)setDisconnectedView:(id)arg0;
- (id)backInfo;
- (BOOL)nativeMaskView;
- (void)setNativeMaskView:(BOOL)arg0;
- (void)willEnterForeground;
- (id)init;
- (void)didEnterBackground;
- (void).cxx_destruct;
- (int)loadStatus;
- (unsigned long long)interval;
- (void)setLoadStatus:(int)arg0;
- (void)setInterval:(unsigned long long)arg0;
- (BOOL)enterBackground;
- (void)addObserver;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)bannerView;
- (void)setBannerView:(id)arg0;
- (id)downloadButton;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setToast:(id)arg0;
- (id)toast;
- (void)openAppStore;
- (long long)playDuration;
- (void)setDownloadButton:(id)arg0;

@end
