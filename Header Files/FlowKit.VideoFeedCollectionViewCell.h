//
//     Generated by private class-dump
//

@interface FlowKit.VideoFeedCollectionViewCell : UICollectionViewCell <FlowVideoPlayerDelegate> {
    void /* unknown type, empty encoding */ videoIndex;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ videoPlayer;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ playIconImageView;
    void /* unknown type, empty encoding */ loadingIndicatorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomMaskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topMaskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_descriptionLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_artistNameLabel;
    void /* unknown type, empty encoding */ notificationTokens;
    void /* unknown type, empty encoding */ videoFeedItem;
    void /* unknown type, empty encoding */ isGestureWorking;
    void /* unknown type, empty encoding */ didTap;
}

- (void)videoPlayer:(id)arg0 playbackStateDidChange:(long long)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;
- (void)handleTap:(id)arg0;

@end
