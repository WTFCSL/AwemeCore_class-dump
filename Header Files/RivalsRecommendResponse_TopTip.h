//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage;

@interface RivalsRecommendResponse_TopTip : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) HTSLiveImage *img;
@property (nonatomic) BOOL hasImg;
@property (nonatomic) int topTipType;
@property (copy, nonatomic) NSString *schemeURL;

+ (id)descriptor;

@end