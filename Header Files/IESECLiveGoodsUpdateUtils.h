//
//     Generated by private class-dump
//

@interface IESECLiveGoodsUpdateUtils : NSObject

+ (id)updatedGoodsModelsWithIdsArray:(id)arg0 inGoodsModelList:(id)arg1;
+ (id)modelWithID:(id)arg0 andIDType:(long long)arg1 inModelList:(id)arg2;
+ (id)updateedGoodsModelWithPromotionID:(long long)arg0 inGoodsViewModels:(id)arg1;
+ (id)stringArrayFromPBIntArray:(id)arg0;
+ (id)indexPathsOfGoodsModelList:(id)arg0 productIdsArray:(id)arg1 passingTest:(id /* block */)arg2;
+ (id)IDsOfQueryType:(long long)arg0 IDType:(long long)arg1 inModelList:(id)arg2;
+ (id)updatedGoodsModelsWithIdsArray:(id)arg0 inGoodsViewModes:(id)arg1;
+ (id)indexPathsOfGoodsViewModes:(id)arg0 productIdsArray:(id)arg1 passingTest:(id /* block */)arg2;
+ (id)IDsOfQueryType:(long long)arg0 IDType:(long long)arg1 inGoodsViewModes:(id)arg2;
+ (id)indexPathOfGoodsViewModes:(id)arg0 promotionID:(id)arg1 passingTest:(id /* block */)arg2;
+ (id)goodsModelIDMapFromGoodsList:(id)arg0 IDType:(long long)arg1;
+ (id)goodsModelIDMapFromGoodsViewModes:(id)arg0 IDType:(long long)arg1;

@end
