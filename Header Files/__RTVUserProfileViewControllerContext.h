//
//     Generated by private class-dump
//

@class NSString;

@interface __RTVUserProfileViewControllerContext : NSObject <RTVInteractionUserProfileControllerContext> {
    NSString *roomID;
}

@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, nonatomic) BOOL disableEnterProfilePage;
@property (readonly, nonatomic) BOOL showStatisticInfo;
@property (readonly, nonatomic) BOOL showVerificationInfo;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSString *enterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterMethod;
- (id)enterFrom;
- (BOOL)disableEnterProfilePage;
- (BOOL)showStatisticInfo;
- (BOOL)showVerificationInfo;
- (void).cxx_destruct;
- (id)roomID;

@end
