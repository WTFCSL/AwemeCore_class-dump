//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEPOIHeadRateFeedlModel : MTLModel <MTLJSONSerializing> {
    NSString *_buttonText;
    NSString *_jumpUrl;
    NSArray *_iconURLs;
}

@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) NSArray *iconURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)jumpUrl;
- (void)setJumpUrl:(id)arg0;
- (void).cxx_destruct;
- (id)buttonText;
- (void)setButtonText:(id)arg0;
- (id)iconURLs;
- (void)setIconURLs:(id)arg0;

@end