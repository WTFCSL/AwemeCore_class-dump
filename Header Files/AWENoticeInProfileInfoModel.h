//
//     Generated by private class-dump
//

@class NSString, AWENotificationModelNew;

@interface AWENoticeInProfileInfoModel : NSObject {
    AWENotificationModelNew *_noticeModel;
    NSString *_title;
    NSString *_text;
    long long _unreadCount;
    long long _type;
}

@property (retain, nonatomic) AWENotificationModelNew *noticeModel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long unreadCount;
@property (nonatomic) long long type;

- (id)noticeModel;
- (void)setNoticeModel:(id)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setUnreadCount:(long long)arg0;
- (long long)type;
- (id)title;
- (void)setType:(long long)arg0;
- (unsigned long long)hash;
- (id)text;
- (BOOL)isEqual:(id)arg0;
- (long long)unreadCount;
- (void)setTitle:(id)arg0;

@end