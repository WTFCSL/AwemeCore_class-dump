//
//     Generated by private class-dump
//

@class IESECRelationTransparentView, NSString, UIImageView, IESECCollectionViewSectionColumnLayout, UILabel;

@interface IESECShopSearchResultEmptySectionController : IGListSectionController <IESECCollectionViewSectionLayoutProtocol> {
    UIImageView *_errorImageView;
    UILabel *_errorLabel;
    IESECRelationTransparentView *_contentView;
    IESECCollectionViewSectionColumnLayout *_sectionLayout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)arg0;
- (id)sectionLayout;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end