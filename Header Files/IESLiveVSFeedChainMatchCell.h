//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface IESLiveVSFeedChainMatchCell : IESLiveVSFeedChainCell {
    UIImageView *_matchBackgroundView;
    UIImageView *_leftIconView;
    UIImageView *_rightIconView;
    UILabel *_leftNameLabel;
    UILabel *_rightNameLabel;
    UILabel *_scoreLabel;
    UILabel *_matchTitleLabel;
}

@property (retain, nonatomic) UIImageView *matchBackgroundView;
@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UIImageView *rightIconView;
@property (retain, nonatomic) UILabel *leftNameLabel;
@property (retain, nonatomic) UILabel *rightNameLabel;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *matchTitleLabel;

- (void)setCellModel:(id)arg0;
- (id)leftIconView;
- (void)setLeftIconView:(id)arg0;
- (void)setRightIconView:(id)arg0;
- (id)rightIconView;
- (id)matchBackgroundView;
- (id)leftNameLabel;
- (id)rightNameLabel;
- (id)matchTitleLabel;
- (void)matchHasPoint;
- (void)setMatchBackgroundView:(id)arg0;
- (void)setLeftNameLabel:(id)arg0;
- (void)setRightNameLabel:(id)arg0;
- (void)setMatchTitleLabel:(id)arg0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setupSubviews;
- (id)scoreLabel;
- (void)setScoreLabel:(id)arg0;

@end