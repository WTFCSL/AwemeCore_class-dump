//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface AWEVideoInteractInfo : MTLModel <MTLJSONSerializing> {
    NSString *_activityName;
    long long _userState;
    NSString *_schema;
    NSArray *_activityBtnList;
    double _nowTimeStamp;
    NSDictionary *_eventData;
}

@property (copy, nonatomic) NSString *activityName;
@property (nonatomic) long long userState;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSArray *activityBtnList;
@property (nonatomic) double nowTimeStamp;
@property (copy, nonatomic) NSDictionary *eventData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activityBtnListJSONTransformer;
+ (id)eventDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setUserState:(long long)arg0;
- (id)activityBtnList;
- (void)setActivityBtnList:(id)arg0;
- (double)nowTimeStamp;
- (void)setNowTimeStamp:(double)arg0;
- (void)setSchema:(id)arg0;
- (id)eventData;
- (void).cxx_destruct;
- (id)schema;
- (void)setEventData:(id)arg0;
- (id)activityName;
- (long long)userState;
- (void)setActivityName:(id)arg0;

@end