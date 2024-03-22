//
//     Generated by private class-dump
//

@class UIButton, UIView;
@protocol BDNovelLoadFailViewProtocol;

@interface BDNovelComicFailView : BDNovelComicBaseView {
    id /* block */ _reloadAction;
    UIView<BDNovelLoadFailViewProtocol> *_failView;
    UIButton *_closeButton;
}

@property (retain, nonatomic) UIView<BDNovelLoadFailViewProtocol> *failView;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ reloadAction;

- (void)readerThemeChange:(id)arg0;
- (void)setFailView:(id)arg0;
- (id)failView;
- (void)setReloadAction:(id /* block */)arg0;
- (id /* block */)reloadAction;
- (void)onCloseAction:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 error:(id)arg1;
- (void)layoutSubviews;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end
