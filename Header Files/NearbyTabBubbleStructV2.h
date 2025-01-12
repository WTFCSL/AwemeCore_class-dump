//
//     Generated by private class-dump
//

@class NSString, GPBInt32Array, UrlStructV2;

@interface NearbyTabBubbleStructV2 : GPBMessage

@property (copy, nonatomic) NSString *nearbyTabBubbleText;
@property (nonatomic) BOOL hasNearbyTabBubbleText;
@property (copy, nonatomic) NSString *nearbyTabBubbleMessage;
@property (nonatomic) BOOL hasNearbyTabBubbleMessage;
@property (copy, nonatomic) NSString *nearbyDiamondMessage;
@property (nonatomic) BOOL hasNearbyDiamondMessage;
@property (nonatomic) int nearbyTabBubbleType;
@property (nonatomic) BOOL hasNearbyTabBubbleType;
@property (retain, nonatomic) GPBInt32Array *lifeBubbleShowConditionArray;
@property (readonly, nonatomic) unsigned long long lifeBubbleShowConditionArray_Count;
@property (copy, nonatomic) NSString *nearbyTabBubbleMobExtra;
@property (nonatomic) BOOL hasNearbyTabBubbleMobExtra;
@property (copy, nonatomic) NSString *bubbleAfterSearchMob;
@property (nonatomic) BOOL hasBubbleAfterSearchMob;
@property (copy, nonatomic) NSString *nearbyTabBubbleMoment;
@property (nonatomic) BOOL hasNearbyTabBubbleMoment;
@property (nonatomic) long long startTime;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) long long endTime;
@property (nonatomic) BOOL hasEndTime;
@property (nonatomic) int frequency;
@property (nonatomic) BOOL hasFrequency;
@property (nonatomic) int dayFrequency;
@property (nonatomic) BOOL hasDayFrequency;
@property (copy, nonatomic) NSString *festivalName;
@property (nonatomic) BOOL hasFestivalName;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (nonatomic) int bubbleAttribute;
@property (nonatomic) BOOL hasBubbleAttribute;
@property (nonatomic) int style;
@property (nonatomic) BOOL hasStyle;
@property (retain, nonatomic) UrlStructV2 *bubbleImgURL;
@property (nonatomic) BOOL hasBubbleImgURL;
@property (nonatomic) int bubbleImgType;
@property (nonatomic) BOOL hasBubbleImgType;
@property (retain, nonatomic) UrlStructV2 *bubbleIconURL;
@property (nonatomic) BOOL hasBubbleIconURL;
@property (nonatomic) int dotStyle;
@property (nonatomic) BOOL hasDotStyle;
@property (copy, nonatomic) NSString *dotText;
@property (nonatomic) BOOL hasDotText;
@property (copy, nonatomic) NSString *guideDsl;
@property (nonatomic) BOOL hasGuideDsl;

+ (id)descriptor;

@end
