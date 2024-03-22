//
//     Generated by private class-dump
//

@class CJPayBDCreateOrderResponse;
@protocol CJPayTrackerProtocol;

@protocol CJPayVerifyIDVCProtocol <NSObject>

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *response;
@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;

- (id)trackDelegate;
- (void)setTrackDelegate:(id)arg0;
- (void)updateTips:(id)arg0;
- (void)updateErrorText:(id)arg0;
- (void)clearInput;
- (id /* block */)completion;
- (void)setResponse:(id)arg0;
- (void)setCompletion:(id /* block */)arg0;
- (id)response;

@end
