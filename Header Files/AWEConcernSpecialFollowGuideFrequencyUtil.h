//
//     Generated by private class-dump
//

@class NSString;

@interface AWEConcernSpecialFollowGuideFrequencyUtil : NSObject <AWEConcernSpecialFollowGuideFrequencyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)onSpecialFollowGuideShow;
+ (BOOL)canShowSpecialFollowGuide;
+ (void)onSpecialFollowGuideClick;
+ (BOOL)todayHasShow;
+ (void)markTodayHasShow;
+ (void)increaseShowButNotClickTimes;
+ (id)midnightTimeStampKey;
+ (id)uidKeyWithPrefix:(id)arg0;
+ (void)clear;

@end