//
//     Generated by private class-dump
//

@class UILabel, UIButton, UIImageView;

@interface IESLiveInteractiveGiftLibraryExistTopView : UIView {
    id /* block */ _backAction;
    UILabel *_mainText;
    UILabel *_hintText;
    UIButton *_backButton;
    UIImageView *_backButtonImg;
}

@property (retain, nonatomic) UILabel *mainText;
@property (retain, nonatomic) UILabel *hintText;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIImageView *backButtonImg;
@property (copy, nonatomic) id /* block */ backAction;

- (void)backButtonClicked;
- (id)hintText;
- (id)backButtonImg;
- (void)setBackButtonImg:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBackAction:(id /* block */)arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (id /* block */)backAction;
- (id)mainText;
- (void)setMainText:(id)arg0;
- (void)setUpView;
- (void)setHintText:(id)arg0;

@end
