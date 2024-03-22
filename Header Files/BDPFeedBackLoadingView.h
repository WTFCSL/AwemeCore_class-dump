//
//     Generated by private class-dump
//

@class UIButton, UIImageView, UIImage, UIView, UILabel, BDPLoadingAnimationView;
@protocol BDPFeedBackLoadingViewDelegate;

@interface BDPFeedBackLoadingView : UIView {
    id<BDPFeedBackLoadingViewDelegate> _feedBackDelegate;
    UIView *_stateView;
    UIImageView *_loadImageView;
    BDPLoadingAnimationView *_loadingAnimationView;
    UILabel *_loadLabel;
    UILabel *_retryLabel;
    UIImage *_loadImage;
    UIButton *_closeButton;
}

@property (retain, nonatomic) UIView *stateView;
@property (retain, nonatomic) UIImageView *loadImageView;
@property (retain, nonatomic) BDPLoadingAnimationView *loadingAnimationView;
@property (retain, nonatomic) UILabel *loadLabel;
@property (retain, nonatomic) UILabel *retryLabel;
@property (retain, nonatomic) UIImage *loadImage;
@property (retain, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) id<BDPFeedBackLoadingViewDelegate> feedBackDelegate;

- (void)netError;
- (id)stateView;
- (void)setStateView:(id)arg0;
- (id)retryLabel;
- (void)setRetryLabel:(id)arg0;
- (void)createView:(long long)arg0;
- (id)loadingAnimationView;
- (void)setLoadingAnimationView:(id)arg0;
- (id)initWithLoadType:(unsigned long long)arg0 width:(double)arg1 height:(double)arg2;
- (void)setFeedBackDelegate:(id)arg0;
- (void)errorView:(long long)arg0;
- (void)setLoadLabel:(id)arg0;
- (id)loadLabel;
- (void)closebuttonClick;
- (void)retryClick;
- (void)setLoadImageView:(id)arg0;
- (id)loadImageView;
- (void)setLoadImage:(id)arg0;
- (id)feedBackDelegate;
- (void).cxx_destruct;
- (void)loadError;
- (id)loadImage;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)loadingView;

@end