//
//     Generated by private class-dump
//

@class UILabel, UIButton, UIView;

@interface AWEAICreateEffectsNaviView : UIView {
    id /* block */ _closeBlock;
    UIView *_bar;
    UILabel *_label;
    UIButton *_generateCloseBtn;
}

@property (retain, nonatomic) UIView *bar;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *generateCloseBtn;
@property (copy, nonatomic) id /* block */ closeBlock;

- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (void)closeButtonDidClicked:(id)arg0;
- (id)generateCloseBtn;
- (void)layoutCreateKeywordsView;
- (void)setGenerateCloseBtn:(id)arg0;
- (id)bar;
- (void)setBar:(id)arg0;
- (void).cxx_destruct;
- (void)setLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)label;

@end
