//
//     Generated by private class-dump
//

@class UIButton;

@interface AWERelatedVideoPlaySpeedElement : AWERelatedVideoPlayBaseElement {
    UIButton *_speedButton;
}

@property (retain, nonatomic) UIButton *speedButton;

- (void)initializeElement;
- (void)bindEvent;
- (id)speedButton;
- (void)setSpeedButton:(id)arg0;
- (void)updatePlaySpeed:(double)arg0;
- (void)updateSpeedButtonForLongPressPanelOpti:(double)arg0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end