//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon;

@interface HTSLiveGameCPUserDownloadMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *userNickName;
@property (nonatomic) long long userDownloadCount;
@property (copy, nonatomic) NSString *userDownloadContent;
@property (copy, nonatomic) NSString *downloadGameName;
@property (nonatomic) int type;

+ (id)descriptor;

@end
