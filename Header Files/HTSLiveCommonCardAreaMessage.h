//
//     Generated by private class-dump
//

@class HTSLiveCommonCardArea, HTSLiveCommon, HTSLiveBizPinArea, HTSLiveBottomRightCardArea;

@interface HTSLiveCommonCardAreaMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int messageType;
@property (retain, nonatomic) HTSLiveBottomRightCardArea *bottomRightCardData;
@property (nonatomic) BOOL hasBottomRightCardData;
@property (retain, nonatomic) HTSLiveBizPinArea *bizPinArea;
@property (nonatomic) BOOL hasBizPinArea;
@property (retain, nonatomic) HTSLiveCommonCardArea *commonCardArea;
@property (nonatomic) BOOL hasCommonCardArea;

+ (id)descriptor;

@end
