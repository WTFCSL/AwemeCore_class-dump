//
//     Generated by private class-dump
//

@protocol BDReaderParser <NSObject>

- (void)parseBookInfoWithBookId:(id)arg0 completion:(id /* block */)arg1 append:(id /* block */)arg2;
- (void)parseChapterContentWithBookInfo:(id)arg0 chapterInfo:(id)arg1 extra:(id)arg2 completion:(id /* block */)arg3;
- (void)parseAttributedStringWithBookInfo:(id)arg0 chapterInfo:(id)arg1 chapterContent:(id)arg2 process:(id)arg3 completion:(id /* block */)arg4;

@end
