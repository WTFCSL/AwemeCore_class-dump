//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface IESECLiveGoodsModelUpdateRequestEvent : NSObject {
    NSString *_apiPath;
    long long _promotionID;
    NSArray *_updateIndexPaths;
    NSArray *_items;
    NSDictionary *_extraRequestParams;
    NSDictionary *_extraInfo;
}

@property (retain, nonatomic) NSString *apiPath;
@property (nonatomic) long long promotionID;
@property (retain, nonatomic) NSArray *updateIndexPaths;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSDictionary *extraRequestParams;
@property (retain, nonatomic) NSDictionary *extraInfo;

- (void)setExtraInfo:(id)arg0;
- (long long)promotionID;
- (void)setPromotionID:(long long)arg0;
- (id)apiPath;
- (void)setApiPath:(id)arg0;
- (void)setExtraRequestParams:(id)arg0;
- (id)extraRequestParams;
- (id)updateIndexPaths;
- (void)setUpdateIndexPaths:(id)arg0;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (id)extraInfo;

@end
