//
//     Generated by private class-dump
//

@protocol BU_ZFPlayerControlViewDelagate <NSObject>

@optional

- (void)zf_controlView:(id)arg0 backAction:(id)arg1;
- (void)zf_controlView:(id)arg0 closeAction:(id)arg1;
- (void)zf_controlView:(id)arg0 playAction:(id)arg1;
- (void)zf_controlView:(id)arg0 fullScreenAction:(id)arg1;
- (void)zf_controlView:(id)arg0 lockScreenAction:(id)arg1;
- (void)zf_controlView:(id)arg0 repeatPlayAction:(id)arg1;
- (void)zf_controlView:(id)arg0 cneterPlayAction:(id)arg1;
- (void)zf_controlView:(id)arg0 failAction:(id)arg1;
- (void)zf_controlView:(id)arg0 progressSliderTap:(double)arg1;
- (void)zf_controlView:(id)arg0 progressSliderTouchBegan:(id)arg1;
- (void)zf_controlView:(id)arg0 progressSliderValueChanged:(id)arg1;
- (void)zf_controlView:(id)arg0 progressSliderTouchEnded:(id)arg1;
- (void)zf_controlViewWillShow:(id)arg0 isFullscreen:(BOOL)arg1;
- (void)zf_controlViewWillHidden:(id)arg0 isFullscreen:(BOOL)arg1;
- (void)zf_controlViewTouchesBegan:(id)arg0;

@end
