//
//     Generated by private class-dump
//

@class UIImageView, UIImage, AWEHomePageBubbleLiveHeadLabelContentConfig, UIView, UILabel;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWEHomePageBubbleLiveHeadLabelContentView : UIView {
    AWEHomePageBubbleLiveHeadLabelContentConfig *_config;
    UIImageView *_imageView;
    UIView<AWEFeedLiveMarkViewProtocol> *_liveHeadBreathView;
    UILabel *_titleLabel;
    UIImage *_placeHolder;
}

@property (retain, nonatomic) AWEHomePageBubbleLiveHeadLabelContentConfig *config;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveHeadBreathView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImage *placeHolder;

- (void)awe_themeDidChange:(long long)arg0;
- (void)setupWithConfig:(id)arg0;
- (id)liveHeadBreathView;
- (void)setLiveHeadBreathView:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:(id)arg0;
- (id)initWithConfig:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)updateUI;
- (void)updateImageView;
- (id)placeHolder;
- (void)setPlaceHolder:(id)arg0;

@end