//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface AWECommentGeneralViewAnchor : UIView {
    UIView *_verticalSeperateLine;
    UILabel *_titleTagLabel;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIView *verticalSeperateLine;
@property (retain, nonatomic) UILabel *titleTagLabel;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)configCommentAnchorWithTag:(id)arg0 andTitle:(id)arg1;
- (id)verticalSeperateLine;
- (void)setVerticalSeperateLine:(id)arg0;
- (id)titleTagLabel;
- (void)setTitleTagLabel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;

@end