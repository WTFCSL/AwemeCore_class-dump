//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface AWETeenProtectionHomeTableHeaderView : UITableViewHeaderFooterView {
    UILabel *_headerViewTitleLabel;
    UILabel *_headerViewSubtitleLabel;
    UIImageView *_headerViewImageView;
}

@property (retain, nonatomic) UILabel *headerViewTitleLabel;
@property (retain, nonatomic) UILabel *headerViewSubtitleLabel;
@property (retain, nonatomic) UIImageView *headerViewImageView;

+ (id)identifier;

- (id)headerViewTitleLabel;
- (id)headerViewImageView;
- (id)headerViewSubtitleLabel;
- (void)setHeaderViewTitleLabel:(id)arg0;
- (void)setHeaderViewSubtitleLabel:(id)arg0;
- (void)setHeaderViewImageView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg0;
- (void)setupUI;

@end