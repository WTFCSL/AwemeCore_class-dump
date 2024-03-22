//
//     Generated by private class-dump
//

@class AWEUserProfileSpecificationTaskInfo, NSString, NSDictionary;

@interface AWEUserProfileSpecificationTip : MTLModel <MTLJSONSerializing> {
    AWEUserProfileSpecificationTaskInfo *_taskInfo;
    NSString *_jumpUrl;
    NSString *_eventKey;
    NSString *_eventTrackingString;
    NSDictionary *_eventTracking;
    NSDictionary *_eventParams;
}

@property (retain, nonatomic) AWEUserProfileSpecificationTaskInfo *taskInfo;
@property (copy, nonatomic) NSString *jumpUrl;
@property (copy, nonatomic) NSString *eventKey;
@property (copy, nonatomic) NSString *eventTrackingString;
@property (retain, nonatomic) NSDictionary *eventTracking;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)jumpUrl;
- (void)setJumpUrl:(id)arg0;
- (void)setEventParams:(id)arg0;
- (id)eventTracking;
- (void)setEventTracking:(id)arg0;
- (void)trackWithParams:(id)arg0 type:(unsigned long long)arg1;
- (id)eventTrackingString;
- (void)setEventTrackingString:(id)arg0;
- (id)eventKey;
- (void).cxx_destruct;
- (id)taskInfo;
- (void)setEventKey:(id)arg0;
- (void)setTaskInfo:(id)arg0;
- (id)eventParams;

@end
