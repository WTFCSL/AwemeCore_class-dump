//
//     Generated by private class-dump
//

@class NSString, IESECObjectMapper;

@interface IESECWindowSearchCellProvider : NSObject <IESECRelationSearchCellProvider> {
    IESECObjectMapper *_objectMapper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)relationCardViewModelWithGoodsModel:(id)arg0 tabStyle:(long long)arg1;
- (id)relationCardViewModelWithGoodsModel:(id)arg0;
- (id)singleColumnCellForCollectionContext:(id)arg0 scene:(long long)arg1 viewModel:(id)arg2 sectionController:(id)arg3 atIndex:(long long)arg4 delegate:(id)arg5 tabStyle:(long long)arg6;
- (id)doubleColumnCellForCollectionContext:(id)arg0 scene:(long long)arg1 viewModel:(id)arg2 sectionController:(id)arg3 atIndex:(long long)arg4 delegate:(id)arg5 tabStyle:(long long)arg6;
- (double)heightForItemAtIndex:(long long)arg0 viewModel:(id)arg1 tabStyle:(long long)arg2;
- (id)init;
- (void).cxx_destruct;

@end
