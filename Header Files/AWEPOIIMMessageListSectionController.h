//
//     Generated by private class-dump
//

@interface AWEPOIIMMessageListSectionController : AWEBaseListSectionController {
    BOOL _isRequesting;
}

@property (nonatomic) BOOL isRequesting;

+ (Class)sectionViewModelClass;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (void)didSelectItemAtIndex:(long long)arg0 model:(id)arg1;
- (void)setIsRequesting:(BOOL)arg0;
- (BOOL)isRequesting;
- (void)p_processListCollectionViewCellModel:(id)arg0 index:(long long)arg1;
- (void)p_processCustomerViewModelClick:(id)arg0 index:(long long)arg1;
- (void)trackClickCellEventWithParams:(id)arg0;
- (Class)cellClass;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
