//
//     Generated by private class-dump
//

@interface NetJob : NSObject {
    BOOL _isTotalQuery;
}

@property BOOL isTotalQuery;

+ (void)responseHandler:(id)arg0 response:(id)arg1 jobResultBlock:(id /* block */)arg2 isCancel:(BOOL)arg3 sliceInfo:(id)arg4 isTotalQuery:(BOOL)arg5 error:(id)arg6;

- (BOOL)isTotalQuery;
- (void)setIsTotalQuery:(BOOL)arg0;
- (void)startWithInfo:(id)arg0 jobResultBlock:(id /* block */)arg1 progressBlock:(id /* block */)arg2 isCompletedMsg:(BOOL)arg3;
- (void)cancel;
- (void)reset;

@end
