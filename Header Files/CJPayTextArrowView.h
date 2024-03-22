//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface CJPayTextArrowView : UIView {
    UILabel *_textLabel;
    UIImageView *_arrowImageView;
    id /* block */ _clickActionBlock;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) id /* block */ clickActionBlock;

- (void)p_setupUI;
- (void)setClickActionBlock:(id /* block */)arg0;
- (id /* block */)clickActionBlock;
- (void)updateText:(id)arg0 imageName:(id)arg1;
- (void)p_clickView:(id)arg0;
- (id)textLabel;
- (id)init;
- (void).cxx_destruct;
- (void)setTextLabel:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
