//
//     Generated by private class-dump
//

@protocol BDXContainerProtocol;

@interface BDXBridgeBulletGetVisibleInfoMethod : BDXBridgeMethod

@property (weak, nonatomic) id<BDXContainerProtocol> container;

+ (id)metaInfo;

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (Class)resultModelClass;
- (id)container;
- (long long)authType;
- (void)setContainer:(id)arg0;
- (id)methodName;

@end