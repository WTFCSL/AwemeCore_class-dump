//
//     Generated by private class-dump
//

@class NSString;

@interface AWEGoodsServiceSubscribeInfo : MTLModel <MTLJSONSerializing> {
    BOOL _subscribeStatus;
}

@property (nonatomic) BOOL subscribeStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)subscribeStatus;
- (void)setSubscribeStatus:(BOOL)arg0;

@end