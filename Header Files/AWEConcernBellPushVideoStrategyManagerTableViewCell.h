//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface AWEConcernBellPushVideoStrategyManagerTableViewCell : UITableViewCell {
    BOOL _useCardUIStyle;
    unsigned long long _cornerType;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UIImageView *_iconView;
    UIView *_bottomLineView;
}

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (nonatomic) unsigned long long cornerType;
@property (nonatomic) BOOL useCardUIStyle;

+ (id)identifier;
+ (double)cellHeight;

- (BOOL)useCardUIStyle;
- (void)setupCorners;
- (void)configWithModel:(id)arg0 strategy:(unsigned long long)arg1;
- (void)configWithLiveUserModel:(id)arg0;
- (void)setUseCardUIStyle:(BOOL)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)nameLabel;
- (void)setSelected:(BOOL)arg0 animated:(BOOL)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)setNameLabel:(id)arg0;
- (void)setupUI;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg0;
- (BOOL)isDarkMode;
- (unsigned long long)cornerType;
- (void)setCornerType:(unsigned long long)arg0;

@end