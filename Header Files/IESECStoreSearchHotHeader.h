//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface IESECStoreSearchHotHeader : UIView {
    BOOL _showRefreshButton;
    id /* block */ _refreshAction;
    UILabel *_titleLabel;
    UIImageView *_refreshIconView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *refreshIconView;
@property (nonatomic) BOOL showRefreshButton;
@property (copy, nonatomic) id /* block */ refreshAction;

- (id /* block */)refreshAction;
- (void)setShowRefreshButton:(BOOL)arg0;
- (id)refreshIconView;
- (void)didTapRefreshButton;
- (BOOL)showRefreshButton;
- (void)setRefreshAction:(id /* block */)arg0;
- (void)setRefreshIconView:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupViews;

@end
