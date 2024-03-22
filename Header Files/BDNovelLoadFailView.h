//
//     Generated by private class-dump
//

@class BDNovelBackButton, NSString, UIImageView, UILabel, UIView, NSError;

@interface BDNovelLoadFailView : UIView <BDNovelLoadFailViewProtocol> {
    BOOL _darkMode;
    id /* block */ _reloadAction;
    UIImageView *_imageView;
    UIView *_topAreaView;
    UIView *_bottomAreaView;
    UILabel *_tipLabel;
    NSError *_error;
    BDNovelBackButton *_backBtn;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *topAreaView;
@property (retain, nonatomic) UIView *bottomAreaView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) BDNovelBackButton *backBtn;
@property (copy, nonatomic) id /* block */ reloadAction;
@property (nonatomic) BOOL darkMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)backBtn;
- (void)setBackBtn:(id)arg0;
- (void)setReloadAction:(id /* block */)arg0;
- (id /* block */)reloadAction;
- (void)onReloadAction;
- (id)topAreaView;
- (id)bottomAreaView;
- (void)setTopAreaView:(id)arg0;
- (void)setBottomAreaView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 error:(id)arg1;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setError:(id)arg0;
- (void)layoutSubviews;
- (id)error;
- (void)hideBackButton;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (void)setDarkMode:(BOOL)arg0;
- (BOOL)darkMode;

@end
