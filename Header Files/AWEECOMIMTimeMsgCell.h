//
//     Generated by private class-dump
//

@class UILabel, AWEECOMIMTimeMsgModel;

@interface AWEECOMIMTimeMsgCell : AWEECOMIMBaseMsgCell {
    UILabel *_timeLabel;
}

@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) AWEECOMIMTimeMsgModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)arg0 withModel:(id)arg1;
+ (double)timeCellHeight;

- (void)setCellModel:(id)arg0;
- (void)didCustomInit;
- (void).cxx_destruct;
- (void)setTimeLabel:(id)arg0;
- (void)layoutSubviews;
- (id)timeLabel;

@end
