//
//     Generated by private class-dump
//

@class HTSLiveEpisode, NSString, HTSLiveRoom;

@interface VsFeedItem : IESLivePBBaseMessage

@property (nonatomic) long long type;
@property (retain, nonatomic) HTSLiveRoom *data_p;
@property (nonatomic) BOOL hasData_p;
@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (nonatomic) BOOL hasEpisode;
@property (copy, nonatomic) NSString *rid;

+ (id)descriptor;

@end
