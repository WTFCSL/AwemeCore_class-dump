//
//     Generated by private class-dump
//

@class NSString, UrlStructV2, NSMutableArray;

@interface FromNearbyBarStructV2 : GPBMessage

@property (copy, nonatomic) NSString *id_p;
@property (nonatomic) BOOL hasId_p;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (retain, nonatomic) UrlStructV2 *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (nonatomic) int frequencyLimit;
@property (nonatomic) BOOL hasFrequencyLimit;
@property (retain, nonatomic) NSMutableArray *reportValuesArray;
@property (readonly, nonatomic) unsigned long long reportValuesArray_Count;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
