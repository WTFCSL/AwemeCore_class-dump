//
//     Generated by private class-dump
//

@class NSArray, NSDictionary;

@interface BDXSCCSecureCheckingConfig : MTLModel {
    NSArray *_ignoreCheckingList;
    NSDictionary *_allowAndDenyList;
}

@property (copy, nonatomic) NSArray *ignoreCheckingList;
@property (copy, nonatomic) NSDictionary *allowAndDenyList;

- (id)ignoreCheckingList;
- (void)setIgnoreCheckingList:(id)arg0;
- (void)setAllowAndDenyList:(id)arg0;
- (id)allowAndDenyList;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end
