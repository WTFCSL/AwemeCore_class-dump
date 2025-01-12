//
//     Generated by private class-dump
//

@class NSString;

@interface AWEECShoppingGuideMessageSyncModel : MTLModel <MTLJSONSerializing> {
    NSString *_messageID;
    NSString *_searchResultType;
    NSString *_searchResultForm;
}

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *searchResultType;
@property (copy, nonatomic) NSString *searchResultForm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setSearchResultForm:(id)arg0;
- (id)searchResultForm;
- (id)messageID;
- (void).cxx_destruct;
- (void)setMessageID:(id)arg0;
- (id)searchResultType;
- (void)setSearchResultType:(id)arg0;

@end
