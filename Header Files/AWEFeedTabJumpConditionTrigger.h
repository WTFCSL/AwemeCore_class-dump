//
//     Generated by private class-dump
//

@interface AWEFeedTabJumpConditionTrigger : NSObject {
    BOOL _isTriggered;
    long long _eventType;
}

@property (nonatomic) long long eventType;
@property (nonatomic) BOOL isTriggered;

+ (id)triggerWithEventType:(long long)arg0;

- (void)setIsTriggered:(BOOL)arg0;
- (BOOL)isTriggered;
- (long long)eventType;
- (void)setEventType:(long long)arg0;

@end
