//
//     Generated by private class-dump
//

@class NSString, BDNovelReadingCatalogData;
@protocol BDNovelReadingCatalogViewDelegate;

@interface BDNovelReaderBaseCatalogView : UIView <BDReaderInsertViewProtocol> {
    BOOL _isReverse;
    id<BDNovelReadingCatalogViewDelegate> _delegate;
    BDNovelReadingCatalogData *_catalogData;
}

@property (weak, nonatomic) id<BDNovelReadingCatalogViewDelegate> delegate;
@property (nonatomic) BOOL isReverse;
@property (retain, nonatomic) BDNovelReadingCatalogData *catalogData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isReverse;
- (void)setIsReverse:(BOOL)arg0;
- (id)readerInsertedViewRequestInsertedView;
- (void)updateWithCatalogData:(id)arg0;
- (void)onChapterDataReady;
- (void)updateWithConfigData:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)catalogData;
- (void)setCatalogData:(id)arg0;

@end
