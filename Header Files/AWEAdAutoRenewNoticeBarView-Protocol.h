//
//     Generated by private class-dump
//

@class AWEAwemeModel;

@protocol AWEAdAutoRenewNoticeBarView <AWECrotocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)setClickBlock:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (void)updateViewWithAutoRenewModel:(id)arg0;
- (void)updateViewWithLotteryHintModel:(id)arg0;
- (void)updateSearchOutFlowRiskBarViewWithModel:(id)arg0;
- (void)showRiskInfoWithModel:(id)arg0;
- (void)updateProfileAdTipsBarWithModel:(id)arg0;
- (void)showNoticeText:(id)arg0;
- (void)setModel:(id)arg0;
- (id)model;

@end