//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEIMNotificationGroupDataRequestModelNew : MTLModel <MTLJSONSerializing> {
    NSNumber *_maxTime;
    NSNumber *_minTime;
    NSNumber *_count;
    NSNumber *_group;
    NSNumber *_isMarkRead;
    NSNumber *_isInteractive;
}

@property (retain, nonatomic) NSNumber *maxTime;
@property (retain, nonatomic) NSNumber *minTime;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) NSNumber *group;
@property (retain, nonatomic) NSNumber *isMarkRead;
@property (retain, nonatomic) NSNumber *isInteractive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setIsMarkRead:(id)arg0;
- (id)isMarkRead;
- (void)setCount:(id)arg0;
- (void)setMaxTime:(id)arg0;
- (void).cxx_destruct;
- (id)group;
- (id)minTime;
- (id)count;
- (id)isInteractive;
- (id)maxTime;
- (void)setGroup:(id)arg0;
- (void)setMinTime:(id)arg0;
- (id)initWithGroup:(id)arg0;
- (void)setIsInteractive:(id)arg0;

@end
