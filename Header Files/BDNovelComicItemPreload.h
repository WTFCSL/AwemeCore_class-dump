//
//     Generated by private class-dump
//

@class BDNovelLRUDictionary, NSMutableDictionary, NSMutableSet;

@interface BDNovelComicItemPreload : NSObject {
    BDNovelLRUDictionary *_downloadCache;
    NSMutableDictionary *_waitHandler;
    NSMutableSet *_downloadSet;
}

@property (retain, nonatomic) BDNovelLRUDictionary *downloadCache;
@property (retain, nonatomic) NSMutableDictionary *waitHandler;
@property (retain, nonatomic) NSMutableSet *downloadSet;

- (void)removeAllCache;
- (id)waitHandler;
- (id)downloadSet;
- (void)loadItemDetailByItemId:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)setWaitHandler:(id)arg0;
- (void)setDownloadSet:(id)arg0;
- (void).cxx_destruct;
- (id)downloadCache;
- (void)setDownloadCache:(id)arg0;

@end