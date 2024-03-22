//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;

@interface AWEHotRelateSpotTableViewCell : UITableViewCell {
    BOOL _isLive;
    UILabel *_contentLabel;
    UILabel *_relateCountLabel;
    UIView *_containerView;
    UIImageView *_selectImageView;
    UILabel *_timeLabel;
    UIImageView *_timeTopLineView;
    UIImageView *_timeBottomLineView;
}

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *relateCountLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView *timeTopLineView;
@property (retain, nonatomic) UIImageView *timeBottomLineView;
@property (nonatomic) BOOL isLive;

+ (id)reuseIdentifier;
+ (double)cellHeight;

- (void)setSelectImageView:(id)arg0;
- (id)selectImageView;
- (void)configureUI;
- (id)relateCountLabel;
- (void)configRelatedLabel:(id)arg0;
- (void)configureWithModel:(id)arg0 indexPath:(id)arg1;
- (void)setRelateCountLabel:(id)arg0;
- (void)configureWithModel:(id)arg0 indexPath:(id)arg1 isLive:(BOOL)arg2;
- (id)timeTopLineView;
- (id)timeBottomLineView;
- (void)setTimeTopLineView:(id)arg0;
- (void)setTimeBottomLineView:(id)arg0;
- (BOOL)isLive;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (void)setTimeLabel:(id)arg0;
- (id)containerView;
- (void)setSelected:(BOOL)arg0 animated:(BOOL)arg1;
- (void)prepareForReuse;
- (id)timeLabel;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (void)setIsLive:(BOOL)arg0;

@end
