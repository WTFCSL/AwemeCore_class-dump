//
//     Generated by private class-dump
//

@class AWEUILoadingView;

@interface AWERVHeaderFooterView : UICollectionReusableView {
    AWEUILoadingView *_loadingView;
}

@property (retain, nonatomic) AWEUILoadingView *loadingView;

- (void)createLoadingView;
- (void)endLoading;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
