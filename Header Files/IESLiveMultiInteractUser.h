//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, NSNumber, IESLiveInteractUserModelWrapper;

@interface IESLiveMultiInteractUser : NSObject {
    NSNumber *_userID;
    NSString *_linkMicStrID;
    NSNumber *_linkMicIntID;
    NSString *_nickName;
    HTSLiveImage *_avatarMedium;
    NSNumber *_linkStatus;
    NSNumber *_linkMicIndex;
    NSNumber *_roleType;
    unsigned long long _silenceStatus;
    unsigned long long _talking;
    IESLiveInteractUserModelWrapper *_userModel;
}

@property (retain, nonatomic) NSNumber *userID;
@property (copy, nonatomic) NSString *linkMicStrID;
@property (retain, nonatomic) NSNumber *linkMicIntID;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) HTSLiveImage *avatarMedium;
@property (retain, nonatomic) NSNumber *linkStatus;
@property (retain, nonatomic) NSNumber *linkMicIndex;
@property (retain, nonatomic) NSNumber *roleType;
@property (nonatomic) unsigned long long silenceStatus;
@property (nonatomic) unsigned long long talking;
@property (retain, nonatomic) IESLiveInteractUserModelWrapper *userModel;

- (id)avatarMedium;
- (void)setRoleType:(id)arg0;
- (id)roleType;
- (void)setAvatarMedium:(id)arg0;
- (id)linkMicStrID;
- (void)setLinkMicStrID:(id)arg0;
- (id)linkMicIntID;
- (void)setLinkMicIntID:(id)arg0;
- (void)setLinkStatus:(id)arg0;
- (id)linkMicIndex;
- (void)setLinkMicIndex:(id)arg0;
- (unsigned long long)silenceStatus;
- (void)setSilenceStatus:(unsigned long long)arg0;
- (id)userID;
- (void)setNickName:(id)arg0;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (id)nickName;
- (void)setTalking:(unsigned long long)arg0;
- (unsigned long long)talking;
- (id)linkStatus;

@end
