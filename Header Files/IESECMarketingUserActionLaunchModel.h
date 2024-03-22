//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSArray;

@interface IESECMarketingUserActionLaunchModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_statusCode;
    NSString *_statusMsg;
    NSArray *_dataList;
}

@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSArray *dataList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setDataList:(id)arg0;
- (id)statusMsg;
- (void)setStatusMsg:(id)arg0;
- (id)statusCode;
- (void)setStatusCode:(id)arg0;
- (void).cxx_destruct;
- (id)dataList;

@end
