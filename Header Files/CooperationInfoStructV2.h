//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface CooperationInfoStructV2 : GPBMessage

@property (copy, nonatomic) NSString *tag;
@property (nonatomic) BOOL hasTag;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (retain, nonatomic) NSMutableArray *coCreatorsArray;
@property (readonly, nonatomic) unsigned long long coCreatorsArray_Count;
@property (nonatomic) long long coCreatorNums;
@property (nonatomic) BOOL hasCoCreatorNums;
@property (nonatomic) long long acceptedNums;
@property (nonatomic) BOOL hasAcceptedNums;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasCursor;

+ (id)descriptor;

@end
