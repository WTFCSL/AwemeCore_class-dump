//
//     Generated by private class-dump
//

@class NSNumber;

@interface AWEInterestDiscoverBarBanModel : NSObject <NSCoding, NSCopying, NSMutableCopying> {
    NSNumber *_showTime;
    NSNumber *_lastClickTimestamp;
    NSNumber *_lastShowTimestamp;
    NSNumber *_banTimestamp;
}

@property (retain, nonatomic) NSNumber *showTime;
@property (retain, nonatomic) NSNumber *lastClickTimestamp;
@property (retain, nonatomic) NSNumber *lastShowTimestamp;
@property (retain, nonatomic) NSNumber *banTimestamp;

- (id)showTime;
- (void)setShowTime:(id)arg0;
- (id)lastClickTimestamp;
- (void)setLastClickTimestamp:(id)arg0;
- (id)lastShowTimestamp;
- (void)setLastShowTimestamp:(id)arg0;
- (id)banTimestamp;
- (void)setBanTimestamp:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end
