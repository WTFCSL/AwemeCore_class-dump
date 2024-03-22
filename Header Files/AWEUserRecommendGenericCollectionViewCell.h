//
//     Generated by private class-dump
//

@class UIView;
@protocol AWEUserRecommendCellViewProtocol;

@interface AWEUserRecommendGenericCollectionViewCell : UICollectionViewCell {
    UIView<AWEUserRecommendCellViewProtocol> *_basicView;
    UIView *_separatorView;
}

@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIView<AWEUserRecommendCellViewProtocol> *basicView;

- (id)basicView;
- (void)setBasicView:(id)arg0;
- (void).cxx_destruct;
- (void)setSeparatorView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)separatorView;
- (void)setHighlighted:(BOOL)arg0;

@end