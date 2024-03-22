//
//     Generated by private class-dump
//

@class UILabel;

@interface AWEProfileSettingSliderTimeManagementCell : AWEProfileSettingSliderCell {
    id /* block */ _exposureAction;
    UILabel *_timeManagementBubble;
}

@property (retain, nonatomic) UILabel *timeManagementBubble;
@property (copy, nonatomic) id /* block */ exposureAction;

- (void)hideBubble;
- (void)setTimeManagementBubble:(id)arg0;
- (id /* block */)exposureAction;
- (id)timeManagementBubble;
- (void)showBubbleWithTitle:(id)arg0;
- (void)setExposureAction:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setupUI;

@end