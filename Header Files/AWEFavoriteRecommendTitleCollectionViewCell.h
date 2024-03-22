//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIButton;

@interface AWEFavoriteRecommendTitleCollectionViewCell : UITableViewCell {
    NSString *_Title;
    id /* block */ _closeBtnClickBlock;
    UIImageView *_icon;
    UILabel *_titleLabel;
    UIButton *_cancelButton;
}

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (copy, nonatomic) NSString *Title;
@property (copy, nonatomic) id /* block */ closeBtnClickBlock;

+ (id)identifier;

- (id /* block */)closeBtnClickBlock;
- (void)setCloseBtnClickBlock:(id /* block */)arg0;
- (void)closeAWEFavoriteRecommendCardCell;
- (id)Title;
- (id)icon;
- (void)setCancelButton:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)cancelButton;
- (id)titleLabel;
- (void)setIcon:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setupUI;

@end
