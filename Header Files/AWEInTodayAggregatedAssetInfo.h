//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, NSNumber;

@interface AWEInTodayAggregatedAssetInfo : MTLModel <MTLJSONSerializing> {
    NSString *_assetType;
    NSArray *_tempFilePaths;
    NSString *_localIdentifier;
    NSNumber *_createTime;
}

@property (readonly, copy, nonatomic) NSString *assetType;
@property (readonly, copy, nonatomic) NSArray *tempFilePaths;
@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSNumber *createTime;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithAssetType:(id)arg0 localIdentifier:(id)arg1 tempFilePath:(id)arg2 createTime:(id)arg3;
- (id)tempFilePaths;
- (void).cxx_destruct;
- (id)assetType;
- (id)localIdentifier;
- (id)createTime;

@end
