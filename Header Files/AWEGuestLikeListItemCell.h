//
//     Generated by private class-dump
//

@class UIImageView, UILabel, AWEGradientView;

@interface AWEGuestLikeListItemCell : UICollectionViewCell {
    UIImageView *_coverImageView;
    UIImageView *_albumIconView;
    UILabel *_likeCountLabel;
    UIImageView *_likeIconView;
    AWEGradientView *_gradientView;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *likeIconView;
@property (retain, nonatomic) UIImageView *albumIconView;
@property (retain, nonatomic) UILabel *likeCountLabel;
@property (retain, nonatomic) AWEGradientView *gradientView;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)likeCountLabel;
- (void)setLikeCountLabel:(id)arg0;
- (id)likeIconView;
- (void)setLikeIconView:(id)arg0;
- (id)albumIconView;
- (void)setAlbumIconView:(id)arg0;
- (void).cxx_destruct;
- (void)setGradientView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)gradientView;
- (void)setupSubviews;

@end