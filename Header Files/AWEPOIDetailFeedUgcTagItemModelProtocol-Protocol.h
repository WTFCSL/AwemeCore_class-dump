//
//     Generated by private class-dump
//

@class NSValue;

@protocol AWEPOIDetailFeedUgcTagItemModelProtocol <AWEPOIDetailFeedUgcCommonTagSizeModelProtocol>

@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) NSValue *tagFrame;
@property (nonatomic) BOOL hasTrackedShow;
@property (nonatomic) BOOL stopSelection;

- (id)requestParam;
- (id)tagFrame;
- (void)setTagFrame:(id)arg0;
- (BOOL)hasTrackedShow;
- (void)setHasTrackedShow:(BOOL)arg0;
- (BOOL)isDefaultMixTag;
- (BOOL)stopSelection;
- (void)setStopSelection:(BOOL)arg0;
- (BOOL)isSameWithTag:(id)arg0;
- (id)requestParamKey;
- (long long)tagCount;
- (id)requestParamDict;
- (void)setIsSelected:(BOOL)arg0;
- (BOOL)isSelected;
- (id)tagName;

@end
