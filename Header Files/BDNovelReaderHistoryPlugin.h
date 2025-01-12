//
//     Generated by private class-dump
//

@class NSString, BDReaderPageContext;

@interface BDNovelReaderHistoryPlugin : BDNovelReaderBasePlugin {
    NSString *_lastEnterUserId;
    BDReaderPageContext *_currentPageContext;
}

@property (copy, nonatomic) NSString *lastEnterUserId;
@property (retain, nonatomic) BDReaderPageContext *currentPageContext;

+ (void)managerDidFirstStart;

- (void)receiveDidEnterBackgroundNotification:(id)arg0;
- (id)currentPageContext;
- (void)pluginReaderVCPageChangeWithReadModel:(id)arg0 curPageContext:(id)arg1 targetPageContext:(id)arg2 changeInfo:(id)arg3;
- (void)pluginReaderDidAppear;
- (void)pluginReaderDidDisAppear;
- (void)pluginReaderTextPageWillRender:(id)arg0;
- (void)configThisItemProgress:(id)arg0;
- (void)setCurrentPageContext:(id)arg0;
- (id)lastEnterUserId;
- (void)setLastEnterUserId:(id)arg0;
- (unsigned long long)getHistoryPageIndexWithBookId:(id)arg0 chapterId:(id)arg1;
- (id)getHistoryItemIdWithBookId:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
