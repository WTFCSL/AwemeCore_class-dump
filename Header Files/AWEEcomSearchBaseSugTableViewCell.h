//
//     Generated by private class-dump
//

@class UIView, NSString, UIImage, UIImageView, BDImageView, AWESearchSugModel, UILabel, UIColor;
@protocol AWEEcomSearchSugTableViewCellDelegate;

@interface AWEEcomSearchBaseSugTableViewCell : UITableViewCell <AWEEcomSearchSugTableViewCellProtocol> {
    BOOL _whiteStyle;
    UIColor *_contentLabelTextColor;
    UIImage *_complementInnerImage;
    UIImage *_searchIconImage;
    id<AWEEcomSearchSugTableViewCellDelegate> _delegate;
    UIView *_separateView;
    AWESearchSugModel *_sugModel;
    UIImageView *_complementInnerImageView;
    UIView *_complementView;
    UILabel *_contentLabel;
    UIImageView *_searchIcon;
    BDImageView *_tagImageView;
}

@property (retain, nonatomic) UIImageView *complementInnerImageView;
@property (retain, nonatomic) UIView *complementView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) BDImageView *tagImageView;
@property (weak, nonatomic) id<AWEEcomSearchSugTableViewCellDelegate> delegate;
@property (nonatomic, getter=isWhiteStyle) BOOL whiteStyle;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) AWESearchSugModel *sugModel;
@property (retain, nonatomic) UIColor *contentLabelTextColor;
@property (retain, nonatomic) UIImage *searchIconImage;
@property (retain, nonatomic) UIImage *complementInnerImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (double)cellHeight;

- (void)setTagImageView:(id)arg0;
- (id)tagImageView;
- (void)setSeparateView:(id)arg0;
- (id)separateView;
- (void)configureUI;
- (void)setComplementInnerImage:(id)arg0;
- (void)setContentLabelTextColor:(id)arg0;
- (void)setSearchIconImage:(id)arg0;
- (id)searchIcon;
- (void)setSearchIcon:(id)arg0;
- (id)complementView;
- (id)contentLabelTextColor;
- (BOOL)isWhiteStyle;
- (void)configureWithContent:(id)arg0 model:(id)arg1;
- (void)setSugModel:(id)arg0;
- (void)updateTagImageConstraintWithRatio:(double)arg0;
- (BOOL)useEcommerceLongTag:(id)arg0;
- (id)searchIconImage;
- (id)sugModel;
- (id)complementInnerImageView;
- (void)didClickedComplementView:(id)arg0;
- (double)contentFontSize;
- (id)complementInnerImage;
- (void)setWhiteStyle:(BOOL)arg0;
- (void)setComplementInnerImageView:(id)arg0;
- (void)setComplementView:(id)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)updateType;
- (void)setDelegate:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (void)configureWithModel:(id)arg0;

@end