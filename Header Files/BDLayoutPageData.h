//
//     Generated by private class-dump
//

@class BDReaderChapterInfo;

@interface BDLayoutPageData : NSObject {
    unsigned long long _layoutEngine;
    unsigned long long _pageIndex;
    unsigned long long _pageCount;
    BDReaderChapterInfo *_chapterInfo;
}

@property (nonatomic) unsigned long long layoutEngine;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) unsigned long long pageCount;
@property (retain, nonatomic) BDReaderChapterInfo *chapterInfo;
@property (readonly, nonatomic) BOOL showProgress;

- (id)chapterInfo;
- (void)setChapterInfo:(id)arg0;
- (BOOL)isEqualToPageData:(id)arg0;
- (unsigned long long)pageIndex;
- (void)setPageIndex:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setPageCount:(unsigned long long)arg0;
- (unsigned long long)pageCount;
- (BOOL)isEqual:(id)arg0;
- (BOOL)showProgress;
- (unsigned long long)layoutEngine;
- (void)setLayoutEngine:(unsigned long long)arg0;

@end
