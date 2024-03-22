//
//     Generated by private class-dump
//

@class AWEButton, UIImageView, BDImageView;

@protocol AWEAdAvatarView <AWECrotocol>

@property (retain, nonatomic) AWEButton *avatarButton;
@property (retain, nonatomic) UIImageView *decorationView;
@property (retain, nonatomic) BDImageView *virtualAnimatedAvatarView;
@property (nonatomic) BOOL shouldUseGrayImage;

- (void)setEnableLeftHandOptimize:(BOOL)arg0 withPointInsideBlock:(id /* block */)arg1;
- (void)configWithUser:(id)arg0 shouldShowDecoration:(BOOL)arg1 enterFrom:(id)arg2;
- (void)configWithUser:(id)arg0 shouldShowDecoration:(BOOL)arg1 enterFrom:(id)arg2 awemodel:(id)arg3;
- (void)replayDecorationAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getAvatarFrame;
- (void)updateDecorationLayoutToShrinkStyleWithUser:(id)arg0;
- (void)updateVirtualAnimatedAvatarViewForIsHidden:(BOOL)arg0;
- (id)virtualAnimatedAvatarView;
- (void)setVirtualAnimatedAvatarView:(id)arg0;
- (BOOL)shouldUseGrayImage;
- (void)setShouldUseGrayImage:(BOOL)arg0;
- (id)decorationView;
- (void)setDecorationView:(id)arg0;
- (id)avatarButton;
- (void)setAvatarButton:(id)arg0;

@end
