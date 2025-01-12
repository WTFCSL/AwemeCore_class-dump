//
//     Generated by private class-dump
//

@class NSDictionary;

@interface AWEInteractModularizationNoticeTrackerParams : AWEBaseApiModel {
    NSDictionary *_notificationNoticeParams;
    NSDictionary *_notificationMessageInnerMessageParams;
    NSDictionary *_messageStopNoticeParams;
    NSDictionary *_messageRestoreNoticeParams;
}

@property (retain, nonatomic) NSDictionary *notificationNoticeParams;
@property (retain, nonatomic) NSDictionary *notificationMessageInnerMessageParams;
@property (retain, nonatomic) NSDictionary *messageStopNoticeParams;
@property (retain, nonatomic) NSDictionary *messageRestoreNoticeParams;

+ (id)JSONKeyPathsByPropertyKey;

- (id)notificationMessageInnerMessageParams;
- (id)messageRestoreNoticeParams;
- (id)messageStopNoticeParams;
- (id)notificationNoticeParams;
- (void)setNotificationNoticeParams:(id)arg0;
- (void)setNotificationMessageInnerMessageParams:(id)arg0;
- (void)setMessageStopNoticeParams:(id)arg0;
- (void)setMessageRestoreNoticeParams:(id)arg0;
- (void).cxx_destruct;

@end
