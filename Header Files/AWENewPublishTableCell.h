//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface AWENewPublishTableCell : UITableViewCell {
    BOOL _disableAndAllGrey;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descrLabel;
    UILabel *_accessLabel;
    UIImageView *_accessImageView;
    UIView *_badgeView;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descrLabel;
@property (retain, nonatomic) UILabel *accessLabel;
@property (retain, nonatomic) UIImageView *accessImageView;
@property (retain, nonatomic) UIView *badgeView;
@property (nonatomic) BOOL disableAndAllGrey;

- (void)setAwe_disableEdit:(BOOL)arg0;
- (void)addSubviewsForContentView;
- (BOOL)isShowingBadge;
- (void)removeBadge;
- (id)accessLabel;
- (void)addBadge;
- (id)accessImageView;
- (void)setDisableAndAllGrey:(BOOL)arg0;
- (id)descrLabel;
- (void)p_updateAccessLabelLeadingWithView:(id)arg0;
- (void)setDescrLabel:(id)arg0;
- (void)setAccessLabel:(id)arg0;
- (void)setAccessImageView:(id)arg0;
- (BOOL)disableAndAllGrey;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)setBadgeView:(id)arg0;
- (id)titleLabel;
- (id)badgeView;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;

@end
