//
//     Generated by private class-dump
//

@class NSString;
@protocol BDXBridgeContainerProtocol;

@interface BDXBridgeUploadToVODBaseService : NSObject {
    id<BDXBridgeContainerProtocol> _container;
    id /* block */ _completionHandler;
    NSString *_traceId;
}

@property (weak, nonatomic) id<BDXBridgeContainerProtocol> container;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *traceId;

+ (BOOL)useBOE;

- (void)setTraceId:(id)arg0;
- (id)container;
- (void).cxx_destruct;
- (id)traceId;
- (void)setCompletionHandler:(id /* block */)arg0;
- (void)setContainer:(id)arg0;
- (id /* block */)completionHandler;

@end