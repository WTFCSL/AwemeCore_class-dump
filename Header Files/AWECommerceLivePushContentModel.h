//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWECommerceLivePushContentModel : MTLModel <MTLJSONSerializing> {
    NSArray *_adInfos;
    NSArray *_liveItems;
    NSString *_componenteExtra;
}

@property (copy, nonatomic) NSArray *adInfos;
@property (copy, nonatomic) NSArray *liveItems;
@property (copy, nonatomic) NSString *componenteExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adInfosJSONTransformer;
+ (id)liveItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)adInfos;
- (id)liveItems;
- (void)setAdInfos:(id)arg0;
- (void)setLiveItems:(id)arg0;
- (id)componenteExtra;
- (void)setComponenteExtra:(id)arg0;
- (void).cxx_destruct;

@end
