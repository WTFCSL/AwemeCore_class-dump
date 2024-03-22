//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface AWEPOIUGCRateSelectShopCell : UITableViewCell {
    UIImageView *_selectedIcon;
    UILabel *_nameLabel;
    UILabel *_distanceLabel;
    UIView *_scoreContainerView;
    UIImageView *_scoreImageView;
    UILabel *_scoreLabel;
    UILabel *_scoreTextLabel;
}

@property (retain, nonatomic) UIImageView *selectedIcon;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UIView *scoreContainerView;
@property (retain, nonatomic) UIImageView *scoreImageView;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *scoreTextLabel;

+ (double)normalHeightWithNewStyle:(BOOL)arg0;
+ (double)itemHeightWithModel:(id)arg0;

- (void)updateSubviewLayout;
- (id)selectedIcon;
- (void)setSelectedIcon:(id)arg0;
- (id)scoreImageView;
- (void)setScoreImageView:(id)arg0;
- (id)scoreContainerView;
- (id)scoreTextLabel;
- (void)updateScoreViewWithInfo:(id)arg0;
- (void)setScoreContainerView:(id)arg0;
- (void)setScoreTextLabel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)distanceLabel;
- (id)nameLabel;
- (void)setNameLabel:(id)arg0;
- (void)setDistanceLabel:(id)arg0;
- (void)setupUI;
- (void)updateWithModel:(id)arg0;
- (id)scoreLabel;
- (void)setScoreLabel:(id)arg0;

@end