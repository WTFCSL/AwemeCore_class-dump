//
//     Generated by private class-dump
//

@class CJPayOutRetainVoucherMsgView, CJPayVoucherRetainMsgModel, UILabel, UIView, CJPayCountDownView;

@interface CJPayOutRetainVoucherView : UIView {
    id /* block */ _voucherChangeBlock;
    UILabel *_leftLimitLabel;
    UIView *_separateView;
    UILabel *_limitTimeLabel;
    CJPayCountDownView *_countDownView;
    CJPayOutRetainVoucherMsgView *_leftVoucherMsgView;
    CJPayOutRetainVoucherMsgView *_rightVoucherMsgView;
    CJPayVoucherRetainMsgModel *_leftMsgModel;
    CJPayVoucherRetainMsgModel *_rightMsgModel;
}

@property (retain, nonatomic) UILabel *leftLimitLabel;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) UILabel *limitTimeLabel;
@property (retain, nonatomic) CJPayCountDownView *countDownView;
@property (retain, nonatomic) CJPayOutRetainVoucherMsgView *leftVoucherMsgView;
@property (retain, nonatomic) CJPayOutRetainVoucherMsgView *rightVoucherMsgView;
@property (retain, nonatomic) CJPayVoucherRetainMsgModel *leftMsgModel;
@property (retain, nonatomic) CJPayVoucherRetainMsgModel *rightMsgModel;
@property (copy, nonatomic) id /* block */ voucherChangeBlock;

- (void)setSeparateView:(id)arg0;
- (id)separateView;
- (id)countDownView;
- (void)setCountDownView:(id)arg0;
- (void)p_setupUI;
- (id)leftLimitLabel;
- (id)limitTimeLabel;
- (id)leftVoucherMsgView;
- (id)rightVoucherMsgView;
- (void)setLeftMsgModel:(id)arg0;
- (void)setRightMsgModel:(id)arg0;
- (id)leftMsgModel;
- (id)rightMsgModel;
- (void)p_disableUnselectedView;
- (id /* block */)voucherChangeBlock;
- (void)updateWithRetainInfoModel:(id)arg0;
- (id)getTotalActivityInfoTrackStr;
- (id)getChooseMsgModel;
- (id)getDefaultMsgModel;
- (void)setVoucherChangeBlock:(id /* block */)arg0;
- (void)setLeftLimitLabel:(id)arg0;
- (void)setLimitTimeLabel:(id)arg0;
- (void)setLeftVoucherMsgView:(id)arg0;
- (void)setRightVoucherMsgView:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
