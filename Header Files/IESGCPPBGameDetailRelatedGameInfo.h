//
//     Generated by private class-dump
//

@class NSString, IESGCPPBGameDetailDownloadButton, IESGCPPBGameDetailMiniGameMeta;

@interface IESGCPPBGameDetailRelatedGameInfo : GPBMessage

@property (copy, nonatomic) NSString *description_p;
@property (copy, nonatomic) NSString *icon;
@property (retain, nonatomic) IESGCPPBGameDetailDownloadButton *downloadBtn;
@property (nonatomic) BOOL hasDownloadBtn;
@property (retain, nonatomic) IESGCPPBGameDetailMiniGameMeta *miniGameMeta;
@property (nonatomic) BOOL hasMiniGameMeta;

+ (id)descriptor;

@end
