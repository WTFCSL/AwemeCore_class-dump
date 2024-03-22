//
//     Generated by private class-dump
//

@class NSString;

@interface AWEShareFeedbackChannel : AWEShareBaseChannel <AWEShareItemDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackParams;
- (id)shareImage;
- (void)didSelectShareItem:(id)arg0;
- (void)shareItem:(id)arg0 willAppear:(BOOL)arg1;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)arg0;

@end