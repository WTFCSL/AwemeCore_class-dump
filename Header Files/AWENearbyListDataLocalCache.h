//
//     Generated by private class-dump
//

@class NSString, AWENearbyListDataResponse, AWENearbyCacheToken;

@interface AWENearbyListDataLocalCache : MTLModel <MTLJSONSerializing> {
    AWENearbyListDataResponse *_nearbyFeedRsp;
    AWENearbyCacheToken *_cacheToken;
}

@property (retain, nonatomic) AWENearbyListDataResponse *nearbyFeedRsp;
@property (retain, nonatomic) AWENearbyCacheToken *cacheToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithNearbyFeedRsp:(id)arg0;
- (id)nearbyFeedRsp;
- (void)setNearbyFeedRsp:(id)arg0;
- (void).cxx_destruct;
- (id)cacheToken;
- (void)setCacheToken:(id)arg0;

@end