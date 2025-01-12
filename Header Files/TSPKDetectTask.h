//
//     Generated by private class-dump
//

@class TSPKDetectEvent, TSPKContext;
@protocol TSPKDetectTaskProtocol;

@interface TSPKDetectTask : NSObject {
    BOOL _onCurrentThread;
    TSPKDetectEvent *_detectEvent;
    TSPKContext *_context;
    id<TSPKDetectTaskProtocol> _delegate;
}

@property (retain, nonatomic) TSPKDetectEvent *detectEvent;
@property (nonatomic) BOOL onCurrentThread;
@property (retain, nonatomic) TSPKContext *context;
@property (weak, nonatomic) id<TSPKDetectTaskProtocol> delegate;

- (void)decodeParams:(id)arg0;
- (BOOL)onCurrentThread;
- (id)detectEvent;
- (void)markTaskFinish;
- (void)setOnCurrentThread:(BOOL)arg0;
- (id)initWithDetectEvent:(id)arg0;
- (void)setDetectEvent:(id)arg0;
- (void)execute;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setup;
- (id)delegate;
- (id)context;
- (void)setDelegate:(id)arg0;

@end
