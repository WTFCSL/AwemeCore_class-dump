//
//     Generated by private class-dump
//

@class NSNumber;

@protocol IESLiveAnchorGiftPreferenceService <NSObject>

@property (nonatomic) long long notAllowGiftReason;
@property (readonly, nonatomic) NSNumber *giftAuthNumForRequest;
@property (nonatomic) BOOL allowGift;

- (void)markEntryShown;
- (BOOL)isEntryShownBefore;
- (long long)notAllowGiftReason;
- (void)setNotAllowGiftReason:(long long)arg0;
- (id)giftAuthNumForRequest;
- (BOOL)allowGift;
- (void)setAllowGift:(BOOL)arg0;

@end
