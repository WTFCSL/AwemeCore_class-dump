//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESLiveReportAppLogParamModel : IESLiveBridgeModel {
    NSString *_eventName;
    NSDictionary *_params;
    NSString *_noPrefix;
}

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *noPrefix;

+ (id)modelCustomPropertyMapper;

- (id)noPrefix;
- (void)setNoPrefix:(id)arg0;
- (void).cxx_destruct;
- (void)setEventName:(id)arg0;
- (id)params;
- (id)eventName;
- (void)setParams:(id)arg0;

@end
