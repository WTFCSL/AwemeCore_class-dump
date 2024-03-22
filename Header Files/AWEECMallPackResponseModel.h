//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEECMallPackResponseModel : MTLModel <MTLJSONSerializing> {
    NSArray *_infos;
    NSString *_requestId;
}

@property (copy, nonatomic) NSArray *infos;
@property (retain, nonatomic) NSString *requestId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)infos;
- (id)requestId;
- (void)setInfos:(id)arg0;
- (void)setRequestId:(id)arg0;

@end
