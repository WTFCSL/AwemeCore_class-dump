//
//     Generated by private class-dump
//

@class BDRLRUCache, BDLayoutManager, NSMutableSet, NSString, BDReaderModel, BDParserManager;
@protocol BDPageControllDelegate;

@interface BDPageControllManager : NSObject <BDLayoutManagerDelegate> {
    BDParserManager *_parserManager;
    id<BDPageControllDelegate> _delegate;
    NSMutableSet *_loadingChapterIdSet;
    BDReaderModel *_readerModel;
    BDRLRUCache *_layoutChapterDataCache;
    BDLayoutManager *_layoutManager;
}

@property (retain, nonatomic) NSMutableSet *loadingChapterIdSet;
@property (retain, nonatomic) BDReaderModel *readerModel;
@property (retain, nonatomic) BDRLRUCache *layoutChapterDataCache;
@property (retain, nonatomic) BDLayoutManager *layoutManager;
@property (retain, nonatomic) BDParserManager *parserManager;
@property (weak, nonatomic) id<BDPageControllDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)readerModel;
- (void)cleanUpChapterDataWithChapterId:(id)arg0;
- (void)setReaderModel:(id)arg0;
- (id)initWithReaderModel:(id)arg0;
- (id)parserManager;
- (void)setLoadingChapterIdSet:(id)arg0;
- (void)setLayoutChapterDataCache:(id)arg0;
- (id)getLayoutChapterDataWithChapterId:(id)arg0;
- (void)loadChapterInfoWithChapterId:(id)arg0 loadFrom:(unsigned long long)arg1 priority:(unsigned long long)arg2;
- (id)getPreChapterInfo:(id)arg0;
- (id)getNextChapterInfo:(id)arg0;
- (id)layoutChapterDataCache;
- (id)loadingChapterIdSet;
- (void)layoutChapterInfo:(id)arg0 chapterContent:(id)arg1 priority:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)loadChapterInfoWithChapterId:(id)arg0 loadFrom:(unsigned long long)arg1 priority:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)setLayoutChapterData:(id)arg0 withChapterId:(id)arg1;
- (void)cleanUpChapterDataCache;
- (BOOL)layoutManager:(id)arg0 didFinishLayoutPage:(id)arg1 chapterData:(id)arg2;
- (void)loadChapterInfoIfNeedWithChapterId:(id)arg0 priority:(unsigned long long)arg1;
- (id)getNextReaderPageData:(id)arg0;
- (id)getPreReaderOpenParamIgnoreCache:(id)arg0;
- (id)getNextReaderOpenParamIgnoreCache:(id)arg0;
- (id)getPreReaderOpenParam:(id)arg0;
- (id)getNextReaderOpenParam:(id)arg0;
- (id)getPreReaderPageData:(id)arg0;
- (void)cleanUpChapterDataIgnoreChapterId:(id)arg0;
- (void)relayoutChapterDataWithChapterId:(id)arg0 priority:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)relayoutChapterDataWithChapterId:(id)arg0 pageIndex:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (BOOL)isLayoutChapterDataCache:(id)arg0;
- (id)cacheChapterIds;
- (void)updateChapterDataChapterInfo;
- (void)setParserManager:(id)arg0;
- (void)preloadChapterInfoWithChapterId:(id)arg0;
- (void)loadBookInfo:(id /* block */)arg0 append:(id /* block */)arg1;
- (id)getPageDataWithOpenParams:(id)arg0;
- (BOOL)textData:(id)arg0 chapterData:(id)arg1 containOpenParams:(id)arg2;
- (id)layoutManager;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setLayoutManager:(id)arg0;

@end