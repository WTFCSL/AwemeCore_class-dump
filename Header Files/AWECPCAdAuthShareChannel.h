//
//     Generated by private class-dump
//

@class NSString;

@interface AWECPCAdAuthShareChannel : AWEShareBaseChannel <AWEShareItemDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shareImage;
- (void)shareItem:(id)arg0 willAppear:(BOOL)arg1;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)arg0;

@end
