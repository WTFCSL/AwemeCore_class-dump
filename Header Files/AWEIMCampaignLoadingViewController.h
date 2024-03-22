//
//     Generated by private class-dump
//

@class NSString, UIImageView, NSTimer, UILabel, UIViewController;

@interface AWEIMCampaignLoadingViewController : UIViewController <AWEUGCampaignNoticeLoadingProtocol> {
    UIImageView *_imageView;
    UILabel *_loadingLabel;
    UILabel *_loadingAnimationLabel;
    UIViewController *_webViewController;
    UIImageView *_lableImageView;
    NSTimer *_timer;
    NSTimer *_loadingTimer;
    long long _currentIndex;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) UILabel *loadingAnimationLabel;
@property (retain, nonatomic) UIViewController *webViewController;
@property (retain, nonatomic) UIImageView *lableImageView;
@property (weak, nonatomic) NSTimer *timer;
@property (weak, nonatomic) NSTimer *loadingTimer;
@property long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backButtonClicked;
- (void)p_setupUI;
- (id)lableImageView;
- (void)setLableImageView:(id)arg0;
- (id)loadingAnimationLabel;
- (void)clearAndReset;
- (void)loadLabelAnimation;
- (void)loadWebViewWithAnimation;
- (void)presentViewControllerIfNeeded;
- (void)setLoadingAnimationLabel:(id)arg0;
- (id)timer;
- (void).cxx_destruct;
- (long long)currentIndex;
- (id)imageView;
- (void)setCurrentIndex:(long long)arg0;
- (void)setImageView:(id)arg0;
- (void)setTimer:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)loadingLabel;
- (id)webViewController;
- (void)setLoadingLabel:(id)arg0;
- (void)setWebViewController:(id)arg0;
- (id)loadingTimer;
- (void)setLoadingTimer:(id)arg0;

@end
