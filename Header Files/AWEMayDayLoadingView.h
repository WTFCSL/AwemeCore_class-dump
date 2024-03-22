//
//     Generated by private class-dump
//

@class NSString, AWEUILoadingView;

@interface AWEMayDayLoadingView : UIView <BDXLoadingViewProtocol> {
    AWEUILoadingView *_loadingView;
}

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToSuperview:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end