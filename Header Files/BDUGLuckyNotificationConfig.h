//
//     Generated by private class-dump
//

@class NSArray;
@protocol BDUGLuckyAppIdNotificationBlockList;

@interface BDUGLuckyNotificationConfig : BDUGLuckyJSONModel {
    NSArray<BDUGLuckyAppIdNotificationBlockList> *_appIdNotificationBlockList;
    double _popupInterval;
    double _maxPopupQueueLockedDuration;
}

@property (copy, nonatomic) NSArray<BDUGLuckyAppIdNotificationBlockList> *appIdNotificationBlockList;
@property (nonatomic) double popupInterval;
@property (nonatomic) double maxPopupQueueLockedDuration;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (double)maxPopupQueueLockedDuration;
- (id)appIdNotificationBlockList;
- (void)setAppIdNotificationBlockList:(id)arg0;
- (double)popupInterval;
- (void)setPopupInterval:(double)arg0;
- (void)setMaxPopupQueueLockedDuration:(double)arg0;
- (void).cxx_destruct;

@end
