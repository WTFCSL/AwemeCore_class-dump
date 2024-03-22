//
//     Generated by private class-dump
//

@class NSString, IESECAtom, IESECRelationSearchResultActionHandler;

@interface IESECShopSearchResultGoodsListSectionController : IESECShopGoodsSectionController <IESECRelationSearchResultSectionControllerProtocol> {
    IESECRelationSearchResultActionHandler *_searchResultActionHandler;
    IESECAtom *_searchWordAtom;
    IESECAtom *_logPassbackAtom;
    IESECAtom *_searchIDAtom;
}

@property (nonatomic) BOOL isRecommend;
@property (retain, nonatomic) IESECAtom *searchWordAtom;
@property (retain, nonatomic) IESECAtom *logPassbackAtom;
@property (retain, nonatomic) IESECAtom *searchIDAtom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)logPassbackAtom;
- (id)searchWordAtom;
- (void)setSearchWordAtom:(id)arg0;
- (void)setLogPassbackAtom:(id)arg0;
- (id)searchIDAtom;
- (void)setSearchIDAtom:(id)arg0;
- (unsigned long long)searchType;
- (void).cxx_destruct;
- (id)actionHandler;

@end