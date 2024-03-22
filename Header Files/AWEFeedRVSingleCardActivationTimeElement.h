//
//     Generated by private class-dump
//

@class UILabel;

@interface AWEFeedRVSingleCardActivationTimeElement : AWEFeedRVSingleCardBaseElement {
    UILabel *_progressTimeLeftLabelView;
    UILabel *_progressTimeRightLabelView;
    UILabel *_divideLabelView;
}

@property (retain, nonatomic) UILabel *progressTimeLeftLabelView;
@property (retain, nonatomic) UILabel *progressTimeRightLabelView;
@property (retain, nonatomic) UILabel *divideLabelView;

- (void)initializeElement;
- (void)bindEvent;
- (id)progressTimeLeftLabelView;
- (id)divideLabelView;
- (id)progressTimeRightLabelView;
- (void)setProgressTimeLeftLabelView:(id)arg0;
- (void)setDivideLabelView:(id)arg0;
- (void)setProgressTimeRightLabelView:(id)arg0;
- (void)updateTimeLabelWithCurrentTime:(double)arg0 totalTime:(double)arg1;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)viewDidLoad;

@end