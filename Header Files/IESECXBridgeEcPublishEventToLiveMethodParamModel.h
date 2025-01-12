//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface IESECXBridgeEcPublishEventToLiveMethodParamModel : BDXBridgeModel {
    NSString *_eventName;
    NSNumber *_timestamp;
    NSNumber *_isBroadcast;
    NSDictionary *_params;
}

@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSNumber *isBroadcast;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)timestamp;
- (void).cxx_destruct;
- (void)setEventName:(id)arg0;
- (void)setTimestamp:(id)arg0;
- (id)params;
- (id)eventName;
- (id)isBroadcast;
- (void)setParams:(id)arg0;
- (void)setIsBroadcast:(id)arg0;

@end
