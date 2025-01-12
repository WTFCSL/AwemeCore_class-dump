//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface IESGCPEvaluationPlaceholderImageCell : UICollectionViewCell {
    BOOL _isLight;
    UIImageView *_addPhotoImageView;
    UILabel *_countLabel;
    UIView *_centerView;
}

@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) UIImageView *addPhotoImageView;
@property (retain, nonatomic) UILabel *countLabel;
@property (nonatomic) BOOL isLight;

- (void)setIsLight:(BOOL)arg0;
- (void)setAddPhotoImageView:(id)arg0;
- (id)addPhotoImageView;
- (void)updateWithImageCount:(int)arg0;
- (void).cxx_destruct;
- (id)centerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setCenterView:(id)arg0;
- (void)setupViews;
- (id)countLabel;
- (void)setCountLabel:(id)arg0;
- (BOOL)isLight;
- (void)setupLayout;

@end
