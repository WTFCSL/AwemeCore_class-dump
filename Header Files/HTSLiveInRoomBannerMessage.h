//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon;

@interface HTSLiveInRoomBannerMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) int position;
@property (nonatomic) int actionType;
@property (copy, nonatomic) NSString *containerURL;
@property (copy, nonatomic) NSString *lynxContainerURL;
@property (nonatomic) int containerType;
@property (nonatomic) int opType;

+ (id)descriptor;

@end
