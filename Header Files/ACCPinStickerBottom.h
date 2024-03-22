//
//     Generated by private class-dump
//

@class UIButton, AWESlider, UIView;
@protocol ACCPinStickerBottomSliderDelegate;

@interface ACCPinStickerBottom : NSObject {
    UIButton *_cancel;
    UIButton *_confirm;
    AWESlider *_slider;
    id<ACCPinStickerBottomSliderDelegate> _sliderDelegate;
    UIView *_backgroundView;
    UIView *_verticalSeperatorView;
    UIView *_horizontalSeperatorView;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *verticalSeperatorView;
@property (retain, nonatomic) UIView *horizontalSeperatorView;
@property (retain, nonatomic) UIButton *cancel;
@property (retain, nonatomic) UIButton *confirm;
@property (retain, nonatomic) AWESlider *slider;
@property (readonly, nonatomic) double contentViewHeight;
@property (weak, nonatomic) id<ACCPinStickerBottomSliderDelegate> sliderDelegate;

- (id)sliderDelegate;
- (void)setSliderDelegate:(id)arg0;
- (void)updateSlideWithStartTime:(double)arg0 duration:(double)arg1 currTime:(double)arg2;
- (void)buildBottomViewWithContainer:(id)arg0;
- (void)sliderDidChanged:(id)arg0;
- (id)verticalSeperatorView;
- (id)horizontalSeperatorView;
- (void)setVerticalSeperatorView:(id)arg0;
- (void)setHorizontalSeperatorView:(id)arg0;
- (id)buttonFont;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)slider;
- (void)setSlider:(id)arg0;
- (id)contentView;
- (void)setCancel:(id)arg0;
- (id)cancel;
- (void)setBackgroundView:(id)arg0;
- (id)confirm;
- (void)setConfirm:(id)arg0;
- (double)contentViewHeight;

@end