//
//     Generated by private class-dump
//

@interface AWECommonUserListSectionController : AWERelationUserListBaseSectionController {
    Class _cellCls;
}

@property (retain, nonatomic) Class cellCls;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)sectionWillDisplayCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (void)didSelectItemAtIndex:(long long)arg0 model:(id)arg1;
- (id)customUserProps:(id)arg0;
- (void)showMenuWithUser:(id)arg0;
- (Class)cellCls;
- (void)showMoreMenuWithUserAdapterModel:(id)arg0;
- (void)setCellCls:(Class)arg0;
- (void).cxx_destruct;
- (long long)type;
- (Class)cellClass;
- (BOOL)isMine;
- (BOOL)isSearch;
- (id)pageIdentifier;
- (void)moreButtonTapped:(id)arg0;

@end
