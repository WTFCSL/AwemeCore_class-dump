//
//     Generated by private class-dump
//

@class AWEPadBaseSectionViewModel, AWEPLVTeenAlbumViewModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPLVTeenAlbumHistoryCellController : AWEPadListReusableViewBaseController {
    double _containerWidth;
    AWEPLVTeenAlbumViewModel *_viewModel;
}

@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;
@property (nonatomic) double containerWidth;
@property (retain, nonatomic) AWEPLVTeenAlbumViewModel *viewModel;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)configView:(id)arg0;
- (void)viewDidDisplay;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)arg0 collectionView:(id)arg1;
- (long long)breakPointCardColumnNum;
- (void).cxx_destruct;
- (Class)viewClass;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)didSelectItemAtIndex:(long long)arg0;
- (void)setContainerWidth:(double)arg0;
- (double)containerWidth;

@end
