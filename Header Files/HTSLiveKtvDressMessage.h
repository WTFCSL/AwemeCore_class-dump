//
//     Generated by private class-dump
//

@class HTSLiveChangeKTVDressContent, HTSLiveCommon, HTSLiveAddKTVDressContent;

@interface HTSLiveKtvDressMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int messageType;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveAddKTVDressContent *addDressContent;
@property (retain, nonatomic) HTSLiveChangeKTVDressContent *changeDressContent;

+ (id)descriptor;

@end
