//
//     Generated by private class-dump
//

@class YYLabel, AWEECOMIMRecallMessageModel;

@interface AWEECOMIMRecallMsgCell : AWEECOMIMBaseMsgCell {
    YYLabel *_tipsLabel;
}

@property (retain, nonatomic) YYLabel *tipsLabel;
@property (retain, nonatomic) AWEECOMIMRecallMessageModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)arg0 withModel:(id)arg1;

- (void)setCellModel:(id)arg0;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (void)didCustomInit;
- (void)updateRecallCell;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end