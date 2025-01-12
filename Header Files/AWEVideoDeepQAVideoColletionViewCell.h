//
//     Generated by private class-dump
//

@class AWEAwemeSearchVideoAbstractSectionModel, LOTAnimationView, UILabel, YYLabel;

@interface AWEVideoDeepQAVideoColletionViewCell : UICollectionViewCell {
    LOTAnimationView *_playingIconView;
    UILabel *_timeLabel;
    YYLabel *_titleLabel;
    YYLabel *_contentLabel;
    AWEAwemeSearchVideoAbstractSectionModel *_sectionModel;
    double _timeLabelWidth;
    double _contentLabelHeight;
}

@property (retain, nonatomic) LOTAnimationView *playingIconView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) AWEAwemeSearchVideoAbstractSectionModel *sectionModel;
@property (nonatomic) double timeLabelWidth;
@property (nonatomic) double contentLabelHeight;

+ (id)getConentLabelAttributedString:(id)arg0;
+ (long long)getContentLabelHeight:(id)arg0 sectionModel:(id)arg1;
+ (double)cellHeight:(id)arg0;
+ (id)identifier;

- (void)configUI;
- (id)playingIconView;
- (void)setPlayingIconView:(id)arg0;
- (void)updateWithModel:(id)arg0 lottiePath:(id)arg1;
- (id)sectionModel;
- (double)contentLabelHeight;
- (double)timeLabelWidth;
- (void)setSectionModel:(id)arg0;
- (void)setTimeLabelWidth:(double)arg0;
- (void)setContentLabelHeight:(double)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTimeLabel:(id)arg0;
- (void)setSelected:(BOOL)arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (id)timeLabel;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;

@end
