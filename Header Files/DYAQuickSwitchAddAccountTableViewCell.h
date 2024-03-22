//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface DYAQuickSwitchAddAccountTableViewCell : UITableViewCell {
    BOOL _isInAccountQuickSwitchPopup;
    UIImageView *_addAccountImageView;
    UILabel *_nicknameLabel;
}

@property (retain, nonatomic) UIImageView *addAccountImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (nonatomic) BOOL isInAccountQuickSwitchPopup;

+ (id)identifier;

- (id)addAccountImageView;
- (BOOL)isInAccountQuickSwitchPopup;
- (void)setIsInAccountQuickSwitchPopup:(BOOL)arg0;
- (void)setAddAccountImageView:(id)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg0;

@end