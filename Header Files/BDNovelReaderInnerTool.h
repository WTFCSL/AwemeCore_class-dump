//
//     Generated by private class-dump
//

@interface BDNovelReaderInnerTool : NSObject

+ (id)v1CalProgressStrWithPageContext:(id)arg0 readerModel:(id)arg1;
+ (id)v2CalProgressStrWithPageContext:(id)arg0 readerModel:(id)arg1;
+ (id)newCalProgressStrWithPageContext:(id)arg0 readerModel:(id)arg1;
+ (unsigned long long)realTextPageIndexWithPageContext:(id)arg0 readerModel:(id)arg1;
+ (double)getProgressChapterIndex:(unsigned long long)arg0 chapterSum:(unsigned long long)arg1 currentPageProgress:(double)arg2;
+ (id)calProgressStrWithPageContext:(id)arg0 readerModel:(id)arg1;
+ (double)getProgressWithBookId:(id)arg0 chapterIndex:(unsigned long long)arg1 chapterSum:(unsigned long long)arg2;

- (double)calProgress;

@end
