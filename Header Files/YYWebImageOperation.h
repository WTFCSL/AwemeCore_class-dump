//
//     Generated by private class-dump
//

@class NSOperation, NSString;
@protocol YYWebImageOperation;

@interface YYWebImageOperation : NSOperation <YYWebImageOperation> {
    NSOperation<YYWebImageOperation> *_target;
}

@property (retain, nonatomic) NSOperation<YYWebImageOperation> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)kernelClass;
+ (void)setKernelClass:(Class)arg0;
+ (void)initialize;

- (id)initWithRequest:(id)arg0 options:(unsigned long long)arg1 cache:(id)arg2 cacheKey:(id)arg3 progress:(id /* block */)arg4 transform:(id /* block */)arg5 completion:(id /* block */)arg6;
- (BOOL)conformsToProtocol:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg0;
- (void)forwardInvocation:(id)arg0;
- (BOOL)respondsToSelector:(SEL)arg0;
- (void)setTarget:(id)arg0;
- (id)target;
- (id)methodSignatureForSelector:(SEL)arg0;
- (id)forwardingTargetForSelector:(SEL)arg0;

@end
