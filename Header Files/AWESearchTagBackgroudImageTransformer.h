//
//     Generated by private class-dump
//

@class NSString;

@interface AWESearchTagBackgroudImageTransformer : NSObject <AWEWebImageTransformProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTransformer;

- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:(id)arg0;

@end
