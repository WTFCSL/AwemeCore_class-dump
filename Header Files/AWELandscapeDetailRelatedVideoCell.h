//
//     Generated by private class-dump
//

@class AWELandscapePageContext, UIImageView, AWEAwemeModel, UILabel, UIView;

@interface AWELandscapeDetailRelatedVideoCell : UICollectionViewCell {
    UIImageView *_coverImageView;
    UIView *_timeContainer;
    UILabel *_timeLabel;
    UIView *_videoInfoContainerView;
    UILabel *_descriptionLabel;
    UILabel *_nickNameLabel;
    UIImageView *_diggIcon;
    UILabel *_diggCount;
    AWEAwemeModel *_model;
    AWELandscapePageContext *_context;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *timeContainer;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *videoInfoContainerView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UIImageView *diggIcon;
@property (retain, nonatomic) UILabel *diggCount;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELandscapePageContext *context;

+ (struct CGSize { double x0; double x1; })cellSizeWithWidth:(double)arg0;

- (id)diggCount;
- (void)setDiggCount:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg0;
- (void)setTimeContainer:(id)arg0;
- (id)videoInfoContainerView;
- (void)setVideoInfoContainerView:(id)arg0;
- (void)configWithAwemeModel:(id)arg0 context:(id)arg1;
- (id)diggIcon;
- (void)setDiggIcon:(id)arg0;
- (void)updateDescriptionLabel;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (void)setDescriptionLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)descriptionLabel;
- (void)setTimeLabel:(id)arg0;
- (id)context;
- (id)timeLabel;
- (void)setupUI;
- (id)timeContainer;

@end