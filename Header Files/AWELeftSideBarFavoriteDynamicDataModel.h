//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWELeftSideBarFavoriteDynamicDataModel : MTLModel <MTLJSONSerializing> {
    BOOL _isCacheData;
    NSArray *_data;
}

@property (copy, nonatomic) NSArray *data;
@property (nonatomic) BOOL isCacheData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (BOOL)isCacheData;
- (void)setIsCacheData:(BOOL)arg0;

@end
