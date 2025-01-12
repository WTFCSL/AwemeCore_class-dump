//
//     Generated by private class-dump
//

@class BDNovelComicRevisit, NSArray, NSString, NSURL, NSMutableDictionary, NSDictionary, BDNovelComicRetainBottomShelf, NSMutableSet, BDNovelComicRetainExitAddShelf, BDNovelComicRetainExitRecommend;

@interface BDNovelComicInfo : NSObject {
    BOOL _isInShelf;
    BOOL _isFinish;
    NSDictionary *_rawDict;
    NSString *_comicId;
    NSString *_comicName;
    NSString *_abstract;
    NSURL *_thumbUrl;
    long long _categoryId;
    long long _genre;
    NSString *_author;
    NSString *_lastFreeItemId;
    long long _contentCount;
    NSArray *_categoryList;
    id /* block */ _requestItemsBlock;
    BDNovelComicRevisit *_revisit;
    BDNovelComicRetainBottomShelf *_bottomShelf;
    BDNovelComicRetainExitAddShelf *_exitShelf;
    BDNovelComicRetainExitRecommend *_exitRecommend;
    NSArray *_supportPageModes;
    NSMutableDictionary *_indexMap;
    NSMutableDictionary *_itemMap;
    NSMutableDictionary *_itemDetailMap;
    NSMutableSet *_readItemSet;
    long long _bookType;
    NSArray *_items;
}

@property (copy, nonatomic) NSArray *supportPageModes;
@property (retain, nonatomic) NSMutableDictionary *indexMap;
@property (readonly, nonatomic) NSMutableDictionary *itemMap;
@property (retain, nonatomic) NSMutableDictionary *itemDetailMap;
@property (retain, nonatomic) NSMutableSet *readItemSet;
@property (nonatomic) long long bookType;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSDictionary *rawDict;
@property (copy, nonatomic) NSString *comicId;
@property (copy, nonatomic) NSString *comicName;
@property (copy, nonatomic) NSString *abstract;
@property (copy, nonatomic) NSURL *thumbUrl;
@property (nonatomic) BOOL isInShelf;
@property (nonatomic) BOOL isFinish;
@property (nonatomic) long long categoryId;
@property (nonatomic) long long genre;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *lastFreeItemId;
@property (nonatomic) long long contentCount;
@property (copy, nonatomic) NSArray *categoryList;
@property (copy, nonatomic) id /* block */ requestItemsBlock;
@property (retain, nonatomic) BDNovelComicRevisit *revisit;
@property (retain, nonatomic) BDNovelComicRetainBottomShelf *bottomShelf;
@property (retain, nonatomic) BDNovelComicRetainExitAddShelf *exitShelf;
@property (retain, nonatomic) BDNovelComicRetainExitRecommend *exitRecommend;

+ (id)toSdkObject:(id)arg0;

- (id)comicId;
- (id)thumbUrl;
- (id)comicName;
- (BOOL)isFinish;
- (id)getComicItemByIndex:(long long)arg0;
- (id)categoryTags;
- (void)updateWithDict:(id)arg0;
- (void)setRawDict:(id)arg0;
- (void)setComicId:(id)arg0;
- (void)setComicName:(id)arg0;
- (void)setThumbUrl:(id)arg0;
- (void)setIsInShelf:(BOOL)arg0;
- (void)setBookType:(long long)arg0;
- (void)setIsFinish:(BOOL)arg0;
- (void)setLastFreeItemId:(id)arg0;
- (long long)bookType;
- (void)setSupportPageModes:(id)arg0;
- (id)readItemSet;
- (void)setRevisit:(id)arg0;
- (void)setBottomShelf:(id)arg0;
- (id)bottomShelf;
- (void)setExitShelf:(id)arg0;
- (id)exitShelf;
- (void)setExitRecommend:(id)arg0;
- (id)exitRecommend;
- (id)itemMap;
- (id /* block */)requestItemsBlock;
- (id)indexMap;
- (id)itemDetailMap;
- (id)supportPageModes;
- (id)getComicItemById:(id)arg0;
- (id)getComicItemDetailById:(id)arg0;
- (void)setComicItemDetail:(id)arg0 itemId:(id)arg1;
- (BOOL)supportPageMode:(unsigned long long)arg0;
- (unsigned long long)defaultPageMode;
- (id)rawDict;
- (BOOL)isInShelf;
- (id)lastFreeItemId;
- (void)setRequestItemsBlock:(id /* block */)arg0;
- (void)setIndexMap:(id)arg0;
- (void)setItemDetailMap:(id)arg0;
- (void)setReadItemSet:(id)arg0;
- (id)toSdkObject;
- (long long)itemCount;
- (long long)genre;
- (void)setGenre:(long long)arg0;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (id)categoryList;
- (id)author;
- (void)setAuthor:(id)arg0;
- (void)setCategoryList:(id)arg0;
- (long long)categoryId;
- (void)setAbstract:(id)arg0;
- (id)abstract;
- (long long)contentCount;
- (void)setContentCount:(long long)arg0;
- (void)setCategoryId:(long long)arg0;
- (id)revisit;

@end
