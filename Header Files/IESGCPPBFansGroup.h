//
//     Generated by private class-dump
//

@class NSString, IESGCPPBEntryLimit;

@interface IESGCPPBFansGroup : GPBMessage

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *avatarUri;
@property (copy, nonatomic) NSString *notice;
@property (nonatomic) long long memberCount;
@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) int applyStatus;
@property (retain, nonatomic) IESGCPPBEntryLimit *entryLimit;
@property (nonatomic) BOOL hasEntryLimit;
@property (nonatomic) long long ownerUid;

+ (id)descriptor;

@end
