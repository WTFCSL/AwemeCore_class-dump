//
//     Generated by private class-dump
//

@class NSString;

@interface AWENovelWebUtil : NSObject <BDNovelWebUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableFalcon;
- (void)fireEvent:(id)arg0 data:(id)arg1;
- (void)fireEvent:(id)arg0 data:(id)arg1 engine:(id)arg2;
- (id)createWebViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)webViewConfig;

@end