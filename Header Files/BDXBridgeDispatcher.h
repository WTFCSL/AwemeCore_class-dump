//
//     Generated by private class-dump
//

@class NSArray, NSString;
@protocol BDXBridgeDispatcherDelegate;

@interface BDXBridgeDispatcher : NSObject <BDXBridgeEngineCallMessageHandler> {
    NSArray *_executors;
    id<BDXBridgeDispatcherDelegate> _delegate;
}

@property (copy, nonatomic) NSArray *executors;
@property (weak, nonatomic) id<BDXBridgeDispatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleCallMessage:(id)arg0 resultHandler:(id /* block */)arg1;
- (void)setExecutors:(id)arg0;
- (id)initWithExecutors:(id)arg0;
- (BOOL)lynxView:(id)arg0 shouldCall:(id)arg1 params:(id)arg2 callback:(id /* block */)arg3;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)executors;

@end