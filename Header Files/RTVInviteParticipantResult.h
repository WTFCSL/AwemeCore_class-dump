//
//     Generated by private class-dump
//

@class NSString;

@interface RTVInviteParticipantResult : NSObject {
    NSString *_inviteID;
    unsigned long long _inviteType;
}

@property (readonly, copy, nonatomic) NSString *inviteID;
@property (readonly, nonatomic) unsigned long long inviteType;

- (unsigned long long)inviteType;
- (id)initWithInviteID:(id)arg0 inviteType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)inviteID;

@end
