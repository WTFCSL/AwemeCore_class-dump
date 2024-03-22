//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface IESECListKitXBridgeEcPublishEventMethodParamModel : BDXBridgeModel {
    NSString *_eventName;
    NSNumber *_timestamp;
    NSNumber *_isBroadcast;
    NSNumber *_isGlobal;
    NSNumber *_isSticky;
    NSDictionary *_params;
}

@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSNumber *isBroadcast;
@property (retain, nonatomic) NSNumber *isGlobal;
@property (retain, nonatomic) NSNumber *isSticky;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setIsSticky:(id)arg0;
- (void)setIsGlobal:(id)arg0;
- (id)timestamp;
- (void).cxx_destruct;
- (void)setEventName:(id)arg0;
- (void)setTimestamp:(id)arg0;
- (id)params;
- (id)eventName;
- (id)isSticky;
- (id)isBroadcast;
- (void)setParams:(id)arg0;
- (void)setIsBroadcast:(id)arg0;
- (id)isGlobal;

@end
