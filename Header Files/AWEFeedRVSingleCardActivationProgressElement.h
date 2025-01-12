//
//     Generated by private class-dump
//

@class UISlider, UIImage;

@interface AWEFeedRVSingleCardActivationProgressElement : AWEFeedRVSingleCardBaseElement {
    BOOL _isProgressSliderChanging;
    UISlider *_progressSlider;
    UIImage *_defaultThumbImage;
    UIImage *_minimumImage;
    UIImage *_maximumImage;
}

@property (nonatomic) BOOL isProgressSliderChanging;
@property (retain, nonatomic) UISlider *progressSlider;
@property (retain, nonatomic) UIImage *defaultThumbImage;
@property (retain, nonatomic) UIImage *minimumImage;
@property (retain, nonatomic) UIImage *maximumImage;

- (void)initializeElement;
- (void)bindEvent;
- (id)defaultThumbImage;
- (void)setDefaultThumbImage:(id)arg0;
- (void)unSelected;
- (BOOL)isProgressSliderChanging;
- (void)updateProgressWithPercentage:(double)arg0;
- (void)setIsProgressSliderChanging:(BOOL)arg0;
- (id)minimumImage;
- (id)maximumImage;
- (void)setMinimumImage:(id)arg0;
- (void)setMaximumImage:(id)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)viewDidLoad;
- (id)progressSlider;
- (void)setProgressSlider:(id)arg0;

@end
