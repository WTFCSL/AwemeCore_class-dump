//
//     Generated by private class-dump
//

@class NSString, UIActivityIndicatorView;

@interface CSJIndicatorLoadingPageView : UIView <CSJLoadingPageProtocol> {
    BOOL _isPortrait;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) BOOL isPortrait;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPortrait;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg0;
- (void)setIsPortrait:(BOOL)arg0;

@end