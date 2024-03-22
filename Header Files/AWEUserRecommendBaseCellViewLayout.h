//
//     Generated by private class-dump
//

@interface AWEUserRecommendBaseCellViewLayout : NSObject <NSCopying> {
    unsigned long long _secondaryButtonStyle;
    double _buttonPadding;
    double _centerLabelsVerticalGap;
    double _avatarWidth;
    struct CGSize { double width; double height; } _primaryButtonNormalSize;
    struct CGSize { double width; double height; } _primaryButtonHighlightedSize;
    struct CGSize { double width; double height; } _secondaryButtonSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _centerLabelsPadding;
}

@property (nonatomic) unsigned long long secondaryButtonStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) double buttonPadding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } centerLabelsPadding;
@property (nonatomic) double centerLabelsVerticalGap;
@property (nonatomic) struct CGSize { double width; double height; } primaryButtonNormalSize;
@property (nonatomic) struct CGSize { double width; double height; } primaryButtonHighlightedSize;
@property (nonatomic) struct CGSize { double width; double height; } secondaryButtonSize;
@property (nonatomic) double avatarWidth;

+ (id)layoutForIconButton;
+ (id)layout;

- (void)setCenterLabelsVerticalGap:(double)arg0;
- (void)setSecondaryButtonSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })primaryButtonNormalSize;
- (unsigned long long)secondaryButtonStyle;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })centerLabelsPadding;
- (double)centerLabelsVerticalGap;
- (struct CGSize { double x0; double x1; })primaryButtonHighlightedSize;
- (id)initWithSecondaryButtonStyle:(unsigned long long)arg0;
- (void)setSecondaryButtonStyle:(unsigned long long)arg0;
- (void)setCenterLabelsPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setPrimaryButtonNormalSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setPrimaryButtonHighlightedSize:(struct CGSize { double x0; double x1; })arg0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (void)setContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (double)buttonPadding;
- (void)setButtonPadding:(double)arg0;
- (double)avatarWidth;
- (void)setAvatarWidth:(double)arg0;
- (struct CGSize { double x0; double x1; })secondaryButtonSize;

@end
