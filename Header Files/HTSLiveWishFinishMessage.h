//
//     Generated by private class-dump
//

@class HTSLiveCommon, HTSLiveImage;

@interface HTSLiveWishFinishMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveImage *gestureImageSingle;
@property (nonatomic) BOOL hasGestureImageSingle;
@property (retain, nonatomic) HTSLiveImage *gestureImageDouble;
@property (nonatomic) BOOL hasGestureImageDouble;
@property (nonatomic) long long displaySeconds;
@property (nonatomic) long long effectId;

+ (id)descriptor;

@end
