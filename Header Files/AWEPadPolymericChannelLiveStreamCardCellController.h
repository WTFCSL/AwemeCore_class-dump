//
//     Generated by private class-dump
//

@class NSArray, AWEPadBaseSectionViewModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPadPolymericChannelLiveStreamCardCellController : AWEPadListReusableViewBaseController {
    NSArray *_ownerUserArray;
}

@property (retain, nonatomic) NSArray *ownerUserArray;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;

- (id)diffIdentifier;
- (long long)columnNumWithCollectionView:(id)arg0;
- (void)configView:(id)arg0;
- (void)viewDidDisplay;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)arg0 collectionViewSize:(struct CGSize { double x0; double x1; })arg1 contentSize:(struct CGSize { double x0; double x1; })arg2;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)arg0 collectionView:(id)arg1;
- (id)ownerUserArray;
- (id)liveCommonTrackParams;
- (void)setOwnerUserArray:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void).cxx_destruct;
- (Class)viewClass;
- (void)didSelectItemAtIndex:(long long)arg0;

@end