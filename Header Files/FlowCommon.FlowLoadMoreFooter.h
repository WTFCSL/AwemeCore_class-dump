//
//     Generated by private class-dump
//

@interface FlowCommon.FlowLoadMoreFooter : MJRefreshAutoFooter {
    void /* unknown type, empty encoding */ endLoadMoreState;
    void /* unknown type, empty encoding */ safeAreaBottom;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
    void /* unknown type, empty encoding */ contentWidth;
    void /* unknown type, empty encoding */ contentHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_statusLabel;
}

@property (nonatomic) long long state;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)arg0;
- (void)scrollViewPanStateDidChange:(id)arg0;
- (void)scrollViewContentSizeDidChange:(id)arg0;
- (void)clickFooter;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepare;
- (id)initWithCoder:(id)arg0;

@end
