//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEECOMIMChatListConfigModel : NSObject {
    BOOL _isNative;
    NSArray *_noticeGroupList;
    long long _msgUnreadCountWithinDays;
}

@property (retain, nonatomic) NSArray *noticeGroupList;
@property (nonatomic) BOOL isNative;
@property (nonatomic) long long msgUnreadCountWithinDays;

- (void)setIsNative:(BOOL)arg0;
- (void)setNoticeGroupList:(id)arg0;
- (void)setMsgUnreadCountWithinDays:(long long)arg0;
- (id)noticeGroupList;
- (long long)msgUnreadCountWithinDays;
- (BOOL)isNative;
- (void).cxx_destruct;

@end
