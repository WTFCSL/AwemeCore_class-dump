//
//     Generated by private class-dump
//

@class NSString, GPBInt32Array, HTSLiveImage, NSMutableArray;

@interface PageSectionInfo : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt32Array *sectionBgStartColorArray;
@property (readonly, nonatomic) unsigned long long sectionBgStartColorArray_Count;
@property (retain, nonatomic) GPBInt32Array *sectionBgEndColorArray;
@property (readonly, nonatomic) unsigned long long sectionBgEndColorArray_Count;
@property (retain, nonatomic) HTSLiveImage *sectionHeaderImg;
@property (nonatomic) BOOL hasSectionHeaderImg;
@property (copy, nonatomic) NSString *entranceText;
@property (copy, nonatomic) NSString *entranceSchema;
@property (retain, nonatomic) HTSLiveImage *entranceIconImg;
@property (nonatomic) BOOL hasEntranceIconImg;
@property (retain, nonatomic) NSMutableArray *giftsArray;
@property (readonly, nonatomic) unsigned long long giftsArray_Count;
@property (copy, nonatomic) NSString *sectionName;

+ (id)descriptor;

@end