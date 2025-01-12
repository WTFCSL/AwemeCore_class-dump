//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface IESECRelationContextItem : NSObject {
    id _object;
    NSMutableArray *_handlerArray;
}

@property (retain, nonatomic) NSMutableArray *handlerArray;
@property (retain, nonatomic) id object;
@property (readonly, nonatomic) unsigned long long handlersCount;

- (id)handlerArray;
- (void)setHandlerArray:(id)arg0;
- (void)callHandlersWithObject:(id)arg0;
- (unsigned long long)handlersCount;
- (void)postAllHandlers;
- (id)init;
- (void).cxx_destruct;
- (id)object;
- (void)removeHandler:(id /* block */)arg0;
- (void)addHandler:(id /* block */)arg0;
- (void)setObject:(id)arg0;
- (void)removeAllHandlers;

@end
