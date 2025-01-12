//
//     Generated by private class-dump
//

@class BDNovelComicConfig, BDNovelComicBaseViewKey, BDNovelComicOpenModel, BDNovelComicManager, BDNovelComicInfo, NSString;

@interface BDNovelComicBaseView : UIView <BDCReaderInsertViewProtocol> {
    BDNovelComicOpenModel *_readerModel;
    BDNovelComicManager *_readerManager;
    BDNovelComicBaseViewKey *_uniqueKey;
}

@property (retain, nonatomic) BDNovelComicBaseViewKey *uniqueKey;
@property (retain, nonatomic) BDNovelComicOpenModel *readerModel;
@property (readonly, nonatomic) BDNovelComicConfig *config;
@property (weak, nonatomic) BDNovelComicManager *readerManager;
@property (readonly, nonatomic) BDNovelComicInfo *comicInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bdcr_readerInsertedViewThemeConfigChange:(id)arg0;
- (id)bdcr_readerInsertedViewRequestInsertedView;
- (id)readerModel;
- (void)setReaderModel:(id)arg0;
- (void)bdcr_readerInsertedViewReaderConfigChange:(id)arg0;
- (void)readerConfigChange:(id)arg0;
- (id)readerManager;
- (id)comicInfo;
- (void)readerThemeChange:(id)arg0;
- (void)viewWillDidLoad;
- (void)setReaderManager:(id)arg0;
- (id)uniqueKey;
- (void).cxx_destruct;
- (id)config;
- (void)setUniqueKey:(id)arg0;

@end
