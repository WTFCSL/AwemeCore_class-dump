//
//     Generated by private class-dump
//

@class NSString;

@interface AWENearbySearchTransInfo : MTLModel <MTLJSONSerializing> {
    NSString *_fromVideoID;
    NSString *_fromRoomID;
    NSString *_fromPOIID;
    NSString *_fromProductID;
    NSString *_fromPageID;
    NSString *_searchWordInfo;
}

@property (copy, nonatomic) NSString *fromVideoID;
@property (copy, nonatomic) NSString *fromRoomID;
@property (copy, nonatomic) NSString *fromPOIID;
@property (copy, nonatomic) NSString *fromProductID;
@property (copy, nonatomic) NSString *fromPageID;
@property (copy, nonatomic) NSString *searchWordInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)fromVideoID;
- (void)setFromVideoID:(id)arg0;
- (id)fromRoomID;
- (void)setFromRoomID:(id)arg0;
- (id)fromPOIID;
- (void)setFromPOIID:(id)arg0;
- (id)fromProductID;
- (void)setFromProductID:(id)arg0;
- (id)fromPageID;
- (void)setFromPageID:(id)arg0;
- (id)searchWordInfo;
- (void)setSearchWordInfo:(id)arg0;
- (void).cxx_destruct;

@end