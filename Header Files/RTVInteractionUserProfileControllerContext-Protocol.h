//
//     Generated by private class-dump
//

@class NSString;

@protocol RTVInteractionUserProfileControllerContext <NSObject>

@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, nonatomic) BOOL disableEnterProfilePage;
@property (readonly, nonatomic) BOOL showStatisticInfo;
@property (readonly, nonatomic) BOOL showVerificationInfo;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSString *enterMethod;

- (id)enterMethod;
- (id)enterFrom;
- (BOOL)disableEnterProfilePage;
- (BOOL)showStatisticInfo;
- (BOOL)showVerificationInfo;
- (id)roomID;

@end
