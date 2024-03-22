//
//     Generated by private class-dump
//

@class AWEURLModel, NSArray, UIView, AWEMultiAvatarOption;

@interface AWEMultiAvatarView : UIView {
    NSArray *_avatarArray;
    double _avatarWidth;
    double _iconWidth;
    AWEMultiAvatarOption *_option;
    UIView *_firstView;
    UIView *_secondView;
    UIView *_thirdView;
    AWEURLModel *_lastAvatar;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _firstframe;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _secondframe;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _thirdframe;
}

@property (nonatomic) double padding;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) NSArray *avatarArray;
@property (nonatomic) double avatarWidth;
@property (nonatomic) double iconWidth;
@property (retain, nonatomic) AWEMultiAvatarOption *option;
@property (retain, nonatomic) UIView *firstView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } firstframe;
@property (retain, nonatomic) UIView *secondView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } secondframe;
@property (retain, nonatomic) UIView *thirdView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } thirdframe;
@property (retain, nonatomic) AWEURLModel *lastAvatar;

- (void)configWithAvatarArray:(id)arg0 avatarWidth:(double)arg1 option:(id)arg2;
- (struct CGSize { double x0; double x1; })multiAvatarViewSize;
- (void)setAvatarArray:(id)arg0;
- (id)avatarArray;
- (void)configWithAvatarArray:(id)arg0 backgroundColor:(id)arg1 needCrop:(BOOL)arg2 avatarWidth:(double)arg3 needPlaceholder:(BOOL)arg4 needRoundRectBg:(BOOL)arg5;
- (double)multiAvatarViewWidth;
- (void)setFirstframe:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSecondframe:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setThirdView:(id)arg0;
- (void)setThirdframe:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })setupBGFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 index:(long long)arg1;
- (id)setupUserIconBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 userIcon:(id)arg1;
- (void)setLastAvatar:(id)arg0;
- (id)addIconLayerWithOption:(id)arg0;
- (void)addAvatarCountViewOn:(id)arg0 count:(long long)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstframe;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })secondframe;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thirdframe;
- (id)thirdView;
- (void)configWithAvatarArray:(id)arg0 avatarWidth:(double)arg1;
- (void)insertWithAvatar:(id)arg0 avatarWidth:(double)arg1;
- (struct CGSize { double x0; double x1; })multiAvatarViewSizeWithCount:(long long)arg0;
- (unsigned long long)multiAvatarViewCount;
- (id)lastAvatar;
- (void)configWithAvatarArray:(id)arg0 backgroundColor:(id)arg1 needCrop:(BOOL)arg2 leftCrop:(BOOL)arg3 avatarWidth:(double)arg4 needPlaceholder:(BOOL)arg5 needRoundRectBg:(BOOL)arg6 isLeftOnTop:(BOOL)arg7;
- (void)configWithAvatarArray:(id)arg0 backgroundColor:(id)arg1 needCrop:(BOOL)arg2 leftCrop:(BOOL)arg3 avatarWidth:(double)arg4 needPlaceholder:(BOOL)arg5 needRoundRectBg:(BOOL)arg6 isLeftOnTop:(BOOL)arg7 hasMoreAvatarCount:(long long)arg8 padding:(double)arg9 boardWidth:(double)arg10;
- (void)configWithAvatarArray:(id)arg0 backgroundColor:(id)arg1 needCrop:(BOOL)arg2 leftCrop:(BOOL)arg3 avatarWidth:(double)arg4 needPlaceholder:(BOOL)arg5 needRoundRectBg:(BOOL)arg6 isLeftOnTop:(BOOL)arg7 hasMoreAvatarCount:(long long)arg8 padding:(double)arg9 boardWidth:(double)arg10 customLayerCenter:(BOOL)arg11;
- (id)addIconLayer:(BOOL)arg0;
- (id)addIconLayerInRight;
- (void)configWithAvatarArray:(id)arg0 backgroundColor:(id)arg1 needCrop:(BOOL)arg2 avatarWidth:(double)arg3 needPlaceholder:(BOOL)arg4;
- (void)setPadding:(double)arg0;
- (double)borderWidth;
- (void).cxx_destruct;
- (void)setBorderWidth:(double)arg0;
- (double)padding;
- (double)iconWidth;
- (void)setOption:(id)arg0;
- (id)option;
- (void)setIconWidth:(double)arg0;
- (double)avatarWidth;
- (void)setAvatarWidth:(double)arg0;
- (void)setFirstView:(id)arg0;
- (void)setSecondView:(id)arg0;
- (id)firstView;
- (id)secondView;

@end
