//
//     Generated by private class-dump
//

@class UILongPressGestureRecognizer, AWEMusicStreamingShadowView, UIImageView, UIView, BDImageView;
@protocol AWEMusicPlayerCoverViewDelegate;

@interface AWEMusicPlayerCoverView : UIView {
    id<AWEMusicPlayerCoverViewDelegate> _delegate;
    BDImageView *_coverImageView;
    UIView *_defaultContainer;
    AWEMusicStreamingShadowView *_shadowView;
    UIImageView *_defaultImageView;
    UILongPressGestureRecognizer *_longGestrue;
    id /* block */ _workItem;
}

@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) UIView *defaultContainer;
@property (retain, nonatomic) AWEMusicStreamingShadowView *shadowView;
@property (retain, nonatomic) UIImageView *defaultImageView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longGestrue;
@property (copy, nonatomic) id /* block */ workItem;
@property (weak, nonatomic) id<AWEMusicPlayerCoverViewDelegate> delegate;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id /* block */)workItem;
- (void)setWorkItem:(id /* block */)arg0;
- (void)showSuccess;
- (void)updateCoverImageUrl:(id)arg0;
- (void)setDefaultContainer:(id)arg0;
- (void)setDefaultImageView:(id)arg0;
- (id)defaultImageView;
- (void)showDefault;
- (void)longTapped:(id)arg0;
- (void)setLongGestrue:(id)arg0;
- (id)longGestrue;
- (void)trackWebCoverImageDownloadStatus:(id)arg0;
- (void)cancelBlock;
- (void).cxx_destruct;
- (id)shadowView;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setShadowView:(id)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (id)defaultContainer;
- (void)showError;

@end