//
//     Generated by private class-dump
//

@class UILabel;

@interface AWECommonFeedHotSpotRealTimeHeaderView : UICollectionReusableView {
    BOOL _isChannelContentHeader;
    UILabel *_tipLabel;
}

@property (retain, nonatomic) UILabel *tipLabel;
@property (nonatomic) BOOL isChannelContentHeader;

+ (double)headerHeight;

- (void)updateWithDisplayText:(id)arg0;
- (id)currentDisplayText;
- (BOOL)isChannelContentHeader;
- (void)setIsChannelContentHeader:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;

@end
