//
//     Generated by private class-dump
//

@class UIView;
@protocol AWEUserRecommendCellViewProtocol;

@interface AWEUserRecommendGenericTableViewCell : UITableViewCell {
    UIView<AWEUserRecommendCellViewProtocol> *_basicView;
    UIView *_separatorView;
}

@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIView<AWEUserRecommendCellViewProtocol> *basicView;

- (id)basicView;
- (void)setBasicView:(id)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setSeparatorView:(id)arg0;
- (id)separatorView;

@end