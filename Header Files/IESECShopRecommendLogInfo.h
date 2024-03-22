//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESECShopRecommendLogInfo : MTLModel <MTLJSONSerializing> {
    NSNumber *_commodityType;
    NSString *_recommendInfo;
    NSString *_requestID;
}

@property (retain, nonatomic) NSNumber *commodityType;
@property (copy, nonatomic) NSString *recommendInfo;
@property (copy, nonatomic) NSString *requestID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)recommendInfo;
- (void)setRecommendInfo:(id)arg0;
- (id)commodityType;
- (void)setCommodityType:(id)arg0;
- (void)setRequestID:(id)arg0;
- (id)requestID;
- (void).cxx_destruct;

@end