//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIButton;

@interface AWEMusicCollectionSongEmptyFooterView : UIView {
    id /* block */ _toFindMusicClickBlock;
    UIImageView *_emptyImageView;
    UILabel *_tipLabel;
    UIButton *_toFindMusicButton;
}

@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *toFindMusicButton;
@property (copy, nonatomic) id /* block */ toFindMusicClickBlock;

- (void)buttonClick:(id)arg0;
- (void)configSubviews;
- (id)emptyImageView;
- (void)setEmptyImageView:(id)arg0;
- (id /* block */)toFindMusicClickBlock;
- (id)toFindMusicButton;
- (void)setToFindMusicClickBlock:(id /* block */)arg0;
- (void)setToFindMusicButton:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;

@end
