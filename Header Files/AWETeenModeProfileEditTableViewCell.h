//
//     Generated by private class-dump
//

@class UILabel, UIImageView, AWETeenModeProfileEditModel;

@interface AWETeenModeProfileEditTableViewCell : UITableViewCell {
    AWETeenModeProfileEditModel *_model;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_arrowImageView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) AWETeenModeProfileEditModel *model;

+ (double)titleLineSpacing;
+ (id)identifier;

- (void)setModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)detailLabel;
- (void)updateSubviews;
- (void)setDetailLabel:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
