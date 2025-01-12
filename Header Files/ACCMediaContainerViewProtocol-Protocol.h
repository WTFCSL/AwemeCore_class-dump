//
//     Generated by private class-dump
//

@class UIImageView, UIImage, UIActivityIndicatorView, UIView;

@protocol ACCMediaContainerViewProtocol <NSObject>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } originalPlayerFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } croppedOriginalPlayerFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } editPlayerFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } containerSize;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIActivityIndicatorView *boomerangIndicatorView;
@property (retain, nonatomic) UIView *minorBgView;
@property (retain, nonatomic) UIImageView *minorImageView;

- (void)setCoverImage:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)initWithPublishModel:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalPlayerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editPlayerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })croppedOriginalPlayerFrame;
- (id)minorBgView;
- (id)minorImageView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaBigMediaFrameForSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setMinorBgView:(id)arg0;
- (void)setMinorImageView:(id)arg0;
- (void)updateOriginalFrameWithSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)isPlayerContainsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)boomerangIndicatorView;
- (void)setBoomerangIndicatorView:(id)arg0;
- (struct CGSize { double x0; double x1; })containerSize;
- (void)builder;
- (void)resetView;
- (id)coverImage;

@end
