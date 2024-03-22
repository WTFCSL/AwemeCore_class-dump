//
//     Generated by private class-dump
//

@class NSError, NSString;

@interface SECRouteTrafficResult : NSObject {
    NSError *_interrupt;
    NSString *_originTrafficURL;
    NSString *_safeTrafficURL;
}

@property (retain, nonatomic) NSError *interrupt;
@property (copy, nonatomic) NSString *originTrafficURL;
@property (copy, nonatomic) NSString *safeTrafficURL;

+ (id)blockResultWith:(id)arg0;
+ (id)safeResultWith:(id)arg0;

- (id)safeTrafficURL;
- (void)setInterrupt:(id)arg0;
- (void)setSafeTrafficURL:(id)arg0;
- (void)setOriginTrafficURL:(id)arg0;
- (id)originTrafficURL;
- (void).cxx_destruct;
- (id)interrupt;

@end