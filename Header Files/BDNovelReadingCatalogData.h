//
//     Generated by private class-dump
//

@class NSString, BDNovelReaderBook;

@interface BDNovelReadingCatalogData : NSObject {
    BOOL _isBookEnd;
    NSString *_bookName;
    unsigned long long _chapterCount;
    unsigned long long _curIndex;
    BDNovelReaderBook *_novelBook;
}

@property (copy, nonatomic) NSString *bookName;
@property (nonatomic) BOOL isBookEnd;
@property (nonatomic) unsigned long long chapterCount;
@property (nonatomic) unsigned long long curIndex;
@property (retain, nonatomic) BDNovelReaderBook *novelBook;

- (unsigned long long)curIndex;
- (void)setCurIndex:(unsigned long long)arg0;
- (id)novelBook;
- (void)setIsBookEnd:(BOOL)arg0;
- (void)setNovelBook:(id)arg0;
- (BOOL)isBookEnd;
- (unsigned long long)chapterCount;
- (void).cxx_destruct;
- (void)setChapterCount:(unsigned long long)arg0;
- (id)bookName;
- (void)setBookName:(id)arg0;

@end
