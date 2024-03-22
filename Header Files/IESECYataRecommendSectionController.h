//
//     Generated by private class-dump
//

@class NSString, IESECYataRecommendSectionViewModel;

@interface IESECYataRecommendSectionController : IGListSectionController <IGListSupplementaryViewSource, YataListSectionController> {
    IESECYataRecommendSectionViewModel *_viewModel;
}

@property (retain, nonatomic) IESECYataRecommendSectionViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (id)cellForItemAtIndex:(long long)arg0;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)arg0 atIndex:(long long)arg1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)arg0 atIndex:(long long)arg1;
- (id)initWithSectionViewModel:(id)arg0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end
