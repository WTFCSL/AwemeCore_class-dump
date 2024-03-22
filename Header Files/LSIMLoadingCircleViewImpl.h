//
//     Generated by private class-dump
//

@class NSString, DUXLoadingCircleView;

@interface LSIMLoadingCircleViewImpl : UIView <LSIMLoadingCircleViewProtocol> {
    DUXLoadingCircleView *_loadingView;
}

@property (retain, nonatomic) DUXLoadingCircleView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopLoading;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
