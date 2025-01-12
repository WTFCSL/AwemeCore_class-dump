//
//     Generated by private class-dump
//

@class BDReaderPageContext;

@protocol BDReaderInsertedViewControllerProtocol <NSObject>

@property (retain, nonatomic) BDReaderPageContext *pageContext;
@property (readonly, nonatomic) BOOL isEnableToolView;
@property (readonly, nonatomic) BOOL isInterruptAction;
@property (readonly, nonatomic) BOOL isEnableTapPage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } layoutSize;
@property (readonly, nonatomic) BOOL isFocusBottom;
@property (readonly, nonatomic) BOOL isFocusTop;

- (id)pageContext;
- (void)setPageContext:(id)arg0;

@optional

- (void)readerInsertedViewControllerThemeConfigChange:(id)arg0;
- (void)onInsertedViewControllerWillAppear;
- (void)onInsertedViewControllerWillDisappear;
- (void)onInsertedViewControllerDidAppear;
- (void)onInsertedViewControllerDidDisappear;
- (void)onInsertedViewControllerShowRate:(float)arg0;
- (void)onInsertedViewControllerRefreshCurrentPage;
- (id)viewsForBrieflyDisablingUserActivity;
- (void)readerInsertedViewControllerBackgroundConfigChange:(id)arg0;
- (BOOL)isEnableToolView;
- (BOOL)isEnableTapPage;
- (BOOL)isFocusBottom;
- (BOOL)isFocusTop;
- (BOOL)isInterruptAction;
- (struct CGSize { double x0; double x1; })layoutSize;
- (void)readerInsertedViewControllerLayoutConfigChange:(id)arg0;

@end
