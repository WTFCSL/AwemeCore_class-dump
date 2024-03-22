//
//     Generated by private class-dump
//

@class AWEPadBaseSectionViewModel, AWEPadBaseListSectionController, NSString;
@protocol AWEMinorAlbumProtocol, AWEPLVSectionViewModelProtocol;

@interface AWEPLVTeenAlbumViewModel : NSObject <AWEPLVCommonCardViewModelProtocol> {
    BOOL isCollected;
    long long dataType;
    AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *_sectionViewModel;
    AWEPadBaseListSectionController *_sectionController;
    id<AWEMinorAlbumProtocol> _model;
}

@property (retain, nonatomic) id<AWEMinorAlbumProtocol> model;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;
@property (weak, nonatomic) AWEPadBaseListSectionController *sectionController;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) long long dataType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCollected;
- (void)setIsCollected:(BOOL)arg0;
- (id)sectionViewModel;
- (void)setSectionViewModel:(id)arg0;
- (void)trackEvent:(id)arg0 withExtraParams:(id)arg1;
- (void)historyClickReport;
- (void)onFavoriteTagClicked;
- (void)transferToTeenAlbumPlayer:(id)arg0;
- (void)trackEvent:(id)arg0 withExtraParams:(id)arg1 teenAlbumModel:(id)arg2;
- (struct CGSize { double x0; double x1; })normalCalculateSizeWithIndex:(long long)arg0 collectionViewSize:(struct CGSize { double x0; double x1; })arg1 contentSize:(struct CGSize { double x0; double x1; })arg2;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setDataType:(long long)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setSectionController:(id)arg0;
- (long long)dataType;
- (id)sectionController;
- (void)didSelectItemAtIndex:(long long)arg0;

@end