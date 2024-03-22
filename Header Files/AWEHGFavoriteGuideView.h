//
//     Generated by private class-dump
//

@class NSString, UIButton;

@interface AWEHGFavoriteGuideView : HGRevisitEducationView <HGHostFavoritesViewProtocol> {
    NSString *_descString;
    NSString *_titleString;
    id /* block */ _cancelFavoriteAction;
    id /* block */ _gotItAction;
    id /* block */ _showOnAction;
    UIButton *_cancelButton;
}

@property (copy, nonatomic) NSString *descString;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) id /* block */ cancelFavoriteAction;
@property (copy, nonatomic) id /* block */ gotItAction;
@property (copy, nonatomic) id /* block */ showOnAction;
@property (retain, nonatomic) UIButton *cancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickCloseButton;
- (void)setCloseBlock:(id /* block */)arg0;
- (void)showOn:(id)arg0;
- (void)appendCancelFavoriteBlock:(id /* block */)arg0;
- (void)appendCloseBlock:(id /* block */)arg0;
- (void)appendGotItBlock:(id /* block */)arg0;
- (void)setupAction;
- (void)clickCancelFavoriteButton;
- (id /* block */)cancelFavoriteAction;
- (void)setCancelFavoriteAction:(id /* block */)arg0;
- (void)setShowOnAction:(id /* block */)arg0;
- (void)setCancelFavoriteBlock:(id /* block */)arg0;
- (id /* block */)showOnAction;
- (void)setShowOnBlock:(id /* block */)arg0;
- (void)setGotItBlock:(id /* block */)arg0;
- (void)appendShowOnBlock:(id /* block */)arg0;
- (void)setDescString:(id)arg0;
- (void)changeUI;
- (id)descString;
- (void)clickGotItButton;
- (id /* block */)gotItAction;
- (void)setGotItAction:(id /* block */)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 titleString:(id)arg1 descString:(id)arg2 imageURL:(id)arg3;
- (void)setCancelButton:(id)arg0;
- (void).cxx_destruct;
- (id)cancelButton;
- (void)close;
- (id)titleString;
- (void)setTitleString:(id)arg0;

@end