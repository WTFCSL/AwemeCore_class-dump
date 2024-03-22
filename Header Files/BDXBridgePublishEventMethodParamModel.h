//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSNumber;

@interface BDXBridgePublishEventMethodParamModel : BDXBridgeModel {
    BOOL _isBroadcast;
    NSString *_eventName;
    NSDictionary *_params;
    NSNumber *_timestamp;
}

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSNumber *timestamp;
@property (nonatomic) BOOL isBroadcast;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (id)timestamp;
- (void).cxx_destruct;
- (void)setEventName:(id)arg0;
- (void)setTimestamp:(id)arg0;
- (id)params;
- (id)eventName;
- (BOOL)isBroadcast;
- (void)setParams:(id)arg0;
- (void)setIsBroadcast:(BOOL)arg0;

@end
