//
//     Generated by private class-dump
//

@class UILabel, AWEECOMIMCardComponentProgressView;

@interface AWEECOMIMSubCardLogisticsView : UIView {
    UILabel *_logisticsInfoLabel;
    AWEECOMIMCardComponentProgressView *_progressView;
}

@property (retain, nonatomic) UILabel *logisticsInfoLabel;
@property (retain, nonatomic) AWEECOMIMCardComponentProgressView *progressView;

+ (double)designHeight;

- (id)logisticsInfoLabel;
- (void)setLogisticsInfoLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (void)updateWithData:(id)arg0;

@end
