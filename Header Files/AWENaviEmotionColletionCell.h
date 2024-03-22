//
//     Generated by private class-dump
//

@class UIImageView, AWENaviDownloadStatusView, UILabel;

@interface AWENaviEmotionColletionCell : TTKNaviBaseSelectableCollectionViewCell {
    UIImageView *_icon;
    UILabel *_label;
    AWENaviDownloadStatusView *_downloadView;
}

@property (retain, nonatomic) AWENaviDownloadStatusView *downloadView;
@property (readonly, nonatomic) UIImageView *icon;
@property (readonly, nonatomic) UILabel *label;

- (void)configWithEmotion:(id)arg0;
- (id)accessibilityLabel;
- (id)icon;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)accessibilityElements;
- (id)label;
- (void)setupViews;
- (void)setDownloadView:(id)arg0;
- (id)downloadView;

@end
