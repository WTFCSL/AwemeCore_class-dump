//
//     Generated by private class-dump
//

@class NSString, BDNovelComicManager, BDNovelComicOpenModel, BDCRPageContext, BDNovelComicBaseView;

@interface BDNovelComicInsertViewController : UIViewController <BDCReaderInsertViewControllerProtocol> {
    BDCRPageContext *pageContext;
    BDNovelComicOpenModel *_readerModel;
    BDNovelComicManager *_readerManager;
    BDNovelComicBaseView *_contentView;
}

@property (retain, nonatomic) BDNovelComicOpenModel *readerModel;
@property (weak, nonatomic) BDNovelComicManager *readerManager;
@property (readonly, nonatomic) BDNovelComicBaseView *contentView;
@property (retain, nonatomic) BDCRPageContext *pageContext;
@property (readonly, nonatomic) BOOL shouldInterruptWhenTangent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bdcr_readerInsertedViewControllerThemeConfigChange:(id)arg0;
- (void)bdcr_readerInsertedViewControllerPageModeConfigChange:(id)arg0;
- (id)readerModel;
- (void)setReaderModel:(id)arg0;
- (id)readerManager;
- (void)setReaderManager:(id)arg0;
- (double)pageViewHeight;
- (void).cxx_destruct;
- (id)contentView;
- (void)viewDidLoad;
- (id)createContentView;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@end
