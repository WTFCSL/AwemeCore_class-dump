//
//     Generated by private class-dump
//

@class NSString;

@interface BDNovelReaderExcitingAdConfig : NSObject {
    NSString *_message;
    NSString *_iconUrl;
    NSString *_excitingTxt;
    long long _freeDuration;
}

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *excitingTxt;
@property (nonatomic) long long freeDuration;

- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (void)updateWithDict:(id)arg0;
- (void)setExcitingTxt:(id)arg0;
- (id)excitingTxt;
- (void)setMessage:(id)arg0;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg0;
- (id)message;
- (void)setFreeDuration:(long long)arg0;
- (long long)freeDuration;

@end
