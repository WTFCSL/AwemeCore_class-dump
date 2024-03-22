//
//     Generated by private class-dump
//

@class AWETeenGeneralIPAlbumCardModel, AWETeenGeneralWikiCardModel, NSString, AWETeenGeneralResourceGroupModel, AWETeenGeneralVideoCardModel, AWETeenGeneralAlbumCardModel, AWETeenGeneralAuthorListCardModel, AWETeenGeneralAuthorVideoCardModel;

@interface AWETeenGeneralCardModel : AWEBaseApiModel <IGListDiffable> {
    NSString *_cardID;
    unsigned long long _cardType;
    AWETeenGeneralVideoCardModel *_videoModel;
    AWETeenGeneralAlbumCardModel *_albumModel;
    AWETeenGeneralAuthorListCardModel *_authorListModel;
    AWETeenGeneralAuthorVideoCardModel *_authorVideoModel;
    AWETeenGeneralWikiCardModel *_wikiModel;
    AWETeenGeneralResourceGroupModel *_guideCardModel;
    AWETeenGeneralIPAlbumCardModel *_ipAlbumCardModel;
    NSString *_searchAttachInfo;
}

@property (copy, nonatomic) NSString *cardID;
@property (nonatomic) unsigned long long cardType;
@property (retain, nonatomic) AWETeenGeneralVideoCardModel *videoModel;
@property (retain, nonatomic) AWETeenGeneralAlbumCardModel *albumModel;
@property (retain, nonatomic) AWETeenGeneralAuthorListCardModel *authorListModel;
@property (retain, nonatomic) AWETeenGeneralAuthorVideoCardModel *authorVideoModel;
@property (retain, nonatomic) AWETeenGeneralWikiCardModel *wikiModel;
@property (retain, nonatomic) AWETeenGeneralResourceGroupModel *guideCardModel;
@property (retain, nonatomic) AWETeenGeneralIPAlbumCardModel *ipAlbumCardModel;
@property (copy, nonatomic) NSString *searchAttachInfo;

+ (id)videoModelJSONTransformer;
+ (id)albumModelJSONTransformer;
+ (id)wikiModelJSONTransformer;
+ (id)guideCardModelCardJSONTransformer;
+ (id)authorListModelJSONTransformer;
+ (id)authorVideoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (id)videoModel;
- (void)setVideoModel:(id)arg0;
- (void)setAlbumModel:(id)arg0;
- (id)albumModel;
- (id)guideCardModel;
- (id)authorListModel;
- (id)authorVideoModel;
- (void)setAuthorListModel:(id)arg0;
- (void)setAuthorVideoModel:(id)arg0;
- (id)wikiModel;
- (void)setWikiModel:(id)arg0;
- (void)setGuideCardModel:(id)arg0;
- (id)ipAlbumCardModel;
- (void)setIpAlbumCardModel:(id)arg0;
- (id)searchAttachInfo;
- (void)setSearchAttachInfo:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)cardType;
- (void)setCardType:(unsigned long long)arg0;
- (id)cardID;
- (void)setCardID:(id)arg0;

@end
