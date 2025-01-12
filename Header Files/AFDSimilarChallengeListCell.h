//
//     Generated by private class-dump
//

@class UIImageView, YYLabel, UILabel;

@interface AFDSimilarChallengeListCell : UITableViewCell {
    UIImageView *_challengeCoverImageView;
    UIImageView *_hashtagPlaceholderImageView;
    YYLabel *_hashtagNameLabel;
    UILabel *_infoLabel;
}

@property (retain, nonatomic) UIImageView *challengeCoverImageView;
@property (retain, nonatomic) UIImageView *hashtagPlaceholderImageView;
@property (retain, nonatomic) YYLabel *hashtagNameLabel;
@property (retain, nonatomic) UILabel *infoLabel;

+ (id)reuseIdentifier;
+ (double)cellHeight;

- (void)configWithModel:(id)arg0;
- (id)challengeCoverImageView;
- (id)hashtagPlaceholderImageView;
- (id)hashtagNameLabel;
- (void)setChallengeCoverImageView:(id)arg0;
- (void)setHashtagPlaceholderImageView:(id)arg0;
- (void)setHashtagNameLabel:(id)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setupUI;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg0;

@end
