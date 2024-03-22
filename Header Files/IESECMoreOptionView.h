//
//     Generated by private class-dump
//

@class UIImageView, NSArray, UIView;

@interface IESECMoreOptionView : UIView {
    unsigned long long _style;
    UIImageView *_arrowView;
    UIView *_contentView;
    NSArray *_items;
}

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSArray *items;

- (void)handleTapItemView:(id)arg0;
- (id)initWithItmes:(id)arg0 style:(unsigned long long)arg1;
- (id)initWithItmes:(id)arg0;
- (unsigned long long)style;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (id)contentView;
- (void)setStyle:(unsigned long long)arg0;
- (void)setContentView:(id)arg0;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (void)setupViews;
- (double)viewHeight;

@end