//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;
@protocol AWEMusicQueueHeaderViewDelegate;

@interface AWEMusicQueueHeaderView : UIView {
    id<AWEMusicQueueHeaderViewDelegate> _delegate;
    unsigned long long _loopMode;
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIView *_queueModeButton;
    UIImageView *_modeImage;
    UILabel *_modeTitle;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIView *queueModeButton;
@property (retain, nonatomic) UIImageView *modeImage;
@property (retain, nonatomic) UILabel *modeTitle;
@property (weak, nonatomic) id<AWEMusicQueueHeaderViewDelegate> delegate;
@property (nonatomic) unsigned long long loopMode;

- (void)setLoopMode:(unsigned long long)arg0;
- (unsigned long long)loopMode;
- (id)queueModeButton;
- (void)setModeImage:(id)arg0;
- (id)modeImage;
- (id)modeTitle;
- (void)didTapQueueModeButton;
- (void)setQueueModeButton:(id)arg0;
- (void)setModeTitle:(id)arg0;
- (void)setCount:(long long)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupView;
- (id)countLabel;
- (void)setCountLabel:(id)arg0;

@end