//
//     Generated by private class-dump
//

@class HTSLiveGradientBackgroundView, UIImageView, UIView, UILabel;
@protocol IESLiveWebPPlayer;

@interface IESLivePlaybackHighlightDetailCell : UITableViewCell {
    HTSLiveGradientBackgroundView *_gradientView;
    UIView *_borderView;
    UIImageView *_mainImage;
    UIView *_dot;
    UIView *_topLine;
    UIView *_bottomLine;
    UILabel *_timeLabel;
    UILabel *_titleLabel;
    UIImageView<IESLiveWebPPlayer> *_liveWebp;
}

@property (retain, nonatomic) HTSLiveGradientBackgroundView *gradientView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIImageView *mainImage;
@property (retain, nonatomic) UIView *dot;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *liveWebp;

+ (id)identifier;

- (id)mainImage;
- (void)setMainImage:(id)arg0;
- (id)startLoacationStrOf:(long long)arg0;
- (void)p_addWebPIfNeeded;
- (id)liveWebp;
- (void)updateData:(id)arg0 selected:(BOOL)arg1 isFirst:(BOOL)arg2;
- (void)setLiveWebp:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setGradientView:(id)arg0;
- (void)setup;
- (void)setTimeLabel:(id)arg0;
- (void)prepareForReuse;
- (id)gradientView;
- (void)setTitleLabel:(id)arg0;
- (id)timeLabel;
- (id)borderView;
- (void)setBorderView:(id)arg0;
- (id)dot;
- (void)setDot:(id)arg0;
- (id)bottomLine;
- (void)setBottomLine:(id)arg0;
- (id)topLine;
- (void)setTopLine:(id)arg0;

@end