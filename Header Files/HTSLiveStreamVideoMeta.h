//
//     Generated by private class-dump
//

@class HTSLiveStreamVideoMeta_StreamLocation;

@interface HTSLiveStreamVideoMeta : IESLivePBBaseMessage

@property (nonatomic) long long streamId;
@property (retain, nonatomic) HTSLiveStreamVideoMeta_StreamLocation *startLocation;
@property (nonatomic) BOOL hasStartLocation;
@property (retain, nonatomic) HTSLiveStreamVideoMeta_StreamLocation *endLocation;
@property (nonatomic) BOOL hasEndLocation;

+ (id)descriptor;

@end
