//
//     Generated by private class-dump
//

@class AWEPadBaseSectionViewModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPLVCinemaV2VajraCellController : AWEPadListReusableViewBaseController

@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)trackClick;
- (void)configView:(id)arg0;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)arg0 collectionViewSize:(struct CGSize { double x0; double x1; })arg1 contentSize:(struct CGSize { double x0; double x1; })arg2;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)arg0 collectionView:(id)arg1;
- (Class)viewClass;
- (void)didSelectItemAtIndex:(long long)arg0;

@end
