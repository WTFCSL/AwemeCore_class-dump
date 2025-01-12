//
//     Generated by private class-dump
//

@class NSString;

@interface IWKDelegateCompletionProbe : NSObject {
    NSString *_probeName;
    id _caller;
    id _completionHandler;
}

@property (class, nonatomic, getter=shouldCatchFatalError) BOOL catchFatalError;

@property (copy, nonatomic) NSString *probeName;
@property (weak, nonatomic) id caller;
@property (retain, nonatomic) id completionHandler;

+ (void)setCatchFatalError:(BOOL)arg0;
+ (void)p_monitorLog:(id)arg0;
+ (BOOL)shouldCatchFatalError;
+ (id)probeWithSelector:(SEL)arg0;

- (void)setProbeName:(id)arg0;
- (id)probeName;
- (void)callOnce:(id)arg0;
- (id)caller;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id)arg0;
- (void)setCaller:(id)arg0;
- (id)completionHandler;
- (void)dealloc;

@end
