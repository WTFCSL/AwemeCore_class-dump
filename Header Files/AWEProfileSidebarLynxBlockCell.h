//
//     Generated by private class-dump
//

@class UIView, AWEUILoadingView, AWEProfileSidebarLynxBlockViewModel;
@protocol BDXViewContainerProtocol;

@interface AWEProfileSidebarLynxBlockCell : UICollectionViewCell {
    AWEProfileSidebarLynxBlockViewModel *_viewModel;
    double _lynxHeight;
    AWEUILoadingView *_loadingView;
}

@property (nonatomic) double lynxHeight;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (weak, nonatomic) AWEProfileSidebarLynxBlockViewModel *viewModel;
@property (readonly, nonatomic) UIView<BDXViewContainerProtocol> *lynxView;

- (id)lynxView;
- (void)setupInit;
- (double)lynxHeight;
- (void)setLynxHeight:(double)arg0;
- (void)updateLynxState:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)layoutSubviews;
- (void)dealloc;
- (void)addLoadingView;
- (void)updateFrame;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
