//
//     Generated by private class-dump
//

@class IESLivePublicScreenDataFlowMonitor;

@protocol IESLivePublicScreenNodeHandlerProtocol <NSObject>

@property (retain, nonatomic) IESLivePublicScreenDataFlowMonitor *monitor;

- (id)allBufferNodes;
- (long long)nodeHandlerType;
- (BOOL)addNodeToBuffer:(id)arg0;
- (id)consumeRefreshNodesWithLimitCount:(long long)arg0;
- (void)removeAllNodeBuffer;
- (id)monitor;
- (void)setMonitor:(id)arg0;

@optional

- (id)consumeFoldNode;

@end
