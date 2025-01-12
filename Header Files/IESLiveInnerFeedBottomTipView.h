//
//     Generated by private class-dump
//

@class UIStackView, NSString, UILabel, UIButton;

@interface IESLiveInnerFeedBottomTipView : UIView {
    id /* block */ _closeAction;
    NSString *_content;
    UILabel *_contentLabel;
    UIStackView *_contentStackView;
    UIButton *_closeButton;
}

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ closeAction;

- (void)closeButtonClick;
- (void)dismiss;
- (void).cxx_destruct;
- (id)content;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id /* block */)closeAction;
- (void)setContent:(id)arg0;
- (void)setCloseAction:(id /* block */)arg0;
- (id)contentStackView;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (void)setContentStackView:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)updateContent:(id)arg0;

@end
