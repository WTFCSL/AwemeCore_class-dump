//
//     Generated by private class-dump
//

@class AWEIMUser, NSString, NSURL;
@protocol AWEIMRTVConversation;

@interface AWERTVInviteFriendsDataItem : NSObject {
    BOOL _isUser;
    BOOL _selected;
    BOOL _online;
    NSString *_identifier;
    NSString *_secID;
    NSString *_name;
    NSURL *_avartarURL;
    long long _lastActiveTime;
    NSString *_activeUserString;
    unsigned long long _searchUserType;
    AWEIMUser *_userValue;
    id<AWEIMRTVConversation> _groupValue;
    struct _NSRange { unsigned long long location; unsigned long long length; } _matchRange;
}

@property (retain, nonatomic) AWEIMUser *userValue;
@property (retain, nonatomic) id<AWEIMRTVConversation> groupValue;
@property (readonly, nonatomic) BOOL isUser;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *secID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSURL *avartarURL;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL online;
@property (nonatomic) long long lastActiveTime;
@property (copy, nonatomic) NSString *activeUserString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } matchRange;
@property (nonatomic) unsigned long long searchUserType;

- (id)aliasPinYinSearchObj;
- (void)setSearchUserType:(unsigned long long)arg0;
- (id)nicknamePinYinSearchObj;
- (id)contactNamePinYinSearchObj;
- (id)fakeUserID;
- (unsigned long long)searchUserType;
- (id)userValue;
- (id)secID;
- (id)avartarURL;
- (id)activeUserString;
- (void)setActiveUserString:(id)arg0;
- (void)setUserValue:(id)arg0;
- (void)setGroupValue:(id)arg0;
- (BOOL)selected;
- (void)setOnline:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithUser:(id)arg0;
- (id)identifier;
- (void)setSelected:(BOOL)arg0;
- (BOOL)online;
- (id)name;
- (id)initWithGroup:(id)arg0;
- (BOOL)isUser;
- (long long)lastActiveTime;
- (void)setLastActiveTime:(long long)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })matchRange;
- (void)setMatchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (id)groupValue;

@end
