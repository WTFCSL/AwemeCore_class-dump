//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface IESLivePKGuestInteractSettingChooseCell : UITableViewCell {
    BOOL _isAvailable;
    BOOL _isSelected;
    UILabel *_titleLabel;
    UIImageView *_selectImageView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isAvailable;

- (void)setSelectImageView:(id)arg0;
- (id)selectImageView;
- (void)updateItemWithTitle:(id)arg0 selected:(BOOL)arg1;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIsAvailable:(BOOL)arg0;
- (BOOL)isAvailable;
- (void)setTitleLabel:(id)arg0;
- (void)setupConstraints;
- (BOOL)isSelected;
- (void)setupViews;

@end
