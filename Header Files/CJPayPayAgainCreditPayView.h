//
//     Generated by private class-dump
//

@class UIImageView, UILabel, CJPayBytePayMethodCreditPayCollectionView;

@interface CJPayPayAgainCreditPayView : UIView {
    UIImageView *_bankIconImageView;
    UILabel *_bankLabel;
    CJPayBytePayMethodCreditPayCollectionView *_collectionView;
}

@property (retain, nonatomic) UIImageView *bankIconImageView;
@property (retain, nonatomic) UILabel *bankLabel;
@property (retain, nonatomic) CJPayBytePayMethodCreditPayCollectionView *collectionView;

- (void)p_setupUI;
- (id)bankIconImageView;
- (id)bankLabel;
- (void)setBankIconImageView:(id)arg0;
- (void)setBankLabel:(id)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
