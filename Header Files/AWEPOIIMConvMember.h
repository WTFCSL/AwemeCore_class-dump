//
//     Generated by private class-dump
//

@class NSPointerArray, NSString;
@protocol AWEPOIIMConvUseMember;

@interface AWEPOIIMConvMember : NSObject <AWEPOIIMConvMemberObserver, AWEPOIIMConvMember> {
    BOOL _tempIsSelf;
    id<AWEPOIIMConvUseMember> _realMember;
    NSPointerArray *_observers;
}

@property (retain, nonatomic) NSPointerArray *observers;
@property (nonatomic) BOOL tempIsSelf;
@property (retain, nonatomic) id<AWEPOIIMConvUseMember> realMember;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long memberRoleType;
@property (readonly, nonatomic) long long memberBizRole;
@property (readonly, copy, nonatomic) NSString *pigeonUid;
@property (readonly, copy, nonatomic) NSString *senderAvatar;
@property (readonly, copy, nonatomic) NSString *senderName;
@property (readonly, nonatomic) BOOL isUserSelf;

- (id)pigeonUid;
- (BOOL)isUserSelf;
- (long long)memberBizRole;
- (long long)memberRoleType;
- (id)senderAvatar;
- (void)memeberDidUpdate:(id)arg0;
- (id)realMember;
- (void)setRealMember:(id)arg0;
- (BOOL)tempIsSelf;
- (void)bindRealMember:(id)arg0;
- (void)setTempIsSelf:(BOOL)arg0;
- (void)notifyObservers;
- (void).cxx_destruct;
- (id)observers;
- (void)registerObserver:(id)arg0;
- (void)setObservers:(id)arg0;
- (id)senderName;

@end
