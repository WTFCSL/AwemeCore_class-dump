//
//     Generated by private class-dump
//

@protocol IESGCPXPlayGamePaymentService <NSObject>

@property (copy, nonatomic) id /* block */ onPaymentFinishedBlock;

- (void)setOnPaymentFinishedBlock:(id /* block */)arg0;
- (void)payWithOutOrderId:(id)arg0 gameModel:(id)arg1 orientation:(long long)arg2;
- (void)payWithOutOrderId:(id)arg0 gameModel:(id)arg1;
- (id /* block */)onPaymentFinishedBlock;

@end