//
//     Generated by private class-dump
//

@class NSString;

@interface IESECListKitFeedExtraModel : MTLModel <MTLJSONSerializing> {
    NSString *_postBack;
    NSString *_reservedSectionIDs;
}

@property (copy, nonatomic) NSString *postBack;
@property (copy, nonatomic) NSString *reservedSectionIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)postBack;
- (void)setPostBack:(id)arg0;
- (id)reservedSectionIDs;
- (void)setReservedSectionIDs:(id)arg0;
- (void).cxx_destruct;

@end
