//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface ECOMTIMLongConnectionCallback : NSObject {
    BOOL _skipCallbackIfUserChanged;
    id /* block */ _successCompletionBlock;
    id /* block */ _failureCompletionBlock;
    id /* block */ _beforeFilterBlock;
    id /* block */ _filterBlock;
    id /* block */ _mappingBlock;
    id /* block */ _errorInMappedResponseBlock;
    SEL _configuredSelector;
    id _userinfo;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (copy, nonatomic) id /* block */ successCompletionBlock;
@property (copy, nonatomic) id /* block */ failureCompletionBlock;
@property (copy, nonatomic) id /* block */ beforeFilterBlock;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (copy, nonatomic) id /* block */ mappingBlock;
@property (copy, nonatomic) id /* block */ errorInMappedResponseBlock;
@property (nonatomic) SEL configuredSelector;
@property (retain, nonatomic) id userinfo;
@property (nonatomic) BOOL skipCallbackIfUserChanged;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

+ (id)callbackWithSuccessBlock:(id /* block */)arg0 failureBlock:(id /* block */)arg1;

- (void)setSuccessCompletionBlock:(id /* block */)arg0;
- (void)setFailureCompletionBlock:(id /* block */)arg0;
- (id /* block */)failureCompletionBlock;
- (id /* block */)successCompletionBlock;
- (void)setUserinfo:(id)arg0;
- (id)userinfo;
- (BOOL)skipCallbackIfUserChanged;
- (id /* block */)mappingBlock;
- (void)setSkipCallbackIfUserChanged:(BOOL)arg0;
- (SEL)configuredSelector;
- (id /* block */)beforeFilterBlock;
- (void)setBeforeFilterBlock:(id /* block */)arg0;
- (void)setMappingBlock:(id /* block */)arg0;
- (id /* block */)errorInMappedResponseBlock;
- (void)setErrorInMappedResponseBlock:(id /* block */)arg0;
- (void)setConfiguredSelector:(SEL)arg0;
- (id)callbackQueue;
- (id)init;
- (void)setCallbackQueue:(id)arg0;
- (void).cxx_destruct;
- (id /* block */)filterBlock;
- (id)description;
- (void)dealloc;
- (void)setFilterBlock:(id /* block */)arg0;
- (id)currentUserID;

@end
