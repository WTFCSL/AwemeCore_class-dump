//
//     Generated by private class-dump
//

@class UIImageView, NSMutableArray, UIView;
@protocol AWETeenSpeedPlayViewProtocol;

@interface AWETeenSpeedPlayView : UIView {
    id<AWETeenSpeedPlayViewProtocol> _delegate;
    UIView *_speedPlayContainer;
    NSMutableArray *_selectItems;
    UIImageView *_playbackRateIcon;
}

@property (retain, nonatomic) UIView *speedPlayContainer;
@property (retain, nonatomic) NSMutableArray *selectItems;
@property (retain, nonatomic) UIImageView *playbackRateIcon;
@property (weak, nonatomic) id<AWETeenSpeedPlayViewProtocol> delegate;

- (id)selectItems;
- (void)setSelectItems:(id)arg0;
- (void)p_layoutViews;
- (id)speedPlayContainer;
- (void)setSpeedPlayContainer:(id)arg0;
- (void)p_activateButtonWithPlaybackRateType:(long long)arg0;
- (void)clickButton:(id)arg0;
- (void)updatePlaybackRateIconPosition:(double)arg0;
- (id)playbackRateIcon;
- (void)setPlaybackRateIcon:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
