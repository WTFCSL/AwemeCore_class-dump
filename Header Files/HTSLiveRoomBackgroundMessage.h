//
//     Generated by private class-dump
//

@class HTSLiveCommon, HTSLiveImage;

@interface HTSLiveRoomBackgroundMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveImage *roomBackground;
@property (nonatomic) BOOL hasRoomBackground;

+ (id)descriptor;

@end