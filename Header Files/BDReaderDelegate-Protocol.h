//
//     Generated by private class-dump
//

@protocol BDReaderDelegate <NSObject>

@optional

- (void)onBDReaderPageChangeWithReadModel:(id)arg0 curPageContext:(id)arg1 targetPageContext:(id)arg2 changeInfo:(id)arg3;
- (BOOL)onBDReaderShouldGetPageWithReadModel:(id)arg0 pageContext:(id)arg1 isForward:(BOOL)arg2;
- (BOOL)onBDReaderShouldReaderBoundesWithReadModel:(id)arg0 isForward:(BOOL)arg1 location:(struct CGPoint { double x0; double x1; })arg2;
- (BOOL)onBDReaderShouldPageTransitionWithReadModel:(id)arg0 isForward:(BOOL)arg1 point:(struct CGPoint { double x0; double x1; })arg2 translation:(struct CGPoint { double x0; double x1; })arg3;
- (void)onBDReaderBoundesDidScrollWithReadModel:(id)arg0 scrollView:(id)arg1;
- (void)onBDReaderBoundesDidEndDraggingWithReadModel:(id)arg0 scrollView:(id)arg1;
- (void)onBDReaderDeallocWithReadModel:(id)arg0;
- (void)onBDReaderVCDidLoadWithReadModelImmediately:(id)arg0;
- (void)onBDReaderVCDidLoadWithReadModel:(id)arg0;
- (void)onBDReaderVCWillAppearWithReadModel:(id)arg0;
- (void)onBDReaderVCWillDisappearWithReadModel:(id)arg0;
- (void)onBDReaderVCDidAppearWithReadModel:(id)arg0;
- (void)onBDReaderVCDidDisappearWithReadModel:(id)arg0;
- (void)onBDReaderDidFinishParser:(id)arg0 bookInfo:(id)arg1 error:(id)arg2;
- (void)onBDReaderReadTimeStatisticWithReaderModel:(id)arg0 pageContext:(id)arg1 readTime:(double)arg2;
- (void)onBDReaderPageDidRenderFinishWithReaderModel:(id)arg0 pageContext:(id)arg1;
- (void)onBDReaderDidInitFinishWithReadModel:(id)arg0;
- (void)onBDReaderLayoutCompleteWithLayoutData:(id)arg0 chapterInfo:(id)arg1 readerModel:(id)arg2;
- (void)onBDReaderLayoutBeginWithChapterInfo:(id)arg0 readerModel:(id)arg1;
- (void)onBDReaderConfigChangeWithReaderModel:(id)arg0 config:(id)arg1;
- (void)onBDReaderPageModeChangeWithReaderModel:(id)arg0 oldPageMode:(unsigned long long)arg1 newPageMode:(unsigned long long)arg2;
- (void)onBDReaderLayoutTextPageDataComplete:(id)arg0 chapterInfo:(id)arg1 readerModel:(id)arg2;
- (void)onBDReaderClickLinkAttachmentWithReaderModel:(id)arg0 pageContext:(id)arg1 linkAtt:(id)arg2;
- (void)onBDReaderWillRenderPageContext:(id)arg0 readerModel:(id)arg1;
- (void)onBDReaderDidReloadCurrentPageLayout:(id)arg0 readerModel:(id)arg1;
- (void)onBDReaderWillReloadCurrentPageLayout:(id)arg0 readerModel:(id)arg1;
- (void)onBDReaderWillBeginTransition:(id)arg0 toPageContext:(id)arg1 pageChangeInfo:(id)arg2 readerModel:(id)arg3;
- (void)onBDReaderWillCompleteTransitionFromPageContext:(id)arg0 toPageContext:(id)arg1 pageChangeInfo:(id)arg2 readerModel:(id)arg3;
- (void)onBDReaderWillCancelTransitionFromPageContext:(id)arg0 toPageContext:(id)arg1 pageChangeInfo:(id)arg2 readerModel:(id)arg3;
- (void)onBDReaderDidFinishTransition:(id)arg0 fromPageContext:(id)arg1 pageChangeInfo:(id)arg2 readerModel:(id)arg3 completed:(BOOL)arg4;
- (void)onBDReaderTransitioningFromPageContext:(id)arg0 toPageContext:(id)arg1 percent:(double)arg2 changeInfo:(id)arg3 readerModel:(id)arg4;
- (void)onBDReaderSetViewControllerCompletion:(id)arg0 isForward:(BOOL)arg1 animated:(BOOL)arg2 finished:(BOOL)arg3;
- (void)onBDReaderContentPageViewControllerDidLoad:(id)arg0 pageContext:(id)arg1;
- (void)onBDReaderContentPageViewControllerWillAppear:(id)arg0 pageContext:(id)arg1;
- (void)onBDReaderContentPageViewControllerDidAppear:(id)arg0 pageContext:(id)arg1;
- (void)onBDReaderContentPageViewControllerWillDisappear:(id)arg0 pageContext:(id)arg1;
- (void)onBDReaderContentPageViewControllerDidDisappear:(id)arg0 pageContext:(id)arg1;
- (void)onBDReaderContentPageViewControllerDealloc:(id)arg0 pageContext:(id)arg1;
- (void)onBDReaderScrollPageModeDidScroll:(id)arg0 contentOffset:(struct CGPoint { double x0; double x1; })arg1;
- (void)onBDReaderDidGetEmptyPageFromPageContext:(id)arg0 toPageContext:(id)arg1 pageChangeInfo:(id)arg2 readerModel:(id)arg3;
- (void)onBDReaderLoadImage:(id)arg0 imageView:(id)arg1 url:(id)arg2 completion:(id /* block */)arg3;
- (void)onBDReaderLoadImage:(id)arg0 imageView:(id)arg1 url:(id)arg2 placeholder:(id)arg3 completion:(id /* block */)arg4;
- (void)onBDReaderClickImage:(id)arg0 attachment:(id)arg1 imageView:(id)arg2;
- (void)readerWillLoadBookInfo:(id)arg0;
- (void)readerDidLoadBookInfo:(id)arg0;
- (void)readerWillParseChapterContent:(id)arg0;
- (void)readerDidParseChapterContent:(id)arg0;
- (void)readerWillCallbackLayoutBeforeQueue:(id)arg0;
- (void)readerWillCallbackLayoutEnterQueue:(id)arg0;
- (void)readerDidLayoutChapter:(id)arg0;
- (void)onBDReaderFormatHtmlCompleteWithChapterInfo:(id)arg0 readerModel:(id)arg1;
- (void)onBDReaderFormatHtmlBeginWithChapterInfo:(id)arg0 readerModel:(id)arg1;
- (void)onBDReaderDidLayoutTextPageData:(id)arg0 isLastPage:(BOOL)arg1 chapterInfo:(id)arg2 readerModel:(id)arg3;
- (void)readerFirstPageFinish:(id)arg0;
- (void)readerWillLayoutChapter:(id)arg0;
- (void)readerCoverWillLoad:(id)arg0;
- (void)readerCoverDidLoad:(id)arg0;
- (void)onBDReaderDidFinishCalculatePageCount:(id)arg0 bookInfo:(id)arg1;
- (void)onBDReaderLoadFont:(id)arg0 chapterInfo:(id)arg1 fontAttributes:(id)arg2;
- (void)onBDReaderClickUnderLine:(id)arg0 context:(id)arg1;
- (void)onBDReaderActionDelegateReadyWithReaderModel:(id)arg0;

@end
