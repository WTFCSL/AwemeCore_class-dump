//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface IESGCPPropExplainCard : UIView <IESGCPExplainCardProtocol> {
    UIImageView *_propImageView;
    id /* block */ _closeHandler;
    id /* block */ _buyHandler;
    UIImageView *_gameImageView;
    UILabel *_gameNameLabel;
    UILabel *_propNameLabel;
    UILabel *_originalPriceLabel;
    UILabel *_currentPriceLabel;
}

@property (retain, nonatomic) UIImageView *propImageView;
@property (retain, nonatomic) UIImageView *gameImageView;
@property (retain, nonatomic) UILabel *gameNameLabel;
@property (retain, nonatomic) UILabel *propNameLabel;
@property (retain, nonatomic) UILabel *originalPriceLabel;
@property (retain, nonatomic) UILabel *currentPriceLabel;
@property (copy, nonatomic) id /* block */ closeHandler;
@property (copy, nonatomic) id /* block */ buyHandler;

- (void)setCloseHandler:(id /* block */)arg0;
- (id /* block */)closeHandler;
- (id)gameImageView;
- (void)setGameImageView:(id)arg0;
- (void)setCurrentPriceLabel:(id)arg0;
- (id)currentPriceLabel;
- (id)gameNameLabel;
- (void)setGameNameLabel:(id)arg0;
- (id)propNameLabel;
- (void)setPropNameLabel:(id)arg0;
- (void)initUserInterface;
- (void)closeButtonDidClicked;
- (BOOL)downloadButtonIsAnimating;
- (id)propImageView;
- (id)originalPriceLabel;
- (void)setPropImageView:(id)arg0;
- (void)setOriginalPriceLabel:(id)arg0;
- (void)bottomButtonDidClicked;
- (id /* block */)buyHandler;
- (void)reloadWithPropItem:(id)arg0;
- (void)setBuyHandler:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGSize { double x0; double x1; })cardSize;

@end
