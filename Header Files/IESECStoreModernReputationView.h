//
//     Generated by private class-dump
//

@class UIView, UILabel, IESECStoreModernRatingLabel;

@interface IESECStoreModernReputationView : UIView {
    IESECStoreModernRatingLabel *_ratingLabel;
    UIView *_greaterLineView;
    UILabel *_greaterLabel;
    UIView *_saleCountLineView;
    UILabel *_saleCountLabel;
}

@property (retain, nonatomic) IESECStoreModernRatingLabel *ratingLabel;
@property (retain, nonatomic) UIView *greaterLineView;
@property (retain, nonatomic) UILabel *greaterLabel;
@property (retain, nonatomic) UIView *saleCountLineView;
@property (retain, nonatomic) UILabel *saleCountLabel;

- (id)greaterLabel;
- (void)setGreaterLabel:(id)arg0;
- (id)greaterLineView;
- (id)saleCountLineView;
- (id)saleCountLabel;
- (void)updateDataWithModel:(id)arg0;
- (void)updateDataWithScoreModel:(id)arg0;
- (void)updateRatingLabelWithScore:(id)arg0 greaterText:(id)arg1;
- (void)setGreaterLineView:(id)arg0;
- (void)setSaleCountLineView:(id)arg0;
- (void)setSaleCountLabel:(id)arg0;
- (void).cxx_destruct;
- (id)ratingLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTextColor:(id)arg0;
- (void)setupSubviews;
- (void)setRatingLabel:(id)arg0;

@end
