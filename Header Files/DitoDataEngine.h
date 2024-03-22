//
//     Generated by private class-dump
//

@class NSOperationQueue, DitoPageContext;
@protocol DitoCustomParserProtocol;

@interface DitoDataEngine : NSObject {
    id<DitoCustomParserProtocol> _customParserImpl;
    DitoPageContext *_context;
    NSOperationQueue *_taskQueue;
}

@property (retain, nonatomic) NSOperationQueue *taskQueue;
@property (weak, nonatomic) id<DitoCustomParserProtocol> customParserImpl;
@property (weak, nonatomic) DitoPageContext *context;

- (id)customParserImpl;
- (void)setCustomParserImpl:(id)arg0;
- (void)syncParseData:(id)arg0 buildVMBlock:(id /* block */)arg1 completeBlock:(id /* block */)arg2 exceptionBlock:(id /* block */)arg3;
- (void)asyncParseData:(id)arg0 buildVMBlock:(id /* block */)arg1 completeBlock:(id /* block */)arg2 exceptionBlock:(id /* block */)arg3;
- (void)parseLoadMoreData:(id)arg0 buildVMBlock:(id /* block */)arg1 completeBlock:(id /* block */)arg2 exceptionBlock:(id /* block */)arg3;
- (void)clearNodeWithTag:(id)arg0 atPageModel:(id)arg1 completeBlock:(id /* block */)arg2;
- (void)removeNodeWithTag:(id)arg0 atPageModel:(id)arg1 completeBlock:(id /* block */)arg2;
- (id)init;
- (void).cxx_destruct;
- (void)setTaskQueue:(id)arg0;
- (void)setContext:(id)arg0;
- (id)taskQueue;
- (id)context;

@end