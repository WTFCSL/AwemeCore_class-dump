//
//     Generated by private class-dump
//

@class UILabel;

@interface IESLiveLinkMicResultGridView : UIView {
    UILabel *_valueLabel;
    UILabel *_textLabel;
}

@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UILabel *textLabel;

- (id)textLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTextLabel:(id)arg0;
- (id)valueLabel;
- (void)setValueLabel:(id)arg0;
- (void)setupViews;

@end
