//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, NSMutableArray, HTSLiveLynxContainer;

@interface HTSLiveMyLiveCarouselItem : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) NSMutableArray *carouselItemsArray;
@property (readonly, nonatomic) unsigned long long carouselItemsArray_Count;
@property (copy, nonatomic) NSString *backupScene;
@property (retain, nonatomic) HTSLiveLynxContainer *lynxContainer;
@property (nonatomic) BOOL hasLynxContainer;
@property (nonatomic) int carouselInterval;

+ (id)descriptor;

@end
