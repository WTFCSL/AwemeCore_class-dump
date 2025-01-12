//
//     Generated by private class-dump
//

@class IESLiveAdminCellItem, UIImageView, UILabel, UIView;

@interface IESLiveAdminCell : UITableViewCell {
    BOOL _isWhite;
    IESLiveAdminCellItem *_item;
    UIImageView *_arrowView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_descriptionLabel;
    UIView *_redDotView;
}

@property (retain, nonatomic) IESLiveAdminCellItem *item;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (nonatomic) BOOL isWhite;

- (id)redDotView;
- (void)setRedDotView:(id)arg0;
- (void)setIsWhite:(BOOL)arg0;
- (void)renderWithItem:(id)arg0;
- (id)item;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (BOOL)isWhite;
- (void).cxx_destruct;
- (void)setDescriptionLabel:(id)arg0;
- (id)titleLabel;
- (id)descriptionLabel;
- (void)setTitleLabel:(id)arg0;
- (void)setItem:(id)arg0;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (id)detailLabel;
- (void)setConstraints;
- (void)setDetailLabel:(id)arg0;

@end
