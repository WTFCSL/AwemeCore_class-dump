//
//     Generated by private class-dump
//

@class YYLabel, AWEECOMIMInteractiveSystemMsgModel;

@interface AWEECOMIMInteractiveSystemMsgCell : AWEECOMIMBaseMsgCell {
    YYLabel *_tipLabel;
}

@property (retain, nonatomic) YYLabel *tipLabel;
@property (retain, nonatomic) AWEECOMIMInteractiveSystemMsgModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)arg0 withModel:(id)arg1;

- (void)setCellModel:(id)arg0;
- (void)didCustomInit;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;

@end
