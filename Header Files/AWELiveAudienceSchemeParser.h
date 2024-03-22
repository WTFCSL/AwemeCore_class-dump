//
//     Generated by private class-dump
//

@class AWELiveAudienceGoodsDetailSchemeModel, AWELiveAudienceShelfTrackerSchemeModel, NSString, AWELiveAudienceGoodsDetailMPSchemeModel, AWELiveAudienceShelfOpenParamsSchemeModel;

@interface AWELiveAudienceSchemeParser : NSObject {
    BOOL _autoOpenLiveLifeShelf;
    AWELiveAudienceGoodsDetailSchemeModel *_goodsDetailModel;
    AWELiveAudienceShelfTrackerSchemeModel *_shelfTrackerModel;
    AWELiveAudienceShelfOpenParamsSchemeModel *_shelfOpenParamsModel;
    AWELiveAudienceGoodsDetailMPSchemeModel *_goodsDetailMPModel;
    NSString *_saleChannel;
}

@property (retain, nonatomic) AWELiveAudienceGoodsDetailSchemeModel *goodsDetailModel;
@property (retain, nonatomic) AWELiveAudienceShelfTrackerSchemeModel *shelfTrackerModel;
@property (retain, nonatomic) AWELiveAudienceShelfOpenParamsSchemeModel *shelfOpenParamsModel;
@property (retain, nonatomic) AWELiveAudienceGoodsDetailMPSchemeModel *goodsDetailMPModel;
@property (nonatomic) BOOL autoOpenLiveLifeShelf;
@property (copy, nonatomic) NSString *saleChannel;

- (id)initWithLLomParams:(id)arg0;
- (id)goodsDetailModel;
- (id)goodsDetailMPModel;
- (BOOL)autoOpenLiveLifeShelf;
- (void)setAutoOpenLiveLifeShelf:(BOOL)arg0;
- (id)saleChannel;
- (id)shelfTrackerModel;
- (id)shelfOpenParamsModel;
- (void)setSaleChannel:(id)arg0;
- (void)p_parseParams:(id)arg0;
- (void)setGoodsDetailModel:(id)arg0;
- (void)setShelfTrackerModel:(id)arg0;
- (void)setShelfOpenParamsModel:(id)arg0;
- (void)setGoodsDetailMPModel:(id)arg0;
- (void).cxx_destruct;

@end