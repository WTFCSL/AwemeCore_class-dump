//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFavoriteGuideSimpleView : UIView <BDPHostGameFavoritesViewProtocol> {
    id /* block */ _cancelFavoriteAction;
    id /* block */ _closeAction;
    id /* block */ _showOnAction;
}

@property (copy, nonatomic) id /* block */ cancelFavoriteAction;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ showOnAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCloseBlock:(id /* block */)arg0;
- (void)showOn:(id)arg0;
- (void)appendCancelFavoriteBlock:(id /* block */)arg0;
- (void)appendCloseBlock:(id /* block */)arg0;
- (void)appendGotItBlock:(id /* block */)arg0;
- (void)clickCancelFavoriteButton;
- (id /* block */)cancelFavoriteAction;
- (void)setCancelFavoriteAction:(id /* block */)arg0;
- (void)setShowOnAction:(id /* block */)arg0;
- (void)setCancelFavoriteBlock:(id /* block */)arg0;
- (id /* block */)showOnAction;
- (void)setShowOnBlock:(id /* block */)arg0;
- (void)setGotItBlock:(id /* block */)arg0;
- (void)appendShowOnBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)close;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id /* block */)closeAction;
- (void)setCloseAction:(id /* block */)arg0;
- (void)setupUI;

@end
