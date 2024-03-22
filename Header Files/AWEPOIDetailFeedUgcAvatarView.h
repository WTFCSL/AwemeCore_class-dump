//
//     Generated by private class-dump
//

@class UIImageView;
@protocol AWEPOIDetailFeedUgcAvatarViewDelegate;

@interface AWEPOIDetailFeedUgcAvatarView : UIView {
    id<AWEPOIDetailFeedUgcAvatarViewDelegate> _delegate;
    UIImageView *_avatarImageView;
    UIImageView *_ornamentImageView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _ornamentInsets;
}

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *ornamentImageView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } ornamentInsets;
@property (weak, nonatomic) id<AWEPOIDetailFeedUgcAvatarViewDelegate> delegate;

- (id)ornamentImageView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })ornamentInsets;
- (void)updateWithAvatarURLArray:(id)arg0 ornamentURLArray:(id)arg1;
- (void)setOrnamentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setOrnamentImageView:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)tapAction:(id)arg0;

@end
