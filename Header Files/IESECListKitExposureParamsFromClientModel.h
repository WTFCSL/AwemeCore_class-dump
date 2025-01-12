//
//     Generated by private class-dump
//

@class NSString;

@interface IESECListKitExposureParamsFromClientModel : MTLModel <MTLJSONSerializing> {
    NSString *_clientKey;
    NSString *_reportKey;
}

@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *reportKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)reportKey;
- (void)setReportKey:(id)arg0;
- (id)clientKey;
- (void).cxx_destruct;
- (void)setClientKey:(id)arg0;

@end
