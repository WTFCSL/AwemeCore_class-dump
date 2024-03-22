//
//     Generated by private class-dump
//

@class UIColor, NSArray, UILabel, AWEGoodsVisitorModel;

@interface AWEGoodsVisitorView : UIView {
    BOOL _clearBorder;
    double _avatarsCenterDistance;
    double _avatarsRadius;
    double _borderWidth;
    UIColor *_borderColor;
    double _countLabelOffset;
    UIColor *_countLabelTextColor;
    NSArray *_avatars;
    UILabel *_visitorCountLabel;
    AWEGoodsVisitorModel *_visitor;
}

@property (retain, nonatomic) NSArray *avatars;
@property (retain, nonatomic) UILabel *visitorCountLabel;
@property (retain, nonatomic) AWEGoodsVisitorModel *visitor;
@property (nonatomic) double avatarsCenterDistance;
@property (nonatomic) double avatarsRadius;
@property (nonatomic) BOOL clearBorder;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double countLabelOffset;
@property (retain, nonatomic) UIColor *countLabelTextColor;

- (void)setAvatars:(id)arg0;
- (id)avatars;
- (void)configWithVisitor:(id)arg0;
- (void)setCountLabelTextColor:(id)arg0;
- (void)setClearBorder:(BOOL)arg0;
- (void)setAvatarsRadius:(double)arg0;
- (void)setAvatarsCenterDistance:(double)arg0;
- (void)setCountLabelOffset:(double)arg0;
- (void)setVisitor:(id)arg0;
- (id)visitorCountLabel;
- (id)countLabelTextColor;
- (void)updateAvatars;
- (double)p__avatarsRadius;
- (double)p__avatarsCenterDistance;
- (BOOL)clearBorder;
- (void)updateAvatarView:(id)arg0 visitor:(id)arg1 URLModel:(id)arg2;
- (double)avatarsRadius;
- (double)visitorCountLabelLeft;
- (void)setVisitorCountLabel:(id)arg0;
- (double)avatarsCenterDistance;
- (double)countLabelOffset;
- (double)visitorCountLabelMaxX;
- (double)borderWidth;
- (void).cxx_destruct;
- (id)borderColor;
- (void)setBorderColor:(id)arg0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBorderWidth:(double)arg0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })arg0;
- (void)layoutSubviews;
- (void)setupUI;
- (id)visitor;

@end
