//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, AWEMusicLoadingAnimationCell, UIButton;

@interface AWEPhotoMusicEditorOptimizedCollectionView : UICollectionView <ACCMusicCollectionViewProtocol> {
    UILabel *emptyCollectionLabel;
    UIImageView *loadingMoreImageView;
    id /* block */ retryBlock;
    UIButton *_retryButton;
    AWEMusicLoadingAnimationCell *_animationView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } firstLoadingAnimationFrame;
}

@property (retain, nonatomic) UILabel *emptyCollectionLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UIImageView *loadingMoreImageView;
@property (retain, nonatomic) AWEMusicLoadingAnimationCell *animationView;
@property (copy, nonatomic) id /* block */ retryBlock;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } firstLoadingAnimationFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startFirstLoadingAnimation;
- (void)stopFirstLoadingAnimation;
- (void)hideRetryButton;
- (id)emptyCollectionLabel;
- (void)setFirstLoadingAnimationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)startLoadingMoreAnimating;
- (void)stopLoadingMoreAnimating;
- (void)setEmptyCollectionLabel:(id)arg0;
- (void)retryButtonClicked:(id)arg0;
- (void)setLoadingMoreImageView:(id)arg0;
- (id)loadingMoreImageView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstLoadingAnimationFrame;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 collectionViewLayout:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)setupViews;
- (id)animationView;
- (void)setAnimationView:(id)arg0;
- (void)showRetryButton;
- (id)retryButton;
- (void)setRetryButton:(id)arg0;
- (id /* block */)retryBlock;
- (void)setRetryBlock:(id /* block */)arg0;

@end