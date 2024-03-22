//
//     Generated by private class-dump
//

@class NSString, HTSLiveUser;

@protocol IESLiveLinkmicUser <NSObject>

@property (readonly, nonatomic) HTSLiveUser *user;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, copy, nonatomic) NSString *secUserID;
@property (readonly, copy, nonatomic) NSString *linkmicID;
@property (readonly, nonatomic) BOOL isWaiting;
@property (readonly, nonatomic) BOOL isInvite;
@property (readonly, nonatomic) BOOL isApply;
@property (readonly, nonatomic) BOOL isLinked;
@property (readonly, nonatomic) BOOL isMuted;
@property (readonly, nonatomic) long long volume;

- (id)secUserID;
- (id)linkmicID;
- (BOOL)isInvite;
- (BOOL)isApply;
- (id)userID;
- (id)user;
- (long long)volume;
- (BOOL)isWaiting;
- (BOOL)isMuted;
- (BOOL)isLinked;

@end