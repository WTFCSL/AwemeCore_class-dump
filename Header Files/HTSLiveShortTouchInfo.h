//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, HTSLiveShortTouchImageLayers;

@interface HTSLiveShortTouchInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *shortTouchURL;
@property (copy, nonatomic) NSString *shortTouchFallbackURL;
@property (nonatomic) int containerType;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (copy, nonatomic) NSString *imgURL;
@property (copy, nonatomic) NSString *jumpSchema;
@property (nonatomic) int showAnimation;
@property (nonatomic) int animationType;
@property (retain, nonatomic) NSMutableArray *subItemListArray;
@property (readonly, nonatomic) unsigned long long subItemListArray_Count;
@property (retain, nonatomic) HTSLiveShortTouchImageLayers *imgLayers;
@property (nonatomic) BOOL hasImgLayers;
@property (nonatomic) unsigned int animationQuota;
@property (copy, nonatomic) NSString *accessibleName;

+ (id)descriptor;

- (id)dictionary;

@end