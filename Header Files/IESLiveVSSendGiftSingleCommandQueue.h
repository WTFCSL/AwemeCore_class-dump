//
//     Generated by private class-dump
//

@class NSError;

@interface IESLiveVSSendGiftSingleCommandQueue : IESLiveVSSendGiftCommandQueue {
    id /* block */ _completion;
    NSError *_error;
}

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSError *error;

- (void)runCommand:(id)arg0 completion:(id /* block */)arg1;
- (void)handleFinishCommand:(id)arg0 error:(id)arg1 shouldEnd:(BOOL *)arg2;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)willEnd;
- (void)setError:(id)arg0;
- (id)error;

@end
