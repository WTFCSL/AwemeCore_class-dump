//
//     Generated by private class-dump
//

@class BDParserManager, BDReaderChapterInfo, BDReaderChapterContent, NSArray, NSString, BDReaderModel, NSMutableArray;
@protocol BDReaderLayoutOperationDelegate;

@interface BDReaderLayoutOperation : NSObject <BDReaderLayoutOperationProtocol, BDRPriorityQueueObjectProtocol> {
    BOOL _isCancelled;
    BDReaderModel *_readerModel;
    BDReaderChapterInfo *_chapterInfo;
    BDReaderChapterContent *_chapterContent;
    unsigned long long _priority;
    NSString *_key;
    id<BDReaderLayoutOperationDelegate> _delegate;
    BDParserManager *_parserMgr;
    NSMutableArray *_completionBlocks;
}

@property (copy, nonatomic) NSMutableArray *completionBlocks;
@property (nonatomic) BOOL isCancelled;
@property (retain, nonatomic) BDReaderModel *readerModel;
@property (retain, nonatomic) BDReaderChapterInfo *chapterInfo;
@property (retain, nonatomic) BDReaderChapterContent *chapterContent;
@property (readonly, copy, nonatomic) NSArray *completions;
@property (nonatomic) unsigned long long priority;
@property (copy, nonatomic) NSString *key;
@property (weak, nonatomic) id<BDReaderLayoutOperationDelegate> delegate;
@property (weak, nonatomic) BDParserManager *parserMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)chapterInfo;
- (void)setChapterInfo:(id)arg0;
- (id)readerModel;
- (void)setReaderModel:(id)arg0;
- (void)setChapterContent:(id)arg0;
- (id)chapterContent;
- (id)initWithReaderModel:(id)arg0 parserManager:(id)arg1 chapterInfo:(id)arg2 chapterContent:(id)arg3 priority:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (id)getLayoutChapterDataWithReaderModel:(id)arg0 chapterInfo:(id)arg1 chapterContent:(id)arg2;
- (void)transferContent:(id)arg0 chapterInfo:(id)arg1 chapterContent:(id)arg2 attributedString:(id)arg3;
- (void)appendAttachment:(id)arg0 chapterInfo:(id)arg1 attributedString:(id)arg2;
- (id)layoutProcess:(id)arg0 chapterInfo:(id)arg1 chapterContent:(id)arg2 readerModel:(id)arg3;
- (id)subAttributedStringForLayout:(id)arg0 readerModel:(id)arg1;
- (void)addCompletionBlocks:(id)arg0;
- (void)asyncExecute:(id /* block */)arg0;
- (id)parserMgr;
- (void)setParserMgr:(id)arg0;
- (id)key;
- (id)main;
- (void).cxx_destruct;
- (void)setCompletionBlocks:(id)arg0;
- (id)completionBlocks;
- (void)setPriority:(unsigned long long)arg0;
- (void)setKey:(id)arg0;
- (id)delegate;
- (void)cancel;
- (id)description;
- (id)completions;
- (void)setDelegate:(id)arg0;
- (BOOL)isCancelled;
- (unsigned long long)priority;
- (void)setIsCancelled:(BOOL)arg0;

@end
