//
//     Generated by private class-dump
//

@class UIImageView;

@interface _YYTextMagnifierCaret : YYTextMagnifier {
    UIImageView *_contentView;
    UIImageView *_coverView;
}

+ (id)coverImage;

- (struct CGSize { double x0; double x1; })fitSize;
- (id)init;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSnapshot:(id)arg0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })arg0;
- (id)snapshot;
- (struct CGSize { double x0; double x1; })snapshotSize;

@end
