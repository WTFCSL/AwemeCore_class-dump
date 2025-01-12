//
//     Generated by private class-dump
//

@class NSArray, BDReaderChapterInfo, BDReaderChapterContent, BDRAttributedMap, NSString, NSMutableArray, NSAttributedString;

@interface BDLayoutChapterData : NSObject {
    BDReaderChapterInfo *_chapterData;
    BDReaderChapterContent *_chapterContent;
    NSString *_chapterText;
    NSAttributedString *_chapterAttrStr;
    BDRAttributedMap *_attMap;
    NSMutableArray *_pageDatas;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _pageDataRwlock;
}

@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } pageDataRwlock;
@property (copy, nonatomic) NSAttributedString *chapterAttrStr;
@property (retain, nonatomic) BDRAttributedMap *attMap;
@property (retain, nonatomic) NSMutableArray *pageDatas;
@property (readonly, nonatomic) unsigned long long pageCount;
@property (readonly, nonatomic) unsigned long long textPageCount;
@property (readonly, nonatomic) unsigned long long progressPageCount;
@property (retain, nonatomic) BDReaderChapterInfo *chapterData;
@property (retain, nonatomic) BDReaderChapterContent *chapterContent;
@property (copy, nonatomic) NSString *chapterText;
@property (readonly, copy, nonatomic) NSArray *layoutPageDatasArr;

- (id)fetchChapterImageAttachments;
- (void)setChapterContent:(id)arg0;
- (id)chapterContent;
- (id)layoutPageDatasArr;
- (unsigned long long)textPageCount;
- (id)chapterText;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithParagraphInfo:(id)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithSelectionInfoRange:(id)arg0;
- (void)setPageDatas:(id)arg0;
- (id)pageDatas;
- (id)paragrphInfoWithPid:(id)arg0;
- (id)paraInfoWithLocation:(unsigned long long)arg0;
- (id)titleParagrphInfo;
- (void)appendPageData:(id)arg0;
- (void)setChapterAttrStr:(id)arg0;
- (unsigned long long)progressPageCount;
- (id)selectionInfoRangeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })paragrphTitleRange;
- (void)setChapterText:(id)arg0;
- (struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })pageDataRwlock;
- (void)setPageDataRwlock:(struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })arg0;
- (id)chapterAttrStr;
- (id)attMap;
- (void)addLinkAttachment:(id)arg0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })paragrphRangeWithLocation:(unsigned long long)arg0;
- (void)setAttMap:(id)arg0;
- (id)getLayoutPageDataWithPageIndex:(unsigned long long)arg0;
- (unsigned long long)positionWithSelectionInfoPosition:(id)arg0;
- (void)setChapterData:(id)arg0;
- (void)configPageDatas:(id)arg0;
- (id)chapterData;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)pageCount;
- (id)description;
- (void)dealloc;
- (id)subTextWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;

@end
