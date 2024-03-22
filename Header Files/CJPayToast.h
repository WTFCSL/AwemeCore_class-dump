//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayToast : NSObject <CJPayToastProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedToast;
+ (void)toastImage:(id)arg0 title:(id)arg1 duration:(double)arg2 inWindow:(id)arg3;

- (void)toastText:(id)arg0 inWindow:(id)arg1;
- (void)toastText:(id)arg0 duration:(double)arg1 inWindow:(id)arg2;
- (void)toastText:(id)arg0 code:(id)arg1 inWindow:(id)arg2;
- (void)toastText:(id)arg0 code:(id)arg1 duration:(double)arg2 inWindow:(id)arg3;
- (void)toastText:(id)arg0 inWindow:(id)arg1 location:(unsigned long long)arg2;

@end