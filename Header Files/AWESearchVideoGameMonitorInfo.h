//
//     Generated by private class-dump
//

@class NSString;

@interface AWESearchVideoGameMonitorInfo : AWEBaseApiModel {
    BOOL _shouldAppendIdentity;
    NSString *_monitorURL;
    NSString *_openGameUrl;
}

@property (copy, nonatomic) NSString *monitorURL;
@property (nonatomic) BOOL shouldAppendIdentity;
@property (copy, nonatomic) NSString *openGameUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (id)monitorURL;
- (void)setMonitorURL:(id)arg0;
- (BOOL)shouldAppendIdentity;
- (void)setShouldAppendIdentity:(BOOL)arg0;
- (id)openGameUrl;
- (void)setOpenGameUrl:(id)arg0;
- (void).cxx_destruct;

@end
