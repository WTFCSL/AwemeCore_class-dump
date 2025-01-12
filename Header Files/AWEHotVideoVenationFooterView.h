//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEHotVideoVenationFooterView : UITableViewHeaderFooterView {
    UIImageView *_timelineImageView;
    UILabel *_titleLabel;
    UIImageView *_arrowImageView;
}

@property (retain, nonatomic) UIImageView *timelineImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

+ (id)reuseIdentifier;
+ (double)footerHeight;

- (id)timelineImageView;
- (void)configFooterStyle:(BOOL)arg0;
- (void)setTimelineImageView:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)initWithReuseIdentifier:(id)arg0;
- (void)setupUI;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
