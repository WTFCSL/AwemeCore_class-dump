//
//     Generated by private class-dump
//

@class UIImageView, UILabel, IESEffectModel;

@interface AWEFilterBoxFilterCell : UITableViewCell {
    UIImageView *_filterImageView;
    UILabel *_filterNameLabel;
    UIImageView *_checkImageView;
    IESEffectModel *_filterModel;
    unsigned long long _iconStyle;
}

@property (retain, nonatomic) UIImageView *filterImageView;
@property (retain, nonatomic) UILabel *filterNameLabel;
@property (retain, nonatomic) UIImageView *checkImageView;
@property (retain, nonatomic) IESEffectModel *filterModel;
@property (nonatomic) unsigned long long iconStyle;

- (void)setFilterModel:(id)arg0;
- (id)filterModel;
- (id)filterImageView;
- (void)configWithIconStyle:(unsigned long long)arg0;
- (void)configWithRoundStyle;
- (void)configWithSquareStyle;
- (void)setCheckImageViewChecked:(BOOL)arg0;
- (void)setFilterImageView:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)checkImageView;
- (void)setCheckImageView:(id)arg0;
- (unsigned long long)iconStyle;
- (void)setIconStyle:(unsigned long long)arg0;
- (id)filterNameLabel;
- (void)setFilterNameLabel:(id)arg0;

@end
