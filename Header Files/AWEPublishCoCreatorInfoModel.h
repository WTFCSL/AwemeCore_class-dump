//
//     Generated by private class-dump
//

@class NSArray, AWECoCreatorSerachExtraModel, NSString;

@interface AWEPublishCoCreatorInfoModel : AWEBaseApiModel <MTLJSONSerializing> {
    NSArray *_cocreatorInfos;
    AWECoCreatorSerachExtraModel *_extra;
}

@property (copy, nonatomic) NSArray *cocreatorInfos;
@property (retain, nonatomic) AWECoCreatorSerachExtraModel *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cocreatorInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)cocreatorInfos;
- (void)setCocreatorInfos:(id)arg0;
- (void).cxx_destruct;
- (id)extra;

@end
