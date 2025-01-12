//
//     Generated by private class-dump
//

@class NSString, HGWeakProxy, NSMutableArray;

@interface HGCascadeStyleNode : NSObject {
    NSString *_category;
    HGCascadeStyleNode *_parentNode;
    Class _cls;
    NSMutableArray *_childNodes;
    NSMutableArray *_invocations;
    HGWeakProxy *_sharedProxy;
}

@property (retain, nonatomic) NSMutableArray *invocations;
@property (copy, nonatomic) NSString *category;
@property (weak, nonatomic) HGCascadeStyleNode *parentNode;
@property (retain, nonatomic) Class cls;
@property (retain, nonatomic) NSMutableArray *childNodes;

- (void)applyStyleForObject:(id)arg0;
- (id)invocations;
- (void)setInvocations:(id)arg0;
- (id)init;
- (id)category;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (void)setCategory:(id)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (Class)cls;
- (id)childNodes;
- (id)parentNode;
- (void)setParentNode:(id)arg0;
- (void)addChildNode:(id)arg0;
- (void)removeFromParentNode;
- (void)setChildNodes:(id)arg0;
- (void)setCls:(Class)arg0;

@end
