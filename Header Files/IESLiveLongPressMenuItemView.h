//
//     Generated by private class-dump
//

@class IESLiveLongPressMenuItem, UIView;

@interface IESLiveLongPressMenuItemView : UIControl {
    IESLiveLongPressMenuItem *_item;
    UIView *_lineView;
}

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) IESLiveLongPressMenuItem *item;

- (void)setHasSeparatorLine:(BOOL)arg0;
- (id)createItemImageView;
- (id)item;
- (id)initWithMenuItem:(id)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setItem:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupUI;

@end
