//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAddressBookRecommendReasonService : HTSService <AWEAddressBookRecommendReasonService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)recommendReasonRelationTemplateWithUser:(id)arg0;
- (id)recommendReasonTemplateWithUser:(id)arg0;
- (id)encodedRecommendReasonTemplateWithUser:(id)arg0;
- (id)recommendDisplayNameWithUser:(id)arg0;
- (id)recommendDisplayRecommendReasonWithUser:(id)arg0;
- (id)recommendDisplayRecommendReasonWithUser:(id)arg0 useDefaultText:(BOOL)arg1;
- (id)recommendReasonDataWithUser:(id)arg0;
- (id)fansDisplayNameWithUser:(id)arg0;
- (BOOL)enableShowFansDisplayContactsNameWithUser:(id)arg0;
- (BOOL)enableDisplayContactsNameWithUser:(id)arg0;

@end
