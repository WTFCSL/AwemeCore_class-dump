//
//     Generated by private class-dump
//

@protocol NLEProduceKitComponentProtocol <NSObject>

@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL passThroughInput;

- (id)checkInput;
- (BOOL)passThroughInput;
- (void)start:(id)arg0 withResultBlock:(id /* block */)arg1;
- (void)setPassThroughInput:(BOOL)arg0;
- (void)startWithResultBlock:(id /* block */)arg0;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg0;
- (id)componentDescription;
- (void)start;

@end
