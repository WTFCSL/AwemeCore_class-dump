//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface HTSLiveHotAtmosphere : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *img;
@property (copy, nonatomic) NSString *saleNum;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *num;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) long long leftMargin;
@property (nonatomic) long long uiType;
@property (retain, nonatomic) NSMutableArray *bgColorsArray;
@property (readonly, nonatomic) unsigned long long bgColorsArray_Count;
@property (retain, nonatomic) NSMutableArray *borderColorsArray;
@property (readonly, nonatomic) unsigned long long borderColorsArray_Count;
@property (copy, nonatomic) NSString *topImg;

+ (id)descriptor;

@end
