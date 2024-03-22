//
//     Generated by private class-dump
//

@class UIImageView, UIActivityIndicatorView;

@interface MJRefreshNormalHeader : MJRefreshStateHeader {
    UIImageView *_arrowView;
    long long _activityIndicatorViewStyle;
    UIActivityIndicatorView *_loadingView;
}

@property (weak, nonatomic) UIActivityIndicatorView *loadingView;
@property (readonly, weak, nonatomic) UIImageView *arrowView;
@property (nonatomic) long long activityIndicatorViewStyle;

- (void)placeSubviews;
- (void).cxx_destruct;
- (void)setState:(long long)arg0;
- (void)prepare;
- (id)arrowView;
- (void)setActivityIndicatorViewStyle:(long long)arg0;
- (long long)activityIndicatorViewStyle;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
