//
//     Generated by private class-dump
//

@class IESLiveSearchSugModel, UIImageView, UILabel, UIView;
@protocol IESLiveSearchSugTableViewCellDelegate;

@interface IESLiveSearchSugTableViewCell : UITableViewCell {
    id<IESLiveSearchSugTableViewCellDelegate> _delegate;
    UILabel *_contentLabel;
    UIView *_complementView;
    UIImageView *_complementInnerImageView;
    UIView *_separateView;
    IESLiveSearchSugModel *_sugModel;
}

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *complementView;
@property (retain, nonatomic) UIImageView *complementInnerImageView;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) IESLiveSearchSugModel *sugModel;
@property (weak, nonatomic) id<IESLiveSearchSugTableViewCellDelegate> delegate;

+ (id)identifier;
+ (double)cellHeight;

- (void)setSeparateView:(id)arg0;
- (id)separateView;
- (void)configureUI;
- (id)complementView;
- (void)setSugModel:(id)arg0;
- (id)sugModel;
- (id)complementInnerImageView;
- (void)didClickedComplementView:(id)arg0;
- (void)setComplementInnerImageView:(id)arg0;
- (void)setComplementView:(id)arg0;
- (BOOL)isNewFeedDrawStyle;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setDelegate:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (void)configureWithModel:(id)arg0;

@end
