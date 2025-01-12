//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, HTSLiveTab_TopText, NSMutableArray;

@interface HTSLiveTab : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long rankType;
@property (retain, nonatomic) HTSLiveImage *atmosphereImage;
@property (nonatomic) BOOL hasAtmosphereImage;
@property (retain, nonatomic) HTSLiveTab_TopText *topText;
@property (nonatomic) BOOL hasTopText;
@property (retain, nonatomic) NSMutableArray *subTabsArray;
@property (readonly, nonatomic) unsigned long long subTabsArray_Count;
@property (retain, nonatomic) NSMutableArray *tabsArray;
@property (readonly, nonatomic) unsigned long long tabsArray_Count;

+ (id)descriptor;

@end
