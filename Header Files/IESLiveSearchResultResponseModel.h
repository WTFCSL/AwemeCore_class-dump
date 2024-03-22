//
//     Generated by private class-dump
//

@class NSArray, NSString, NSDictionary, NSNumber;

@interface IESLiveSearchResultResponseModel : IESLiveDynamicMTLModel <MTLJSONSerializing> {
    NSDictionary *_globalDoodleConfig;
}

@property (copy, nonatomic) NSArray *liveList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSDictionary *globalDoodleConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liveListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)globalDoodleConfig;
- (void)setGlobalDoodleConfig:(id)arg0;
- (void).cxx_destruct;

@end
