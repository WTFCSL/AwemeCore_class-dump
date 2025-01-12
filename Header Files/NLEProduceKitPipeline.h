//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableArray;
@protocol NLEProduceKitComponentProtocol, NLEProduceKitComponentPrivateProtocol;

@interface NLEProduceKitPipeline : NSObject {
    NSMutableArray *_components;
    NSDictionary *_result;
    id<NLEProduceKitComponentProtocol, NLEProduceKitComponentPrivateProtocol> _currentComponent;
    id /* block */ _completion;
}

@property (retain, nonatomic) NSMutableArray *components;
@property (retain, nonatomic) NSDictionary *result;
@property (retain, nonatomic) id<NLEProduceKitComponentProtocol, NLEProduceKitComponentPrivateProtocol> currentComponent;
@property (copy, nonatomic) id /* block */ completion;

- (void)setCurrentComponent:(id)arg0;
- (id)currentComponent;
- (id)pipelineDescription;
- (BOOL)addComponentToLast:(id)arg0;
- (void)startWithResultCallback:(id /* block */)arg0;
- (id)components;
- (id)init;
- (void)setResult:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (id)result;
- (void)setComponents:(id)arg0;
- (id)getResult;

@end
