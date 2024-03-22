//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, UIButton;
@protocol AWERadarSettingItemViewDelegate, AWESettingSwitchProtocol;

@interface AWERadarSettingItemView : UIView {
    id<AWERadarSettingItemViewDelegate> _delegate;
    UIView<AWESettingSwitchProtocol> *_aSwitch;
    unsigned long long _itemType;
    UIImageView *_iconImage;
    UILabel *_titleLabel;
    UIView *_separationLine;
    UIButton *_explainButton;
}

@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separationLine;
@property (retain, nonatomic) UIButton *explainButton;
@property (weak, nonatomic) id<AWERadarSettingItemViewDelegate> delegate;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *aSwitch;

+ (double)suggestHeight;

- (void)p_setupUI;
- (void)p_setupLayout;
- (id)separationLine;
- (void)setSeparationLine:(id)arg0;
- (id)explainButton;
- (void)setExplainButton:(id)arg0;
- (void)p_setupEnableShake;
- (void)p_setupEnableHistory;
- (void)updateEnableShake;
- (void)updateEnableHistory;
- (void)setupItemDisable;
- (void)setupItemEnable;
- (void)showExplainAlert;
- (void)hidenSeparationLine;
- (unsigned long long)itemType;
- (id)iconImage;
- (void)setItemType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setIconImage:(id)arg0;
- (id)aSwitch;
- (void)setASwitch:(id)arg0;
- (id)initWithItemType:(unsigned long long)arg0;

@end