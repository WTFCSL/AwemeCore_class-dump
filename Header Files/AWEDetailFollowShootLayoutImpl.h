//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDetailFollowShootLayoutImpl : NSObject <AWEDetailFollowShootLayoutProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutForHeaderCell:(id)arg0 model:(id)arg1;
- (double)heightForHeaderModel:(id)arg0;
- (void)layoutForSchemasCell:(id)arg0 model:(id)arg1 tapAction:(id /* block */)arg2;
- (double)heightForSchemasModel:(id)arg0;
- (void)layoutForSeparateLineCell:(id)arg0 model:(id)arg1;
- (double)heightForSeparateLineModel:(id)arg0;
- (void)layoutForAskPermissionCell:(id)arg0 model:(id)arg1;
- (double)heightForAskPermissionModel:(id)arg0;
- (void)layoutForEmptyCell:(id)arg0 model:(id)arg1;
- (double)heightForEmptyModel:(id)arg0;

@end
