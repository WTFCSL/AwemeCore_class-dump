//
//     Generated by private class-dump
//

@class NSString, IESGCPPBCommentSourceInfo_Trafficextra, IESGCPPBCommentSourceInfo_Promotescenesub;

@interface IESGCPPBCommentSourceInfo : GPBMessage

@property (copy, nonatomic) NSString *promoteScene;
@property (copy, nonatomic) NSString *contentId;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *trafficSource;
@property (retain, nonatomic) IESGCPPBCommentSourceInfo_Trafficextra *trafficExtra;
@property (nonatomic) BOOL hasTrafficExtra;
@property (retain, nonatomic) IESGCPPBCommentSourceInfo_Promotescenesub *promoteSceneSub;
@property (nonatomic) BOOL hasPromoteSceneSub;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *deviceIp;

+ (id)descriptor;

@end
