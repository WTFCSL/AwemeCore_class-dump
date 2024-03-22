//
//     Generated by private class-dump
//

@class NSString;

@interface AFDIMChatMoveToFriendsSettings : MTLModel <MTLJSONSerializing> {
    BOOL _bubbleTextShowNum;
    long long _showIntervalMinCount;
    long long _hitExitThreshold;
    long long _exitCount;
    long long _dismissSecondCount;
    long long _bubbleDelayTime;
}

@property (nonatomic) long long showIntervalMinCount;
@property (nonatomic) long long hitExitThreshold;
@property (nonatomic) long long exitCount;
@property (nonatomic) long long dismissSecondCount;
@property (nonatomic) long long bubbleDelayTime;
@property (nonatomic) BOOL bubbleTextShowNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)showIntervalMinCount;
- (long long)hitExitThreshold;
- (long long)exitCount;
- (long long)bubbleDelayTime;
- (BOOL)bubbleTextShowNum;
- (long long)dismissSecondCount;
- (void)setShowIntervalMinCount:(long long)arg0;
- (void)setHitExitThreshold:(long long)arg0;
- (void)setExitCount:(long long)arg0;
- (void)setDismissSecondCount:(long long)arg0;
- (void)setBubbleDelayTime:(long long)arg0;
- (void)setBubbleTextShowNum:(BOOL)arg0;
- (id)init;

@end
