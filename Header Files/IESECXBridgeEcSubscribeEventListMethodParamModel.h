//
//     Generated by private class-dump
//

@class NSNumber, NSArray;

@interface IESECXBridgeEcSubscribeEventListMethodParamModel : BDXBridgeModel {
    NSNumber *_timestamp;
    NSNumber *_clearExistEvent;
    NSArray *_eventList;
}

@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSNumber *clearExistEvent;
@property (retain, nonatomic) NSArray *eventList;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setEventList:(id)arg0;
- (id)eventList;
- (id)clearExistEvent;
- (void)setClearExistEvent:(id)arg0;
- (id)timestamp;
- (void).cxx_destruct;
- (void)setTimestamp:(id)arg0;

@end