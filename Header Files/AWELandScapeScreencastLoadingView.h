//
//     Generated by private class-dump
//

@class UIImageView;

@interface AWELandScapeScreencastLoadingView : UIView {
    BOOL _isLoading;
    UIImageView *_loadingView;
}

@property (retain, nonatomic) UIImageView *loadingView;
@property (nonatomic) BOOL isLoading;

- (id)screenCastLoadingAnimation;
- (void)stopLoading;
- (BOOL)isLoading;
- (id)init;
- (void).cxx_destruct;
- (void)startLoading;
- (void)setIsLoading:(BOOL)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
