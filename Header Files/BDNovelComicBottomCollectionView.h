//
//     Generated by private class-dump
//

@class CAGradientLayer, BDNovelAudioTextView, BDNovelComicInfo, UILabel, UIButton;

@interface BDNovelComicBottomCollectionView : UIView {
    CAGradientLayer *_gradientLayer;
    UILabel *_titleLabel;
    BDNovelAudioTextView *_collectionButton;
    UIButton *_closeButton;
    BDNovelComicInfo *_comicInfo;
    id /* block */ _addShelfAction;
    id /* block */ _closeAction;
}

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) BDNovelAudioTextView *collectionButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) BDNovelComicInfo *comicInfo;
@property (copy, nonatomic) id /* block */ addShelfAction;
@property (copy, nonatomic) id /* block */ closeAction;

+ (id)showWitComicInfo:(id)arg0 color:(id)arg1 addShelfAction:(id /* block */)arg2 closeAction:(id /* block */)arg3;

- (void)setComicInfo:(id)arg0;
- (id)comicInfo;
- (void)onAddShelfAction;
- (void)setCollectionButton:(id)arg0;
- (id)collectionButton;
- (id /* block */)addShelfAction;
- (void)closeFromConfirm:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 comicInfo:(id)arg1 color:(id)arg2;
- (void)setAddShelfAction:(id /* block */)arg0;
- (id)gradientLayer;
- (void).cxx_destruct;
- (void)close;
- (void)show;
- (id)titleLabel;
- (id /* block */)closeAction;
- (void)setCloseAction:(id /* block */)arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)setGradientLayer:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end