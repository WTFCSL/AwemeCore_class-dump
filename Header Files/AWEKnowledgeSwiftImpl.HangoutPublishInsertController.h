//
//     Generated by private class-dump
//

@interface AWEKnowledgeSwiftImpl.HangoutPublishInsertController : AWEDCFeedBaseController <AWEPublishTaskMessage> {
    void /* unknown type, empty encoding */ publishTaskDict;
    void /* unknown type, empty encoding */ isFirstFetchCompleted;
    void /* unknown type, empty encoding */ firstFetchCompleteBlocks;
}

- (void)task:(id)arg0 didAppendWithInfo:(id)arg1;
- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)task:(id)arg0 progressDidChangeWithInfo:(id)arg1;
- (void)task:(id)arg0 didPendingAtStage:(id)arg1 error:(id)arg2;
- (void)task:(id)arg0 cancelWithResult:(BOOL)arg1;
- (void)enterContainerWithModel:(id)arg0;
- (void)onLoadPlaceholderDataEndWithResult:(unsigned long long)arg0 placeholderData:(id)arg1;
- (void)onFetchListDataEndWithReason:(unsigned long long)arg0 response:(id)arg1 error:(id)arg2;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
