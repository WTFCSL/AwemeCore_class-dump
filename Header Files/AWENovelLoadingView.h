//
//     Generated by private class-dump
//

@class NSString, AWEUILoadingView;

@interface AWENovelLoadingView : UIView <BDNovelLoadingViewProtocol> {
    BOOL _darkMode;
    AWEUILoadingView *_loadingView;
}

@property (nonatomic) BOOL darkMode;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)startAnimation;
- (void)stopAnimation;
- (void)setDarkMode:(BOOL)arg0;
- (BOOL)darkMode;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end