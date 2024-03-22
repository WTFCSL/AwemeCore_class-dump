//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSDictionary;

@interface AWEAdMultiPlatformPreferredModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_linkID;
    NSString *_openURL;
}

@property (retain, nonatomic) NSNumber *linkID;
@property (copy, nonatomic) NSString *openURL;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setOpenURL:(id)arg0;
- (void).cxx_destruct;
- (id)openURL;
- (id)linkID;
- (void)setLinkID:(id)arg0;

@end