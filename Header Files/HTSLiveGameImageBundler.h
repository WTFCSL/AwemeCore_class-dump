//
//     Generated by private class-dump
//

@class HTSLiveGameImage;

@interface HTSLiveGameImageBundler : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveGameImage *originImage;
@property (nonatomic) BOOL hasOriginImage;
@property (retain, nonatomic) HTSLiveGameImage *thumbImage;
@property (nonatomic) BOOL hasThumbImage;
@property (retain, nonatomic) HTSLiveGameImage *thumbHeifImage;
@property (nonatomic) BOOL hasThumbHeifImage;

+ (id)descriptor;

@end
