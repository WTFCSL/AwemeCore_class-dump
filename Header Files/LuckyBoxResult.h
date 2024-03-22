//
//     Generated by private class-dump
//

@class LuckyBoxExpandAward, NSString, LuckyBoxGiftGuide, HTSLiveImage;

@interface LuckyBoxResult : IESLivePBBaseMessage

@property (nonatomic) BOOL succeed;
@property (nonatomic) long long boxId;
@property (nonatomic) int boxType;
@property (nonatomic) long long diamondCount;
@property (nonatomic) long long giftId;
@property (copy, nonatomic) NSString *giftName;
@property (nonatomic) long long cashCount;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) LuckyBoxExpandAward *expandAward;
@property (nonatomic) BOOL hasExpandAward;
@property (retain, nonatomic) LuckyBoxGiftGuide *giftGuide;
@property (nonatomic) BOOL hasGiftGuide;
@property (copy, nonatomic) NSString *boxIdStr;

+ (id)descriptor;

@end