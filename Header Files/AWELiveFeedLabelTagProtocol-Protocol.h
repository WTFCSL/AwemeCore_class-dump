//
//     Generated by private class-dump
//

@protocol AWELiveFeedLabelTagProtocol <NSObject>

@property (nonatomic) struct CGSize { double x0; double x1; } size;

- (void)setupWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)setupWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)setupWithModel:(id)arg0 countDownTime:(double)arg1 isPaid:(BOOL)arg2 isVIPPaidStream:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)setupWithModel:(id)arg0 countDownTime:(double)arg1 isPaid:(BOOL)arg2 isVIPPaidStream:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)updaCountTimeForPaidLive:(double)arg0 isPaid:(BOOL)arg1;
- (void)updaCountTimeForPaidLive:(double)arg0 isPaid:(BOOL)arg1;
- (void)setTagClickBlock:(id /* block */)arg0;
- (void)setTagClickBlock:(id /* block */)arg0;
- (void)show;
- (void)hide;
- (struct CGSize { double x0; double x1; })size;
- (void)setSize:(struct CGSize { double x0; double x1; })arg0;

@end