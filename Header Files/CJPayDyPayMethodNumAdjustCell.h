//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIImage;

@interface CJPayDyPayMethodNumAdjustCell : CJPayStyleBaseListCellView {
    UILabel *_descLabel;
    UIImageView *_arrowImageView;
    UIImage *_payMethodFoldImage;
    UIImage *_payMethodUnFoldImage;
}

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImage *payMethodFoldImage;
@property (retain, nonatomic) UIImage *payMethodUnFoldImage;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)bindViewModel:(id)arg0;
- (id)payMethodFoldImage;
- (void)setPayMethodFoldImage:(id)arg0;
- (id)payMethodUnFoldImage;
- (void)setPayMethodUnFoldImage:(id)arg0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)didSelect;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end