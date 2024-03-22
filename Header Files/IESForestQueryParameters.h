//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESForestQueryParameters : NSObject {
    NSNumber *_waitGeckoUpdate;
    NSNumber *_onlyOnline;
    NSNumber *_dynamic;
    NSString *_prefix;
    NSString *_channel;
    NSString *_bundle;
}

@property (retain, nonatomic) NSNumber *waitGeckoUpdate;
@property (retain, nonatomic) NSNumber *onlyOnline;
@property (retain, nonatomic) NSNumber *dynamic;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;

- (void)setWaitGeckoUpdate:(id)arg0;
- (id)waitGeckoUpdate;
- (id)onlyOnline;
- (void)setOnlyOnline:(id)arg0;
- (id)bundle;
- (id)channel;
- (id)prefix;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (void)setBundle:(id)arg0;
- (void)setPrefix:(id)arg0;
- (id)initWithURLString:(id)arg0;
- (id)description;
- (id)dynamic;
- (void)setDynamic:(id)arg0;

@end
