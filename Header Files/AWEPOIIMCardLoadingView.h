//
//     Generated by private class-dump
//

@class DUXLoadingCircleView, UIImageView, UIView, UILabel;
@protocol AWEPOIIMCardLoadingViewDelegate;

@interface AWEPOIIMCardLoadingView : UIView {
    BOOL _isFailed;
    id<AWEPOIIMCardLoadingViewDelegate> _delegate;
    DUXLoadingCircleView *_loadingView;
    UIView *_failedView;
    UIImageView *_failedImageView;
    UILabel *_infoLabel;
}

@property (retain, nonatomic) DUXLoadingCircleView *loadingView;
@property (retain, nonatomic) UIView *failedView;
@property (retain, nonatomic) UIImageView *failedImageView;
@property (retain, nonatomic) UILabel *infoLabel;
@property (nonatomic) BOOL isFailed;
@property (weak, nonatomic) id<AWEPOIIMCardLoadingViewDelegate> delegate;

- (id)failedImageView;
- (void)setFailedImageView:(id)arg0;
- (id)failedView;
- (void)setFailedView:(id)arg0;
- (void)changeLabelTextToLoading:(BOOL)arg0;
- (void)infoLabelDidTapped;
- (void)stopLoadingWithHidden;
- (void)showFailedView;
- (BOOL)isFailed;
- (id)init;
- (void).cxx_destruct;
- (void)setIsFailed:(BOOL)arg0;
- (void)startLoading;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setupView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg0;

@end