//
//     Generated by private class-dump
//

@class NSString;

@interface IESECWinLynxSSR : MTLModel <MTLJSONSerializing> {
    NSString *_ssrData;
    NSString *_hydrateUrl;
    NSString *_hydrateData;
}

@property (copy, nonatomic) NSString *ssrData;
@property (copy, nonatomic) NSString *hydrateUrl;
@property (copy, nonatomic) NSString *hydrateData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)ssrData;
- (void)setSsrData:(id)arg0;
- (id)hydrateUrl;
- (void)setHydrateUrl:(id)arg0;
- (id)hydrateData;
- (void)setHydrateData:(id)arg0;
- (void).cxx_destruct;

@end
