//
//     Generated by private class-dump
//

@class UIImageView, UILabel, AWEGradientView, UIView;

@interface AWENewHotSpotLiveCellTagView : UIView {
    UILabel *_textLabel;
    AWEGradientView *_gradientView;
    UIView *_liveInfoContainerView;
    UIImageView *_liveInfoIconImageView;
    UILabel *_liveInfoLabel;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIView *liveInfoContainerView;
@property (retain, nonatomic) UIImageView *liveInfoIconImageView;
@property (retain, nonatomic) UILabel *liveInfoLabel;

- (void)configWithTagFrame:(id)arg0;
- (id)liveInfoContainerView;
- (id)liveInfoIconImageView;
- (id)liveInfoLabel;
- (void)setLiveInfoContainerView:(id)arg0;
- (void)setLiveInfoIconImageView:(id)arg0;
- (void)setLiveInfoLabel:(id)arg0;
- (id)textLabel;
- (void).cxx_destruct;
- (void)setGradientView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)gradientView;
- (void)setTextLabel:(id)arg0;

@end
