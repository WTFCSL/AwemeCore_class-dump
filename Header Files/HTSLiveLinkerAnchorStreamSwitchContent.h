//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface HTSLiveLinkerAnchorStreamSwitchContent : IESLivePBBaseMessage

@property (readonly, copy, nonatomic) NSString *mixAnchorUserID;
@property (nonatomic) BOOL useBackupStream;
@property (nonatomic) long long anchorUserId;
@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (nonatomic) unsigned long long version;

+ (id)descriptor;

- (id)mixAnchorUserID;

@end