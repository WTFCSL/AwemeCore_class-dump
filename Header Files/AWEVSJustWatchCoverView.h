//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface AWEVSJustWatchCoverView : UIView {
    UILabel *_justWatchedInfoLabel;
    UIImageView *_playIcon;
}

@property (retain, nonatomic) UILabel *justWatchedInfoLabel;
@property (retain, nonatomic) UIImageView *playIcon;

- (id)playIcon;
- (void)setPlayIcon:(id)arg0;
- (void)addMasonry;
- (void)setJustWatchedInfoLabel:(id)arg0;
- (id)justWatchedInfoLabel;
- (void)updateInfoLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)createUI;

@end
