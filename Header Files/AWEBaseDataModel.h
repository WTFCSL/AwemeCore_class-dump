//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEBaseDataModel : AWERootModel {
    NSString *_requestID;
    NSDictionary *_logPassback;
}

@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSDictionary *logPassback;

+ (id)JSONKeyPathsByPropertyKey;

- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (id)sharedModelInfos;
- (void)setRequestID:(id)arg0;
- (id)requestID;
- (void).cxx_destruct;

@end