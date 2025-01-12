//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSMutableSet, BDNovelLRUDictionary, BDNovelReaderManager;

@interface BDNovelReaderItemPreload : NSObject {
    BDNovelLRUDictionary *_downloadCache;
    NSMutableDictionary *_waitHandler;
    NSMutableSet *_downloadSet;
    BDNovelReaderManager *_readerManager;
}

@property (retain, nonatomic) BDNovelLRUDictionary *downloadCache;
@property (retain, nonatomic) NSMutableDictionary *waitHandler;
@property (retain, nonatomic) NSMutableSet *downloadSet;
@property (weak, nonatomic) BDNovelReaderManager *readerManager;

- (id)readerManager;
- (void)setReaderManager:(id)arg0;
- (id)waitHandler;
- (id)downloadSet;
- (void)setWaitHandler:(id)arg0;
- (void)setDownloadSet:(id)arg0;
- (void)loadItemDetailByItemId:(id)arg0 bookId:(id)arg1 completionHandler:(id /* block */)arg2;
- (void).cxx_destruct;
- (id)downloadCache;
- (void)setDownloadCache:(id)arg0;

@end
