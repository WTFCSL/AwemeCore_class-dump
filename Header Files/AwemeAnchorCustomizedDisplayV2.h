//
//     Generated by private class-dump
//

@class GPBInt32Array, NSString;

@interface AwemeAnchorCustomizedDisplayV2 : GPBMessage

@property (nonatomic) long long afterPlayTimes;
@property (nonatomic) BOOL hasAfterPlayTimes;
@property (nonatomic) long long afterPlayMs;
@property (nonatomic) BOOL hasAfterPlayMs;
@property (retain, nonatomic) GPBInt32Array *timeSlicesArray;
@property (readonly, nonatomic) unsigned long long timeSlicesArray_Count;
@property (nonatomic) BOOL isSlideBackDisplay;
@property (nonatomic) BOOL hasIsSlideBackDisplay;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

- (long long)afterPlayMs;
- (long long)afterPlayTimes;

@end