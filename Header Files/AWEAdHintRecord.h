//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEAdHintRecord : NSObject <NSCoding> {
    long long _dislikeCount;
    NSArray *_lastThreeHintDates;
}

@property (nonatomic) long long dislikeCount;
@property (copy, nonatomic) NSArray *lastThreeHintDates;

- (void)clearDislike;
- (void)clearHintDates;
- (void)dislikeOnce;
- (void)showHintOnce;
- (long long)dislikeCount;
- (id)lastThreeHintDates;
- (void)setLastThreeHintDates:(id)arg0;
- (void)setDislikeCount:(long long)arg0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;

@end