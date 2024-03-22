//
//     Generated by private class-dump
//

@class HTSLiveUser, IESLiveWaitingListUser, NSString, IESLiveLinkMicAudienceListResponse_ListUser;

@interface IESLiveLinkMicListUserAdapterModel : NSObject {
    BOOL _applicationHasExpired;
    BOOL _isAddPrice;
    BOOL _isActive;
    int _linkStatus;
    int _listUserType;
    HTSLiveUser *_user;
    IESLiveWaitingListUser *_waitingListUser;
    IESLiveLinkMicAudienceListResponse_ListUser *_audienceResponseListUser;
    long long _linkmicId;
    long long _modifyTime;
    NSString *_linkmicIdStr;
    NSString *_applicationReason;
    NSString *_last7DaysGiftCountText;
    NSString *_inviteListLast7DaysGiftCountText;
    NSString *_fanTicket;
    long long _addPriceTimeMs;
    long long _paidAmount;
    long long _lastInvitedTimeMs;
}

@property (retain, nonatomic) HTSLiveUser *user;
@property (retain, nonatomic) IESLiveWaitingListUser *waitingListUser;
@property (retain, nonatomic) IESLiveLinkMicAudienceListResponse_ListUser *audienceResponseListUser;
@property (nonatomic) long long linkmicId;
@property (nonatomic) long long modifyTime;
@property (copy, nonatomic) NSString *linkmicIdStr;
@property (copy, nonatomic) NSString *applicationReason;
@property (nonatomic) BOOL applicationHasExpired;
@property (copy, nonatomic) NSString *last7DaysGiftCountText;
@property (copy, nonatomic) NSString *inviteListLast7DaysGiftCountText;
@property (copy, nonatomic) NSString *fanTicket;
@property (nonatomic) BOOL isAddPrice;
@property (nonatomic) long long addPriceTimeMs;
@property (nonatomic) long long paidAmount;
@property (nonatomic) int linkStatus;
@property (nonatomic) int listUserType;
@property (nonatomic) long long lastInvitedTimeMs;
@property (nonatomic) BOOL isActive;

- (long long)modifyTime;
- (long long)paidAmount;
- (void)setPaidAmount:(long long)arg0;
- (void)setModifyTime:(long long)arg0;
- (void)setLinkStatus:(int)arg0;
- (id)linkmicIdStr;
- (long long)linkmicId;
- (void)setLinkmicIdStr:(id)arg0;
- (id)fanTicket;
- (BOOL)applicationHasExpired;
- (id)applicationReason;
- (id)last7DaysGiftCountText;
- (int)listUserType;
- (BOOL)isAddPrice;
- (long long)addPriceTimeMs;
- (long long)lastInvitedTimeMs;
- (void)setLastInvitedTimeMs:(long long)arg0;
- (void)setFanTicket:(id)arg0;
- (void)setLinkmicId:(long long)arg0;
- (void)setWaitingListUser:(id)arg0;
- (void)setApplicationReason:(id)arg0;
- (void)setApplicationHasExpired:(BOOL)arg0;
- (void)setLast7DaysGiftCountText:(id)arg0;
- (void)setIsAddPrice:(BOOL)arg0;
- (void)setAddPriceTimeMs:(long long)arg0;
- (void)setListUserType:(int)arg0;
- (void)setAudienceResponseListUser:(id)arg0;
- (void)setInviteListLast7DaysGiftCountText:(id)arg0;
- (id)initWithWaitingListUser:(id)arg0;
- (id)initWithListResponseUser:(id)arg0;
- (id)waitingListUser;
- (id)audienceResponseListUser;
- (id)inviteListLast7DaysGiftCountText;
- (void)setUser:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (BOOL)isActive;
- (int)linkStatus;

@end
