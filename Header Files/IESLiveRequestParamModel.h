//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESLiveRequestParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *header;
@property (retain, nonatomic) id body;
@property (copy, nonatomic) NSString *responseType;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL usePrefetch;
@property (nonatomic) BOOL needCommonParams;

- (id)init;

@end